/* This file is automatically generated.  Do not edit. */
#ifndef _SELINUX_FLASK_H_
#define _SELINUX_FLASK_H_

#define SECCLASS_SECURITY                                 1
#define SECCLASS_PROCESS                                  2
#define SECCLASS_PROCESS2                                 3
#define SECCLASS_SYSTEM                                   4
#define SECCLASS_CAPABILITY                               5
#define SECCLASS_FILESYSTEM                               6
#define SECCLASS_FILE                                     7
#define SECCLASS_DIR                                      8
#define SECCLASS_FD                                       9
#define SECCLASS_LNK_FILE                                10
#define SECCLASS_CHR_FILE                                11
#define SECCLASS_BLK_FILE                                12
#define SECCLASS_SOCK_FILE                               13
#define SECCLASS_FIFO_FILE                               14
#define SECCLASS_SOCKET                                  15
#define SECCLASS_TCP_SOCKET                              16
#define SECCLASS_UDP_SOCKET                              17
#define SECCLASS_RAWIP_SOCKET                            18
#define SECCLASS_NODE                                    19
#define SECCLASS_NETIF                                   20
#define SECCLASS_NETLINK_SOCKET                          21
#define SECCLASS_PACKET_SOCKET                           22
#define SECCLASS_KEY_SOCKET                              23
#define SECCLASS_UNIX_STREAM_SOCKET                      24
#define SECCLASS_UNIX_DGRAM_SOCKET                       25
#define SECCLASS_SEM                                     26
#define SECCLASS_MSG                                     27
#define SECCLASS_MSGQ                                    28
#define SECCLASS_SHM                                     29
#define SECCLASS_IPC                                     30
#define SECCLASS_NETLINK_ROUTE_SOCKET                    31
#define SECCLASS_NETLINK_FIREWALL_SOCKET                 32
#define SECCLASS_NETLINK_TCPDIAG_SOCKET                  33
#define SECCLASS_NETLINK_NFLOG_SOCKET                    34
#define SECCLASS_NETLINK_XFRM_SOCKET                     35
#define SECCLASS_NETLINK_SELINUX_SOCKET                  36
#define SECCLASS_NETLINK_AUDIT_SOCKET                    37
#define SECCLASS_NETLINK_IP6FW_SOCKET                    38
#define SECCLASS_NETLINK_DNRT_SOCKET                     39
#define SECCLASS_ASSOCIATION                             40
#define SECCLASS_NETLINK_KOBJECT_UEVENT_SOCKET           41
#define SECCLASS_APPLETALK_SOCKET                        42
#define SECCLASS_PACKET                                  43
#define SECCLASS_KEY                                     44
#define SECCLASS_DCCP_SOCKET                             45
#define SECCLASS_MEMPROTECT                              46
#define SECCLASS_PEER                                    47
#define SECCLASS_CAPABILITY2                             48
#define SECCLASS_KERNEL_SERVICE                          49
#define SECCLASS_TUN_SOCKET                              50
#define SECCLASS_INFINIBAND_PKEY                         51
#define SECCLASS_INFINIBAND_ENDPORT                      52
#define SECCLASS_BPF                                     53

#define SECINITSID_KERNEL                                   1
#define SECINITSID_SECURITY                                 2
#define SECINITSID_UNLABELED                                3
#define SECINITSID_FS                                       4
#define SECINITSID_FILE                                     5
#define SECINITSID_FILE_LABELS                              6
#define SECINITSID_INIT                                     7
#define SECINITSID_ANY_SOCKET                               8
#define SECINITSID_PORT                                     9
#define SECINITSID_NETIF                                   10
#define SECINITSID_NETMSG                                  11
#define SECINITSID_NODE                                    12
#define SECINITSID_IGMP_PACKET                             13
#define SECINITSID_ICMP_SOCKET                             14
#define SECINITSID_TCP_SOCKET                              15
#define SECINITSID_SYSCTL_MODPROBE                         16
#define SECINITSID_SYSCTL                                  17
#define SECINITSID_SYSCTL_FS                               18
#define SECINITSID_SYSCTL_KERNEL                           19
#define SECINITSID_SYSCTL_NET                              20
#define SECINITSID_SYSCTL_NET_UNIX                         21
#define SECINITSID_SYSCTL_VM                               22
#define SECINITSID_SYSCTL_DEV                              23
#define SECINITSID_KMOD                                    24
#define SECINITSID_POLICY                                  25
#define SECINITSID_SCMP_PACKET                             26
#define SECINITSID_DEVNULL                                 27

#define SECINITSID_NUM 27

static inline bool security_is_socket_class(u16 kern_tclass)
{
	bool sock = false;

	switch (kern_tclass) {
	case SECCLASS_SOCKET:
	case SECCLASS_TCP_SOCKET:
	case SECCLASS_UDP_SOCKET:
	case SECCLASS_RAWIP_SOCKET:
	case SECCLASS_NETLINK_SOCKET:
	case SECCLASS_PACKET_SOCKET:
	case SECCLASS_KEY_SOCKET:
	case SECCLASS_UNIX_STREAM_SOCKET:
	case SECCLASS_UNIX_DGRAM_SOCKET:
	case SECCLASS_NETLINK_ROUTE_SOCKET:
	case SECCLASS_NETLINK_FIREWALL_SOCKET:
	case SECCLASS_NETLINK_TCPDIAG_SOCKET:
	case SECCLASS_NETLINK_NFLOG_SOCKET:
	case SECCLASS_NETLINK_XFRM_SOCKET:
	case SECCLASS_NETLINK_SELINUX_SOCKET:
	case SECCLASS_NETLINK_AUDIT_SOCKET:
	case SECCLASS_NETLINK_IP6FW_SOCKET:
	case SECCLASS_NETLINK_DNRT_SOCKET:
	case SECCLASS_NETLINK_KOBJECT_UEVENT_SOCKET:
	case SECCLASS_APPLETALK_SOCKET:
	case SECCLASS_DCCP_SOCKET:
	case SECCLASS_TUN_SOCKET:
		sock = true;
		break;
	default:
		break;
	}

	return sock;
}

#endif
