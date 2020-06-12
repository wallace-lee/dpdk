/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(c) 2014-2020 Broadcom
 * All rights reserved.
 */


#include "ulp_template_db.h"
#include "ulp_template_field_db.h"
#include "ulp_template_struct.h"
#include "ulp_rte_parser.h"

uint32_t ulp_act_prop_map_table[] = {
	[BNXT_ULP_ACT_PROP_IDX_ENCAP_TUN_SZ] =
		BNXT_ULP_ACT_PROP_SZ_ENCAP_TUN_SZ,
	[BNXT_ULP_ACT_PROP_IDX_ENCAP_IP_SZ] =
		BNXT_ULP_ACT_PROP_SZ_ENCAP_IP_SZ,
	[BNXT_ULP_ACT_PROP_IDX_ENCAP_VTAG_SZ] =
		BNXT_ULP_ACT_PROP_SZ_ENCAP_VTAG_SZ,
	[BNXT_ULP_ACT_PROP_IDX_ENCAP_VTAG_TYPE] =
		BNXT_ULP_ACT_PROP_SZ_ENCAP_VTAG_TYPE,
	[BNXT_ULP_ACT_PROP_IDX_ENCAP_VTAG_NUM] =
		BNXT_ULP_ACT_PROP_SZ_ENCAP_VTAG_NUM,
	[BNXT_ULP_ACT_PROP_IDX_ENCAP_L3_TYPE] =
		BNXT_ULP_ACT_PROP_SZ_ENCAP_L3_TYPE,
	[BNXT_ULP_ACT_PROP_IDX_MPLS_POP_NUM] =
		BNXT_ULP_ACT_PROP_SZ_MPLS_POP_NUM,
	[BNXT_ULP_ACT_PROP_IDX_MPLS_PUSH_NUM] =
		BNXT_ULP_ACT_PROP_SZ_MPLS_PUSH_NUM,
	[BNXT_ULP_ACT_PROP_IDX_PORT_ID] =
		BNXT_ULP_ACT_PROP_SZ_PORT_ID,
	[BNXT_ULP_ACT_PROP_IDX_VNIC] =
		BNXT_ULP_ACT_PROP_SZ_VNIC,
	[BNXT_ULP_ACT_PROP_IDX_VPORT] =
		BNXT_ULP_ACT_PROP_SZ_VPORT,
	[BNXT_ULP_ACT_PROP_IDX_MARK] =
		BNXT_ULP_ACT_PROP_SZ_MARK,
	[BNXT_ULP_ACT_PROP_IDX_COUNT] =
		BNXT_ULP_ACT_PROP_SZ_COUNT,
	[BNXT_ULP_ACT_PROP_IDX_METER] =
		BNXT_ULP_ACT_PROP_SZ_METER,
	[BNXT_ULP_ACT_PROP_IDX_SET_MAC_SRC] =
		BNXT_ULP_ACT_PROP_SZ_SET_MAC_SRC,
	[BNXT_ULP_ACT_PROP_IDX_SET_MAC_DST] =
		BNXT_ULP_ACT_PROP_SZ_SET_MAC_DST,
	[BNXT_ULP_ACT_PROP_IDX_OF_PUSH_VLAN] =
		BNXT_ULP_ACT_PROP_SZ_OF_PUSH_VLAN,
	[BNXT_ULP_ACT_PROP_IDX_OF_SET_VLAN_PCP] =
		BNXT_ULP_ACT_PROP_SZ_OF_SET_VLAN_PCP,
	[BNXT_ULP_ACT_PROP_IDX_OF_SET_VLAN_VID] =
		BNXT_ULP_ACT_PROP_SZ_OF_SET_VLAN_VID,
	[BNXT_ULP_ACT_PROP_IDX_SET_IPV4_SRC] =
		BNXT_ULP_ACT_PROP_SZ_SET_IPV4_SRC,
	[BNXT_ULP_ACT_PROP_IDX_SET_IPV4_DST] =
		BNXT_ULP_ACT_PROP_SZ_SET_IPV4_DST,
	[BNXT_ULP_ACT_PROP_IDX_SET_IPV6_SRC] =
		BNXT_ULP_ACT_PROP_SZ_SET_IPV6_SRC,
	[BNXT_ULP_ACT_PROP_IDX_SET_IPV6_DST] =
		BNXT_ULP_ACT_PROP_SZ_SET_IPV6_DST,
	[BNXT_ULP_ACT_PROP_IDX_SET_TP_SRC] =
		BNXT_ULP_ACT_PROP_SZ_SET_TP_SRC,
	[BNXT_ULP_ACT_PROP_IDX_SET_TP_DST] =
		BNXT_ULP_ACT_PROP_SZ_SET_TP_DST,
	[BNXT_ULP_ACT_PROP_IDX_OF_PUSH_MPLS_0] =
		BNXT_ULP_ACT_PROP_SZ_OF_PUSH_MPLS_0,
	[BNXT_ULP_ACT_PROP_IDX_OF_PUSH_MPLS_1] =
		BNXT_ULP_ACT_PROP_SZ_OF_PUSH_MPLS_1,
	[BNXT_ULP_ACT_PROP_IDX_OF_PUSH_MPLS_2] =
		BNXT_ULP_ACT_PROP_SZ_OF_PUSH_MPLS_2,
	[BNXT_ULP_ACT_PROP_IDX_OF_PUSH_MPLS_3] =
		BNXT_ULP_ACT_PROP_SZ_OF_PUSH_MPLS_3,
	[BNXT_ULP_ACT_PROP_IDX_OF_PUSH_MPLS_4] =
		BNXT_ULP_ACT_PROP_SZ_OF_PUSH_MPLS_4,
	[BNXT_ULP_ACT_PROP_IDX_OF_PUSH_MPLS_5] =
		BNXT_ULP_ACT_PROP_SZ_OF_PUSH_MPLS_5,
	[BNXT_ULP_ACT_PROP_IDX_OF_PUSH_MPLS_6] =
		BNXT_ULP_ACT_PROP_SZ_OF_PUSH_MPLS_6,
	[BNXT_ULP_ACT_PROP_IDX_OF_PUSH_MPLS_7] =
		BNXT_ULP_ACT_PROP_SZ_OF_PUSH_MPLS_7,
	[BNXT_ULP_ACT_PROP_IDX_ENCAP_L2_DMAC] =
		BNXT_ULP_ACT_PROP_SZ_ENCAP_L2_DMAC,
	[BNXT_ULP_ACT_PROP_IDX_ENCAP_L2_SMAC] =
		BNXT_ULP_ACT_PROP_SZ_ENCAP_L2_SMAC,
	[BNXT_ULP_ACT_PROP_IDX_ENCAP_VTAG] =
		BNXT_ULP_ACT_PROP_SZ_ENCAP_VTAG,
	[BNXT_ULP_ACT_PROP_IDX_ENCAP_IP] =
		BNXT_ULP_ACT_PROP_SZ_ENCAP_IP,
	[BNXT_ULP_ACT_PROP_IDX_ENCAP_IP_SRC] =
		BNXT_ULP_ACT_PROP_SZ_ENCAP_IP_SRC,
	[BNXT_ULP_ACT_PROP_IDX_ENCAP_UDP] =
		BNXT_ULP_ACT_PROP_SZ_ENCAP_UDP,
	[BNXT_ULP_ACT_PROP_IDX_ENCAP_TUN] =
		BNXT_ULP_ACT_PROP_SZ_ENCAP_TUN,
	[BNXT_ULP_ACT_PROP_IDX_LAST] =
		BNXT_ULP_ACT_PROP_SZ_LAST
};

struct bnxt_ulp_rte_act_info ulp_act_info[] = {
	[RTE_FLOW_ACTION_TYPE_END] = {
		.act_type                = BNXT_ULP_ACT_TYPE_END,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_VOID] = {
		.act_type                = BNXT_ULP_ACT_TYPE_SUPPORTED,
		.proto_act_func          = ulp_rte_void_act_handler
	},
	[RTE_FLOW_ACTION_TYPE_PASSTHRU] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_JUMP] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_MARK] = {
		.act_type                = BNXT_ULP_ACT_TYPE_SUPPORTED,
		.proto_act_func          = ulp_rte_mark_act_handler
	},
	[RTE_FLOW_ACTION_TYPE_FLAG] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_QUEUE] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_DROP] = {
		.act_type                = BNXT_ULP_ACT_TYPE_SUPPORTED,
		.proto_act_func          = ulp_rte_drop_act_handler
	},
	[RTE_FLOW_ACTION_TYPE_COUNT] = {
		.act_type                = BNXT_ULP_ACT_TYPE_SUPPORTED,
		.proto_act_func          = ulp_rte_count_act_handler
	},
	[RTE_FLOW_ACTION_TYPE_RSS] = {
		.act_type                = BNXT_ULP_ACT_TYPE_SUPPORTED,
		.proto_act_func          = ulp_rte_rss_act_handler
	},
	[RTE_FLOW_ACTION_TYPE_PF] = {
		.act_type                = BNXT_ULP_ACT_TYPE_SUPPORTED,
		.proto_act_func          = ulp_rte_pf_act_handler
	},
	[RTE_FLOW_ACTION_TYPE_VF] = {
		.act_type                = BNXT_ULP_ACT_TYPE_SUPPORTED,
		.proto_act_func          = ulp_rte_vf_act_handler
	},
	[RTE_FLOW_ACTION_TYPE_PHY_PORT] = {
		.act_type                = BNXT_ULP_ACT_TYPE_SUPPORTED,
		.proto_act_func          = ulp_rte_phy_port_act_handler
	},
	[RTE_FLOW_ACTION_TYPE_PORT_ID] = {
		.act_type                = BNXT_ULP_ACT_TYPE_SUPPORTED,
		.proto_act_func          = ulp_rte_port_id_act_handler
	},
	[RTE_FLOW_ACTION_TYPE_METER] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_SECURITY] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_OF_SET_MPLS_TTL] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_OF_DEC_MPLS_TTL] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_OF_SET_NW_TTL] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_OF_DEC_NW_TTL] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_OF_COPY_TTL_OUT] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_OF_COPY_TTL_IN] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_OF_POP_VLAN] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_OF_PUSH_VLAN] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_OF_SET_VLAN_VID] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_OF_SET_VLAN_PCP] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_OF_POP_MPLS] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_OF_PUSH_MPLS] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_VXLAN_ENCAP] = {
		.act_type                = BNXT_ULP_ACT_TYPE_SUPPORTED,
		.proto_act_func          = ulp_rte_vxlan_encap_act_handler
	},
	[RTE_FLOW_ACTION_TYPE_VXLAN_DECAP] = {
		.act_type                = BNXT_ULP_ACT_TYPE_SUPPORTED,
		.proto_act_func          = ulp_rte_vxlan_decap_act_handler
	},
	[RTE_FLOW_ACTION_TYPE_NVGRE_ENCAP] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_NVGRE_DECAP] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_RAW_ENCAP] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_RAW_DECAP] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_SET_IPV4_SRC] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_SET_IPV4_DST] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_SET_IPV6_SRC] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_SET_IPV6_DST] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_SET_TP_SRC] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_SET_TP_DST] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_MAC_SWAP] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_DEC_TTL] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_SET_TTL] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_SET_MAC_SRC] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_SET_MAC_DST] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_INC_TCP_SEQ] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_DEC_TCP_SEQ] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_INC_TCP_ACK] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	},
	[RTE_FLOW_ACTION_TYPE_DEC_TCP_ACK] = {
		.act_type                = BNXT_ULP_ACT_TYPE_NOT_SUPPORTED,
		.proto_act_func          = NULL
	}
};

struct bnxt_ulp_cache_tbl_params ulp_cache_tbl_params[] = {
	[BNXT_ULP_CACHE_TBL_ID_L2_CNTXT_TCAM_INGRESS] = {
		.num_entries             = 16384
	},
	[BNXT_ULP_CACHE_TBL_ID_L2_CNTXT_TCAM_EGRESS] = {
		.num_entries             = 16384
	},
	[BNXT_ULP_CACHE_TBL_ID_PROFILE_TCAM_INGRESS] = {
		.num_entries             = 16384
	},
	[BNXT_ULP_CACHE_TBL_ID_PROFILE_TCAM_EGRESS] = {
		.num_entries             = 16384
	}
};

struct bnxt_ulp_device_params ulp_device_params[BNXT_ULP_DEVICE_ID_LAST] = {
	[BNXT_ULP_DEVICE_ID_WH_PLUS] = {
		.global_fid_enable       = BNXT_ULP_SYM_YES,
		.byte_order              = BNXT_ULP_BYTE_ORDER_LE,
		.encap_byte_swap         = 1,
		.lfid_entries            = 16384,
		.lfid_entry_size         = 4,
		.gfid_entries            = 65536,
		.gfid_entry_size         = 4,
		.num_flows               = 32768,
		.num_resources_per_flow  = 8
	}
};

struct bnxt_ulp_glb_resource_info ulp_glb_resource_tbl[] = {
	[0] = {
	.resource_func           = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.resource_type           = TF_IDENT_TYPE_PROF_FUNC,
	.glb_regfile_index       = BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID,
	.direction               = TF_DIR_RX
	},
	[1] = {
	.resource_func           = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.resource_type           = TF_IDENT_TYPE_PROF_FUNC,
	.glb_regfile_index       = BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID,
	.direction               = TF_DIR_TX
	}
};

struct bnxt_ulp_rte_hdr_info ulp_hdr_info[] = {
	[RTE_FLOW_ITEM_TYPE_END] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_END,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_VOID] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_SUPPORTED,
		.proto_hdr_func          = ulp_rte_void_hdr_handler
	},
	[RTE_FLOW_ITEM_TYPE_INVERT] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_ANY] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_PF] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_SUPPORTED,
		.proto_hdr_func          = ulp_rte_pf_hdr_handler
	},
	[RTE_FLOW_ITEM_TYPE_VF] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_SUPPORTED,
		.proto_hdr_func          = ulp_rte_vf_hdr_handler
	},
	[RTE_FLOW_ITEM_TYPE_PHY_PORT] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_SUPPORTED,
		.proto_hdr_func          = ulp_rte_phy_port_hdr_handler
	},
	[RTE_FLOW_ITEM_TYPE_PORT_ID] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_SUPPORTED,
		.proto_hdr_func          = ulp_rte_port_id_hdr_handler
	},
	[RTE_FLOW_ITEM_TYPE_RAW] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_ETH] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_SUPPORTED,
		.proto_hdr_func          = ulp_rte_eth_hdr_handler
	},
	[RTE_FLOW_ITEM_TYPE_VLAN] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_SUPPORTED,
		.proto_hdr_func          = ulp_rte_vlan_hdr_handler
	},
	[RTE_FLOW_ITEM_TYPE_IPV4] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_SUPPORTED,
		.proto_hdr_func          = ulp_rte_ipv4_hdr_handler
	},
	[RTE_FLOW_ITEM_TYPE_IPV6] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_SUPPORTED,
		.proto_hdr_func          = ulp_rte_ipv6_hdr_handler
	},
	[RTE_FLOW_ITEM_TYPE_ICMP] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_UDP] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_SUPPORTED,
		.proto_hdr_func          = ulp_rte_udp_hdr_handler
	},
	[RTE_FLOW_ITEM_TYPE_TCP] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_SUPPORTED,
		.proto_hdr_func          = ulp_rte_tcp_hdr_handler
	},
	[RTE_FLOW_ITEM_TYPE_SCTP] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_VXLAN] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_SUPPORTED,
		.proto_hdr_func          = ulp_rte_vxlan_hdr_handler
	},
	[RTE_FLOW_ITEM_TYPE_E_TAG] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_NVGRE] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_MPLS] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_GRE] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_FUZZY] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_GTP] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_GTPC] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_GTPU] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_ESP] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_GENEVE] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_VXLAN_GPE] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_ARP_ETH_IPV4] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_IPV6_EXT] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_ICMP6] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_ICMP6_ND_NS] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_ICMP6_ND_NA] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_ICMP6_ND_OPT] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_ICMP6_ND_OPT_SLA_ETH] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_ICMP6_ND_OPT_TLA_ETH] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_MARK] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_META] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_GRE_KEY] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_GTP_PSC] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_PPPOES] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_PPPOED] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_PPPOE_PROTO_ID] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_NSH] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_IGMP] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_AH] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	},
	[RTE_FLOW_ITEM_TYPE_HIGIG2] = {
		.hdr_type                = BNXT_ULP_HDR_TYPE_NOT_SUPPORTED,
		.proto_hdr_func          = NULL
	}
};

uint32_t bnxt_ulp_encap_vtag_map[] = {
	[0] = BNXT_ULP_ENCAP_VTAG_ENCODING_NOP,
	[1] = BNXT_ULP_ENCAP_VTAG_ENCODING_STAG_ECAP_PRI,
	[2] = BNXT_ULP_ENCAP_VTAG_ENCODING_DTAG_ECAP_PRI
};

uint16_t ulp_class_sig_tbl[BNXT_ULP_CLASS_SIG_TBL_MAX_SZ] = {
	[BNXT_ULP_CLASS_HID_0013] = 1
};

struct bnxt_ulp_class_match_info ulp_class_match_list[] = {
	[1] = {
	.class_hid = BNXT_ULP_CLASS_HID_0013,
	.hdr_sig = { .bits =
		BNXT_ULP_HDR_BIT_O_ETH |
		BNXT_ULP_HDR_BIT_O_IPV4 |
		BNXT_ULP_HDR_BIT_O_UDP |
		BNXT_ULP_FLOW_DIR_BITMASK_ING },
	.field_sig = { .bits =
		BNXT_ULP_HF0_BITMASK_O_IPV4_SRC_ADDR |
		BNXT_ULP_HF0_BITMASK_O_IPV4_DST_ADDR |
		BNXT_ULP_HF0_BITMASK_O_UDP_SRC_PORT |
		BNXT_ULP_HF0_BITMASK_O_UDP_DST_PORT |
		BNXT_ULP_MATCH_TYPE_BITMASK_EM },
	.class_tid = 0,
	.act_vnic = 0,
	.wc_pri = 0
	}
};

uint16_t ulp_act_sig_tbl[BNXT_ULP_ACT_SIG_TBL_MAX_SZ] = {
	[BNXT_ULP_ACT_HID_0029] = 1
};

struct bnxt_ulp_act_match_info ulp_act_match_list[] = {
	[1] = {
	.act_hid = BNXT_ULP_ACT_HID_0029,
	.act_sig = { .bits =
		BNXT_ULP_ACTION_BIT_MARK |
		BNXT_ULP_ACTION_BIT_RSS |
		BNXT_ULP_ACTION_BIT_VNIC |
		BNXT_ULP_FLOW_DIR_BITMASK_ING },
	.act_tid = 0
	}
};

struct bnxt_ulp_mapper_tbl_list_info ulp_class_tmpl_list[] = {
	[((0 << BNXT_ULP_LOG2_MAX_NUM_DEV) |
		BNXT_ULP_DEVICE_ID_WH_PLUS)] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 5,
	.start_tbl_idx = 0
	}
};

struct bnxt_ulp_mapper_class_tbl_info ulp_class_tbl_list[] = {
	{
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CACHE_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM,
	.resource_sub_type = BNXT_ULP_RESOURCE_SUB_TYPE_TT_L2_CNTXT_TCAM_CACHE,
	.direction = TF_DIR_RX,
	.priority = BNXT_ULP_PRIORITY_NOT_USED,
	.srch_b4_alloc = BNXT_ULP_SEARCH_BEFORE_ALLOC_NO,
	.key_start_idx = 0,
	.blob_key_bit_size = 12,
	.key_bit_size = 12,
	.key_num_fields = 2,
	.result_start_idx = 0,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.ident_start_idx = 0,
	.ident_nums = 1,
	.mark_enable = BNXT_ULP_MARK_ENABLE_NO,
	.critical_resource = 0,
	.cache_tbl_id = BNXT_ULP_CACHE_TBL_ID_L2_CNTXT_TCAM_INGRESS,
	.regfile_wr_idx = BNXT_ULP_REGFILE_INDEX_NOT_USED
	},
	{
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_L2_CTXT_TCAM,
	.resource_sub_type = BNXT_ULP_RESOURCE_SUB_TYPE_NOT_USED,
	.direction = TF_DIR_RX,
	.priority = BNXT_ULP_PRIORITY_LEVEL_0,
	.srch_b4_alloc = BNXT_ULP_SEARCH_BEFORE_ALLOC_NO,
	.key_start_idx = 2,
	.blob_key_bit_size = 167,
	.key_bit_size = 167,
	.key_num_fields = 13,
	.result_start_idx = 1,
	.result_bit_size = 64,
	.result_num_fields = 13,
	.ident_start_idx = 1,
	.ident_nums = 0,
	.mark_enable = BNXT_ULP_MARK_ENABLE_NO,
	.critical_resource = 0,
	.cache_tbl_id = 0,
	.regfile_wr_idx = BNXT_ULP_REGFILE_INDEX_NOT_USED
	},
	{
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CACHE_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type = BNXT_ULP_RESOURCE_SUB_TYPE_TT_PROFILE_TCAM_CACHE,
	.direction = TF_DIR_RX,
	.priority = BNXT_ULP_PRIORITY_NOT_USED,
	.srch_b4_alloc = BNXT_ULP_SEARCH_BEFORE_ALLOC_NO,
	.key_start_idx = 15,
	.blob_key_bit_size = 16,
	.key_bit_size = 16,
	.key_num_fields = 3,
	.result_start_idx = 14,
	.result_bit_size = 10,
	.result_num_fields = 1,
	.ident_start_idx = 1,
	.ident_nums = 1,
	.mark_enable = BNXT_ULP_MARK_ENABLE_NO,
	.critical_resource = 0,
	.cache_tbl_id = BNXT_ULP_CACHE_TBL_ID_PROFILE_TCAM_INGRESS,
	.regfile_wr_idx = BNXT_ULP_REGFILE_INDEX_NOT_USED
	},
	{
	.resource_func = BNXT_ULP_RESOURCE_FUNC_TCAM_TABLE,
	.resource_type = TF_TCAM_TBL_TYPE_PROF_TCAM,
	.resource_sub_type = BNXT_ULP_RESOURCE_SUB_TYPE_TT_PROFILE_TCAM_CACHE,
	.direction = TF_DIR_RX,
	.priority = BNXT_ULP_PRIORITY_LEVEL_0,
	.srch_b4_alloc = BNXT_ULP_SEARCH_BEFORE_ALLOC_NO,
	.key_start_idx = 18,
	.blob_key_bit_size = 81,
	.key_bit_size = 81,
	.key_num_fields = 42,
	.result_start_idx = 15,
	.result_bit_size = 38,
	.result_num_fields = 8,
	.ident_start_idx = 2,
	.ident_nums = 0,
	.mark_enable = BNXT_ULP_MARK_ENABLE_NO,
	.critical_resource = 0,
	.cache_tbl_id = 0,
	.regfile_wr_idx = BNXT_ULP_REGFILE_INDEX_NOT_USED
	},
	{
	.resource_func = BNXT_ULP_RESOURCE_FUNC_EM_TABLE,
	.resource_type = TF_MEM_EXTERNAL,
	.resource_sub_type = BNXT_ULP_RESOURCE_SUB_TYPE_NOT_USED,
	.direction = TF_DIR_RX,
	.priority = BNXT_ULP_PRIORITY_NOT_USED,
	.srch_b4_alloc = BNXT_ULP_SEARCH_BEFORE_ALLOC_NO,
	.key_start_idx = 60,
	.blob_key_bit_size = 448,
	.key_bit_size = 448,
	.key_num_fields = 11,
	.result_start_idx = 23,
	.result_bit_size = 64,
	.result_num_fields = 9,
	.ident_start_idx = 2,
	.ident_nums = 0,
	.mark_enable = BNXT_ULP_MARK_ENABLE_YES,
	.critical_resource = 1,
	.cache_tbl_id = 0,
	.regfile_wr_idx = BNXT_ULP_REGFILE_INDEX_NOT_USED
	}
};

struct bnxt_ulp_mapper_class_key_field_info ulp_class_key_field_list[] = {
	{
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {(BNXT_ULP_HF0_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF0_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {BNXT_ULP_SYM_TUN_HDR_TYPE_NONE,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_HDR_FIELD,
	.mask_operand = {(BNXT_ULP_HF0_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF0_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {(BNXT_ULP_HF0_IDX_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_HF0_IDX_SVIF_INDEX & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 12,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {BNXT_ULP_SYM_TUN_HDR_TYPE_NONE,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_COMP_FIELD,
	.spec_operand = {
		(BNXT_ULP_CF_IDX_O_VTAG_NUM >> 8) & 0xff,
		BNXT_ULP_CF_IDX_O_VTAG_NUM & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_REGFILE,
	.spec_operand = {(BNXT_ULP_REGFILE_INDEX_CLASS_TID >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_CLASS_TID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {BNXT_ULP_SYM_L3_HDR_TYPE_IPV4,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {BNXT_ULP_SYM_L2_HDR_TYPE_DIX,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {BNXT_ULP_SYM_TUN_HDR_TYPE_NONE,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {BNXT_ULP_SYM_TL4_HDR_TYPE_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {BNXT_ULP_SYM_TL3_HDR_TYPE_IPV4,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {BNXT_ULP_SYM_TL2_HDR_TYPE_DIX,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 9,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 7,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_GLB_REGFILE,
	.spec_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 2,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 4,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {BNXT_ULP_SYM_PKT_TYPE_L2,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
		0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 251,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_ADD_PAD,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 3,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {(BNXT_ULP_HF0_IDX_O_UDP_DST_PORT >> 8) & 0xff,
		BNXT_ULP_HF0_IDX_O_UDP_DST_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 16,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {(BNXT_ULP_HF0_IDX_O_UDP_SRC_PORT >> 8) & 0xff,
		BNXT_ULP_HF0_IDX_O_UDP_SRC_PORT & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {BNXT_ULP_SYM_IP_PROTO_UDP,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {(BNXT_ULP_HF0_IDX_O_IPV4_DST_ADDR >> 8) & 0xff,
		BNXT_ULP_HF0_IDX_O_IPV4_DST_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 32,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_HDR_FIELD,
	.spec_operand = {(BNXT_ULP_HF0_IDX_O_IPV4_SRC_ADDR >> 8) & 0xff,
		BNXT_ULP_HF0_IDX_O_IPV4_SRC_ADDR & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 48,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 24,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_CONSTANT,
	.spec_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 10,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_REGFILE,
	.spec_operand = {(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 8,
	.mask_opcode = BNXT_ULP_MASK_OPC_SET_TO_CONSTANT,
	.mask_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},
	.spec_opcode = BNXT_ULP_SPEC_OPC_SET_TO_REGFILE,
	.spec_operand = {(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	}
};

struct bnxt_ulp_mapper_result_field_info ulp_class_result_field_list[] = {
	{
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_REGFILE,
	.result_operand = {(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_REGFILE,
	.result_operand = {(BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 7,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_GLB_REGFILE,
	.result_operand = {
		(BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID >> 8) & 0xff,
		BNXT_ULP_GLB_REGFILE_INDEX_GLB_PROF_FUNC_ID & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 6,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 3,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},

	{
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_REGFILE,
	.result_operand = {(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {(0x00f9 >> 8) & 0xff,
		0x00f9 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x15, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_REGFILE,
	.result_operand = {(BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 33,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_REGFILE,
	.result_operand = {(BNXT_ULP_REGFILE_INDEX_ACTION_PTR_MAIN >> 8) & 0xff,
		BNXT_ULP_REGFILE_INDEX_ACTION_PTR_MAIN & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 5,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 9,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {(0x00c5 >> 8) & 0xff,
		0x00c5 & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	}
};

struct bnxt_ulp_mapper_ident_info ulp_ident_list[] = {
	{
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_L2_CTXT,
	.regfile_wr_idx = BNXT_ULP_REGFILE_INDEX_L2_CNTXT_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	},
	{
	.resource_func = BNXT_ULP_RESOURCE_FUNC_IDENTIFIER,
	.ident_type = TF_IDENT_TYPE_EM_PROF,
	.regfile_wr_idx = BNXT_ULP_REGFILE_INDEX_EM_PROFILE_ID_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 0
	}
};

struct bnxt_ulp_mapper_tbl_list_info ulp_act_tmpl_list[] = {
	[((0 << BNXT_ULP_LOG2_MAX_NUM_DEV) |
		BNXT_ULP_DEVICE_ID_WH_PLUS)] = {
	.device_name = BNXT_ULP_DEVICE_ID_WH_PLUS,
	.num_tbls = 1,
	.start_tbl_idx = 0
	}
};

struct bnxt_ulp_mapper_act_tbl_info ulp_act_tbl_list[] = {
	{
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = TF_TBL_TYPE_EXT,
	.resource_sub_type = BNXT_ULP_RESOURCE_SUB_TYPE_IT_NORMAL,
	.direction = TF_DIR_RX,
	.srch_b4_alloc = BNXT_ULP_SEARCH_BEFORE_ALLOC_NO,
	.result_start_idx = 0,
	.result_bit_size = 128,
	.result_num_fields = 26,
	.encap_num_fields = 0,
	.regfile_wr_idx = BNXT_ULP_REGFILE_INDEX_ACTION_PTR_MAIN
	}
};

struct bnxt_ulp_mapper_result_field_info ulp_act_result_field_list[] = {
	{
	.field_bit_size = 14,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 8,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 11,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 16,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 10,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 4,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {BNXT_ULP_SYM_DECAP_FUNC_NONE,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 12,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_ACT_PROP,
	.result_operand = {(BNXT_ULP_ACT_PROP_IDX_VNIC >> 8) & 0xff,
		BNXT_ULP_ACT_PROP_IDX_VNIC & 0xff,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 2,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	},
	{
	.field_bit_size = 1,
	.result_opcode = BNXT_ULP_RESULT_OPC_SET_TO_CONSTANT,
	.result_operand = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}
	}
};
