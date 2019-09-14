/*
 * Copyright (c) 2005 Topspin Communications.  All rights reserved.
 * Copyright (c) 2005 Cisco Systems.  All rights reserved.
 * Copyright (c) 2005 Mellanox Technologies. All rights reserved.
 *
 * This software is available to you under a choice of one of two
 * licenses.  You may choose to be licensed under the terms of the GNU
 * General Public License (GPL) Version 2, available from the file
 * COPYING in the main directory of this source tree, or the
 * OpenIB.org BSD license below:
 *
 *     Redistribution and use in source and binary forms, with or
 *     without modification, are permitted provided that the following
 *     conditions are met:
 *
 *      - Redistributions of source code must retain the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer.
 *
 *      - Redistributions in binary form must reproduce the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer in the documentation and/or other materials
 *        provided with the distribution.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include <linux/mm.h>
#include <linux/dma-mapping.h>
#include <linux/sched.h>
#include <linux/export.h>
#include <linux/hugetlb.h>
#include <linux/dma-attrs.h>
#include <linux/slab.h>
#include <rdma/ib_umem_odp.h>

#include "uverbs.h"


static void __ib_umem_release(struct ib_device *dev, struct ib_umem *umem, int dirty)
{
	struct scatterlist *sg;
	struct page *page;
	int i;

	if (umem->nmap > 0)
		ib_dma_unmap_sg(dev, umem->sg_head.sgl,
				umem->npages,
				DMA_BIDIRECTIONAL);

	for_each_sg(umem->sg_head.sgl, sg, umem->npages, i) {

		page = sg_page(sg);
		if (!PageDirty(page) && umem->writable && dirty)
			set_page_dirty_lock(page);
		put_page(page);
	}

	sg_free_table(&umem->sg_head);
}

/**
 * ib_umem_get - Pin and DMA map userspace memory.
 *
 * If access flags indicate ODP memory, avoid pinning. Instead, stores
 * the mm for future page fault handling in conjunction with MMU notifiers.
 *
 * @context: userspace context to pin memory for
 * @addr: userspace virtual address to start at
 * @size: length of region to pin
 * @access: IB_ACCESS_xxx flags for memory being pinned
 * @dmasync: flush in-flight DMA when the memory region is written
 */
struct ib_umem *ib_umem_get(struct ib_ucontext *context, unsigned long addr,
			    size_t size, int access, int dmasync)
{
	struct ib_umem *umem;
	struct page **page_list;
	struct vm_area_struct **vma_list;
	unsigned long lock_limit;
	unsigned long new_pinned;
	unsigned long cur_base;
	struct mm_struct *mm;
	unsigned long npages;
	int ret;
	int i;
	DEFINE_DMA_ATTRS(attrs);
	struct scatterlist *sg, *sg_list_start;

	if (dmasync)
		dma_set_attr(DMA_ATTR_WRITE_BARRIER, &attrs);

	/*
	 * If the combination of the addr and size requested for this memory
	 * region causes an integer overflow, return error.
	 */
	if (((addr + size) < addr) ||
	    PAGE_ALIGN(addr + size) < (addr + size))
		return ERR_PTR(-EINVAL);

	if (!can_do_mlock())
		return ERR_PTR(-EPERM);

	if (access & IB_ACCESS_ON_DEMAND) {
		umem = kzalloc(sizeof(struct ib_umem_odp), GFP_KERNEL);
		if (!umem)
			return ERR_PTR(-ENOMEM);
		umem->is_odp = 1;
	} else {
		umem = kzalloc(sizeof(*umem), GFP_KERNEL);
		if (!umem)
			return ERR_PTR(-ENOMEM);
	}

	umem->context    = context;
	umem->length     = size;
	umem->address    = addr;
	umem->page_shift = PAGE_SHIFT;
	umem->writable   = ib_access_writable(access);
	umem->owning_mm = mm = current->mm;
	mmgrab(mm);

	if (access & IB_ACCESS_ON_DEMAND) {
		ret = ib_umem_odp_get(to_ib_umem_odp(umem), access);
		if (ret)
			goto umem_kfree;
		return umem;
	}

	/* We assume the memory is from hugetlb until proved otherwise */
	umem->hugetlb   = 1;

	page_list = (struct page **) __get_free_page(GFP_KERNEL);
	if (!page_list) {
		ret = -ENOMEM;
		goto umem_kfree;
	}

	/*
	 * if we can't alloc the vma_list, it's not so bad;
	 * just assume the memory is not hugetlb memory
	 */
	vma_list = (struct vm_area_struct **) __get_free_page(GFP_KERNEL);
	if (!vma_list)
		umem->hugetlb = 0;

	npages = ib_umem_num_pages(umem);
	if (npages == 0 || npages > UINT_MAX) {
		ret = -EINVAL;
		goto out;
	}

	lock_limit = rlimit(RLIMIT_MEMLOCK) >> PAGE_SHIFT;

	down_write(&mm->mmap_sem);
	if (check_add_overflow(mm->pinned_vm, npages, &new_pinned) ||
	    (new_pinned > lock_limit && !capable(CAP_IPC_LOCK))) {
		up_write(&mm->mmap_sem);
		ret = -ENOMEM;
		goto out;
	}
	mm->pinned_vm = new_pinned;
	up_write(&mm->mmap_sem);

	cur_base = addr & PAGE_MASK;

	ret = sg_alloc_table(&umem->sg_head, npages, GFP_KERNEL);
	if (ret)
		goto vma;

	sg_list_start = umem->sg_head.sgl;

	while (npages) {
		down_read(&mm->mmap_sem);
		ret = get_user_pages_longterm(cur_base,
				min_t(unsigned long, npages,
				      PAGE_SIZE / sizeof (struct page *)),
				1, !umem->writable, page_list, vma_list);

		if (ret < 0) {
			up_read(&mm->mmap_sem);
			goto umem_release;
		}

		umem->npages += ret;
		cur_base += ret * PAGE_SIZE;
		npages   -= ret;

		/* Continue to hold the mmap_sem as vma_list access
		 * needs to be protected.
		 */
		for_each_sg(sg_list_start, sg, ret, i) {
			if (vma_list && !is_vm_hugetlb_page(vma_list[i]))
				umem->hugetlb = 0;

			sg_set_page(sg, page_list[i], PAGE_SIZE, 0);
		}
		up_read(&mm->mmap_sem);

		/* preparing for next loop */
		sg_list_start = sg;
	}

	umem->nmap = ib_dma_map_sg_attrs(context->device,
				  umem->sg_head.sgl,
				  umem->npages,
				  DMA_BIDIRECTIONAL,
				  &attrs);

	if (!umem->nmap) {
		ret = -ENOMEM;
		goto umem_release;
	}

	ret = 0;
	goto out;

umem_release:
	__ib_umem_release(context->device, umem, 0);
vma:
	down_write(&mm->mmap_sem);
	mm->pinned_vm -= ib_umem_num_pages(umem);
	up_write(&mm->mmap_sem);
out:
	if (vma_list)
		free_page((unsigned long) vma_list);
	free_page((unsigned long) page_list);
umem_kfree:
	if (ret) {
		mmdrop(umem->owning_mm);
		kfree(umem);
	}
	return ret ? ERR_PTR(ret) : umem;
}
EXPORT_SYMBOL(ib_umem_get);

static void __ib_umem_release_tail(struct ib_umem *umem)
{
	mmdrop(umem->owning_mm);
	if (umem->is_odp)
		kfree(to_ib_umem_odp(umem));
	else
		kfree(umem);
}

static void ib_umem_release_defer(struct work_struct *work)
{
	struct ib_umem *umem = container_of(work, struct ib_umem, work);

	down_write(&umem->owning_mm->mmap_sem);
	umem->owning_mm->pinned_vm -= ib_umem_num_pages(umem);
	up_write(&umem->owning_mm->mmap_sem);

	__ib_umem_release_tail(umem);
}

/**
 * ib_umem_release - release memory pinned with ib_umem_get
 * @umem: umem struct to release
 */
void ib_umem_release(struct ib_umem *umem)
{
	struct ib_ucontext *context = umem->context;

	if (umem->is_odp) {
		ib_umem_odp_release(to_ib_umem_odp(umem));
		__ib_umem_release_tail(umem);
		return;
	}

	__ib_umem_release(umem->context->device, umem, 1);

	/*
	 * We may be called with the mm's mmap_sem already held.  This
	 * can happen when a userspace munmap() is the call that drops
	 * the last reference to our file and calls our release
	 * method.  If there are memory regions to destroy, we'll end
	 * up here and not be able to take the mmap_sem.  In that case
	 * we defer the vm_locked accounting a workqueue.
	 */
	if (context->closing) {
		if (!down_write_trylock(&umem->owning_mm->mmap_sem)) {
			INIT_WORK(&umem->work, ib_umem_release_defer);
			queue_work(ib_wq, &umem->work);
			return;
		}
	} else {
		down_write(&umem->owning_mm->mmap_sem);
	}
	umem->owning_mm->pinned_vm -= ib_umem_num_pages(umem);
	up_write(&umem->owning_mm->mmap_sem);

	__ib_umem_release_tail(umem);
}
EXPORT_SYMBOL(ib_umem_release);

int ib_umem_page_count(struct ib_umem *umem)
{
	int i;
	int n;
	struct scatterlist *sg;

	if (umem->is_odp)
		return ib_umem_num_pages(umem);

	n = 0;
	for_each_sg(umem->sg_head.sgl, sg, umem->nmap, i)
		n += sg_dma_len(sg) >> umem->page_shift;

	return n;
}
EXPORT_SYMBOL(ib_umem_page_count);

/*
 * Copy from the given ib_umem's pages to the given buffer.
 *
 * umem - the umem to copy from
 * offset - offset to start copying from
 * dst - destination buffer
 * length - buffer length
 *
 * Returns 0 on success, or an error code.
 */
int ib_umem_copy_from(void *dst, struct ib_umem *umem, size_t offset,
		      size_t length)
{
	size_t end = offset + length;
	int ret;

	if (offset > umem->length || length > umem->length - offset) {
		pr_err("ib_umem_copy_from not in range. offset: %zd umem length: %zd end: %zd\n",
		       offset, umem->length, end);
		return -EINVAL;
	}

	ret = sg_pcopy_to_buffer(umem->sg_head.sgl, umem->npages, dst, length,
				 offset + ib_umem_offset(umem));

	if (ret < 0)
		return ret;
	else if (ret != length)
		return -EINVAL;
	else
		return 0;
}
EXPORT_SYMBOL(ib_umem_copy_from);
