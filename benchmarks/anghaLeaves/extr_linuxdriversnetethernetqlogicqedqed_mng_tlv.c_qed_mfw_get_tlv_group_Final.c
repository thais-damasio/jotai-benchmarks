// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr-10x\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
typedef  int u8 ;

/* Variables and functions */
#define  DRV_TLV_ABORT_TASK_SETS_ISSUED 323 
#define  DRV_TLV_ABTS_1_SENT_DESTINATION_FC_ID 322 
#define  DRV_TLV_ABTS_1_TIMESTAMP 321 
#define  DRV_TLV_ABTS_2_SENT_DESTINATION_FC_ID 320 
#define  DRV_TLV_ABTS_2_TIMESTAMP 319 
#define  DRV_TLV_ABTS_3_SENT_DESTINATION_FC_ID 318 
#define  DRV_TLV_ABTS_3_TIMESTAMP 317 
#define  DRV_TLV_ABTS_4_SENT_DESTINATION_FC_ID 316 
#define  DRV_TLV_ABTS_4_TIMESTAMP 315 
#define  DRV_TLV_ABTS_5_SENT_DESTINATION_FC_ID 314 
#define  DRV_TLV_ABTS_5_TIMESTAMP 313 
#define  DRV_TLV_ABTS_ACCS_RECEIVED 312 
#define  DRV_TLV_ABTS_RJTS_RECEIVED 311 
#define  DRV_TLV_ABTS_SENT_COUNT 310 
#define  DRV_TLV_ACCS_ISSUED 309 
#define  DRV_TLV_ACCS_RECEIVED 308 
#define  DRV_TLV_ADDITIONAL_MAC_ADDR_1 307 
#define  DRV_TLV_ADDITIONAL_MAC_ADDR_2 306 
#define  DRV_TLV_AUTHENTICATION_METHOD 305 
#define  DRV_TLV_BOOT_TYPE 304 
#define  DRV_TLV_CODE_VIOLATION_ERROR_COUNT 303 
#define  DRV_TLV_CRC_ERROR_1_RECEIVED_SOURCE_FC_ID 302 
#define  DRV_TLV_CRC_ERROR_1_TIMESTAMP 301 
#define  DRV_TLV_CRC_ERROR_2_RECEIVED_SOURCE_FC_ID 300 
#define  DRV_TLV_CRC_ERROR_2_TIMESTAMP 299 
#define  DRV_TLV_CRC_ERROR_3_RECEIVED_SOURCE_FC_ID 298 
#define  DRV_TLV_CRC_ERROR_3_TIMESTAMP 297 
#define  DRV_TLV_CRC_ERROR_4_RECEIVED_SOURCE_FC_ID 296 
#define  DRV_TLV_CRC_ERROR_4_TIMESTAMP 295 
#define  DRV_TLV_CRC_ERROR_5_RECEIVED_SOURCE_FC_ID 294 
#define  DRV_TLV_CRC_ERROR_5_TIMESTAMP 293 
#define  DRV_TLV_CRC_ERROR_COUNT 292 
#define  DRV_TLV_CR_TOV 291 
#define  DRV_TLV_DATA_DIGEST_FLAG_ENABLED 290 
#define  DRV_TLV_DEVICE_CPU_CORES_UTILIZATION 289 
#define  DRV_TLV_DISPARITY_ERROR_COUNT 288 
#define  DRV_TLV_EOFA_COUNT 287 
#define  DRV_TLV_EOFNI_COUNT 286 
#define  DRV_TLV_E_D_TOV 285 
#define  DRV_TLV_FCOE_BOOT_PROGRESS 284 
#define  DRV_TLV_FCOE_RX_BYTES_RECEIVED 283 
#define  DRV_TLV_FCOE_RX_DESCRIPTORS_QUEUE_AVG_DEPTH 282 
#define  DRV_TLV_FCOE_RX_DESCRIPTORS_QUEUE_SIZE 281 
#define  DRV_TLV_FCOE_RX_FRAMES_RECEIVED 280 
#define  DRV_TLV_FCOE_TX_BYTES_SENT 279 
#define  DRV_TLV_FCOE_TX_DESCRIPTOR_QUEUE_AVG_DEPTH 278 
#define  DRV_TLV_FCOE_TX_FRAMES_SENT 277 
#define  DRV_TLV_FDISCS_SENT_COUNT 276 
#define  DRV_TLV_FDISC_ACCS_RECEIVED 275 
#define  DRV_TLV_FDISC_RJTS_RECEIVED 274 
#define  DRV_TLV_FEATURE_FLAGS 273 
#define  DRV_TLV_FIP_TX_DESCRIPTORS_QUEUE_SIZE 272 
#define  DRV_TLV_HEADER_DIGEST_FLAG_ENABLED 271 
#define  DRV_TLV_IOV_OFFLOAD 270 
#define  DRV_TLV_ISCSI_BOOT_PROGRESS 269 
#define  DRV_TLV_ISCSI_BOOT_TARGET_PORTAL 268 
#define  DRV_TLV_ISCSI_PDU_RX_BYTES_RECEIVED 267 
#define  DRV_TLV_ISCSI_PDU_RX_FRAMES_RECEIVED 266 
#define  DRV_TLV_ISCSI_PDU_TX_BYTES_SENT 265 
#define  DRV_TLV_ISCSI_PDU_TX_FRAMES_SENT 264 
#define  DRV_TLV_LAST_FLOGI_ACC_COMMON_PARAMETERS_WORD_1 263 
#define  DRV_TLV_LAST_FLOGI_ACC_COMMON_PARAMETERS_WORD_2 262 
#define  DRV_TLV_LAST_FLOGI_ACC_COMMON_PARAMETERS_WORD_3 261 
#define  DRV_TLV_LAST_FLOGI_ACC_COMMON_PARAMETERS_WORD_4 260 
#define  DRV_TLV_LAST_FLOGI_ACC_TIMESTAMP 259 
#define  DRV_TLV_LAST_FLOGI_ISSUED_COMMON_PARAMETERS_WORD_1 258 
#define  DRV_TLV_LAST_FLOGI_ISSUED_COMMON_PARAMETERS_WORD_2 257 
#define  DRV_TLV_LAST_FLOGI_ISSUED_COMMON_PARAMETERS_WORD_3 256 
#define  DRV_TLV_LAST_FLOGI_ISSUED_COMMON_PARAMETERS_WORD_4 255 
#define  DRV_TLV_LAST_FLOGI_RJT 254 
#define  DRV_TLV_LAST_FLOGI_RJT_TIMESTAMP 253 
#define  DRV_TLV_LAST_FLOGI_TIMESTAMP 252 
#define  DRV_TLV_LAST_RSCN_RECEIVED_N_PORT_1 251 
#define  DRV_TLV_LAST_RSCN_RECEIVED_N_PORT_2 250 
#define  DRV_TLV_LAST_RSCN_RECEIVED_N_PORT_3 249 
#define  DRV_TLV_LAST_RSCN_RECEIVED_N_PORT_4 248 
#define  DRV_TLV_LAST_VALID_DCC_TLV_RECEIVED 247 
#define  DRV_TLV_LINK_FAILURE_COUNT 246 
#define  DRV_TLV_LIP_RECEIVED_COUNT 245 
#define  DRV_TLV_LIP_SENT_COUNT 244 
#define  DRV_TLV_LOCAL_ADMIN_ADDR 243 
#define  DRV_TLV_LOGOS_ISSUED 242 
#define  DRV_TLV_LOGOS_RECEIVED 241 
#define  DRV_TLV_LOGO_1_RECEIVED_SOURCE_FC_ID 240 
#define  DRV_TLV_LOGO_1_TIMESTAMP 239 
#define  DRV_TLV_LOGO_2_RECEIVED_SOURCE_FC_ID 238 
#define  DRV_TLV_LOGO_2_TIMESTAMP 237 
#define  DRV_TLV_LOGO_3_RECEIVED_SOURCE_FC_ID 236 
#define  DRV_TLV_LOGO_3_TIMESTAMP 235 
#define  DRV_TLV_LOGO_4_RECEIVED_SOURCE_FC_ID 234 
#define  DRV_TLV_LOGO_4_TIMESTAMP 233 
#define  DRV_TLV_LOGO_5_RECEIVED_SOURCE_FC_ID 232 
#define  DRV_TLV_LOGO_5_TIMESTAMP 231 
#define  DRV_TLV_LOGO_ACCS_RECEIVED 230 
#define  DRV_TLV_LOGO_RJTS_RECEIVED 229 
#define  DRV_TLV_LOSS_OF_SIGNAL_ERRORS 228 
#define  DRV_TLV_LOSS_OF_SYNC_ERROR_COUNT 227 
#define  DRV_TLV_LRR_COUNT 226 
#define  DRV_TLV_LR_COUNT 225 
#define  DRV_TLV_LSO_MAX_OFFLOAD_SIZE 224 
#define  DRV_TLV_LSO_MIN_SEGMENT_COUNT 223 
#define  DRV_TLV_LUN_RESETS_ISSUED 222 
#define  DRV_TLV_MAX_FRAME_SIZE 221 
#define  DRV_TLV_NCSI_RX_BYTES_RECEIVED 220 
#define  DRV_TLV_NCSI_TX_BYTES_SENT 219 
#define  DRV_TLV_NOS_RECEIVED_COUNT 218 
#define  DRV_TLV_NOS_SENT_COUNT 217 
#define  DRV_TLV_NPIV_ENABLED 216 
#define  DRV_TLV_NPIV_STATE 215 
#define  DRV_TLV_NUM_OFFLOADED_CONNECTIONS_TCP_IPV4 214 
#define  DRV_TLV_NUM_OFFLOADED_CONNECTIONS_TCP_IPV6 213 
#define  DRV_TLV_NUM_OF_NET_QUEUE_VMQ_CFG 212 
#define  DRV_TLV_NUM_OF_NPIV_IDS 211 
#define  DRV_TLV_OLS_COUNT 210 
#define  DRV_TLV_OS_DRIVER_STATES 209 
#define  DRV_TLV_PCIE_BUS_RX_UTILIZATION 208 
#define  DRV_TLV_PCIE_BUS_TX_UTILIZATION 207 
#define  DRV_TLV_PDU_RX_DESCRIPTORS_QUEUE_AVG_DEPTH 206 
#define  DRV_TLV_PDU_RX_DESCRIPTORS_QUEUE_SIZE 205 
#define  DRV_TLV_PDU_TX_DESCRIPTORS_QUEUE_SIZE 204 
#define  DRV_TLV_PDU_TX_DESCRIPTOR_QUEUE_AVG_DEPTH 203 
#define  DRV_TLV_PLOGI_1_ACC_RECEIVED_SOURCE_FC_ID 202 
#define  DRV_TLV_PLOGI_1_ACC_TIMESTAMP 201 
#define  DRV_TLV_PLOGI_1_SENT_DESTINATION_FC_ID 200 
#define  DRV_TLV_PLOGI_1_TIMESTAMP 199 
#define  DRV_TLV_PLOGI_2_ACC_RECEIVED_SOURCE_FC_ID 198 
#define  DRV_TLV_PLOGI_2_ACC_TIMESTAMP 197 
#define  DRV_TLV_PLOGI_2_SENT_DESTINATION_FC_ID 196 
#define  DRV_TLV_PLOGI_2_TIMESTAMP 195 
#define  DRV_TLV_PLOGI_3_ACC_RECEIVED_SOURCE_FC_ID 194 
#define  DRV_TLV_PLOGI_3_ACC_TIMESTAMP 193 
#define  DRV_TLV_PLOGI_3_SENT_DESTINATION_FC_ID 192 
#define  DRV_TLV_PLOGI_3_TIMESTAMP 191 
#define  DRV_TLV_PLOGI_4_ACC_RECEIVED_SOURCE_FC_ID 190 
#define  DRV_TLV_PLOGI_4_ACC_TIMESTAMP 189 
#define  DRV_TLV_PLOGI_4_SENT_DESTINATION_FC_ID 188 
#define  DRV_TLV_PLOGI_4_TIMESTAMP 187 
#define  DRV_TLV_PLOGI_5_ACC_RECEIVED_SOURCE_FC_ID 186 
#define  DRV_TLV_PLOGI_5_ACC_TIMESTAMP 185 
#define  DRV_TLV_PLOGI_5_SENT_DESTINATION_FC_ID 184 
#define  DRV_TLV_PLOGI_5_TIMESTAMP 183 
#define  DRV_TLV_PLOGI_ACCS_RECEIVED 182 
#define  DRV_TLV_PLOGI_RJTS_RECEIVED 181 
#define  DRV_TLV_PLOGI_SENT_COUNT 180 
#define  DRV_TLV_PORT_ALIAS 179 
#define  DRV_TLV_PORT_STATE 178 
#define  DRV_TLV_PRIMITIVE_SEQUENCE_PROTOCOL_ERROR_COUNT 177 
#define  DRV_TLV_PRLIS_ISSUED 176 
#define  DRV_TLV_PROMISCUOUS_MODE 175 
#define  DRV_TLV_PXE_BOOT_PROGRESS 174 
#define  DRV_TLV_QOS_PRIORITY_PER_802_1P 173 
#define  DRV_TLV_RSCNS_RECEIVED 172 
#define  DRV_TLV_RX_BROADCAST_PACKETS 171 
#define  DRV_TLV_RX_BYTES_RECEIVED 170 
#define  DRV_TLV_RX_DESCRIPTORS_QUEUE_AVG_DEPTH 169 
#define  DRV_TLV_RX_DESCRIPTORS_QUEUE_SIZE 168 
#define  DRV_TLV_RX_FRAMES_RECEIVED 167 
#define  DRV_TLV_RX_QUEUES_EMPTY 166 
#define  DRV_TLV_RX_QUEUES_FULL 165 
#define  DRV_TLV_R_A_TOV 164 
#define  DRV_TLV_R_T_TOV 163 
#define  DRV_TLV_SCSI_CHECK_1_TIMESTAMP 162 
#define  DRV_TLV_SCSI_CHECK_2_TIMESTAMP 161 
#define  DRV_TLV_SCSI_CHECK_3_TIMESTAMP 160 
#define  DRV_TLV_SCSI_CHECK_4_TIMESTAMP 159 
#define  DRV_TLV_SCSI_CHECK_5_TIMESTAMP 158 
#define  DRV_TLV_SCSI_CHECK_CONDITION_1_RECEIVED_SK_ASC_ASCQ 157 
#define  DRV_TLV_SCSI_CHECK_CONDITION_2_RECEIVED_SK_ASC_ASCQ 156 
#define  DRV_TLV_SCSI_CHECK_CONDITION_3_RECEIVED_SK_ASC_ASCQ 155 
#define  DRV_TLV_SCSI_CHECK_CONDITION_4_RECEIVED_SK_ASC_ASCQ 154 
#define  DRV_TLV_SCSI_CHECK_CONDITION_5_RECEIVED_SK_ASC_ASCQ 153 
#define  DRV_TLV_SCSI_STATUS_ACA_ACTIVE_COUNT 152 
#define  DRV_TLV_SCSI_STATUS_BUSY_COUNT 151 
#define  DRV_TLV_SCSI_STATUS_CHECK_CONDITION_COUNT 150 
#define  DRV_TLV_SCSI_STATUS_CONDITION_MET_COUNT 149 
#define  DRV_TLV_SCSI_STATUS_INTERMEDIATE_CONDITION_MET_COUNT 148 
#define  DRV_TLV_SCSI_STATUS_INTERMEDIATE_COUNT 147 
#define  DRV_TLV_SCSI_STATUS_RESERVATION_CONFLICT_COUNT 146 
#define  DRV_TLV_SCSI_STATUS_TASK_ABORTED_COUNT 145 
#define  DRV_TLV_SCSI_STATUS_TASK_SET_FULL_COUNT 144 
#define  DRV_TLV_SCSI_TO 143 
#define  DRV_TLV_SWITCH_FW_VER 142 
#define  DRV_TLV_SWITCH_MODEL 141 
#define  DRV_TLV_SWITCH_NAME 140 
#define  DRV_TLV_SWITCH_PORT_ID 139 
#define  DRV_TLV_SWITCH_PORT_NUM 138 
#define  DRV_TLV_TARGET_LLMNR_ENABLED 137 
#define  DRV_TLV_TPRLOS_SENT 136 
#define  DRV_TLV_TX_BROADCAST_PACKETS 135 
#define  DRV_TLV_TX_BYTES_SENT 134 
#define  DRV_TLV_TX_DESCRIPTORS_QUEUE_SIZE 133 
#define  DRV_TLV_TX_DESCRIPTOR_QUEUE_AVG_DEPTH 132 
#define  DRV_TLV_TX_FRAMES_SENT 131 
#define  DRV_TLV_TX_QUEUES_EMPTY 130 
#define  DRV_TLV_TX_QUEUES_FULL 129 
#define  DRV_TLV_VENDOR_NAME 128 
 int EINVAL ; 
 int QED_MFW_TLV_ETH ; 
 int QED_MFW_TLV_FCOE ; 
 int QED_MFW_TLV_GENERIC ; 
 int QED_MFW_TLV_ISCSI ; 

__attribute__((used)) static int qed_mfw_get_tlv_group(u8 tlv_type, u8 *tlv_group)
{
	switch (tlv_type) {
	case DRV_TLV_FEATURE_FLAGS:
	case DRV_TLV_LOCAL_ADMIN_ADDR:
	case DRV_TLV_ADDITIONAL_MAC_ADDR_1:
	case DRV_TLV_ADDITIONAL_MAC_ADDR_2:
	case DRV_TLV_OS_DRIVER_STATES:
	case DRV_TLV_PXE_BOOT_PROGRESS:
	case DRV_TLV_RX_FRAMES_RECEIVED:
	case DRV_TLV_RX_BYTES_RECEIVED:
	case DRV_TLV_TX_FRAMES_SENT:
	case DRV_TLV_TX_BYTES_SENT:
	case DRV_TLV_NPIV_ENABLED:
	case DRV_TLV_PCIE_BUS_RX_UTILIZATION:
	case DRV_TLV_PCIE_BUS_TX_UTILIZATION:
	case DRV_TLV_DEVICE_CPU_CORES_UTILIZATION:
	case DRV_TLV_LAST_VALID_DCC_TLV_RECEIVED:
	case DRV_TLV_NCSI_RX_BYTES_RECEIVED:
	case DRV_TLV_NCSI_TX_BYTES_SENT:
		*tlv_group |= QED_MFW_TLV_GENERIC;
		break;
	case DRV_TLV_LSO_MAX_OFFLOAD_SIZE:
	case DRV_TLV_LSO_MIN_SEGMENT_COUNT:
	case DRV_TLV_PROMISCUOUS_MODE:
	case DRV_TLV_TX_DESCRIPTORS_QUEUE_SIZE:
	case DRV_TLV_RX_DESCRIPTORS_QUEUE_SIZE:
	case DRV_TLV_NUM_OF_NET_QUEUE_VMQ_CFG:
	case DRV_TLV_NUM_OFFLOADED_CONNECTIONS_TCP_IPV4:
	case DRV_TLV_NUM_OFFLOADED_CONNECTIONS_TCP_IPV6:
	case DRV_TLV_TX_DESCRIPTOR_QUEUE_AVG_DEPTH:
	case DRV_TLV_RX_DESCRIPTORS_QUEUE_AVG_DEPTH:
	case DRV_TLV_IOV_OFFLOAD:
	case DRV_TLV_TX_QUEUES_EMPTY:
	case DRV_TLV_RX_QUEUES_EMPTY:
	case DRV_TLV_TX_QUEUES_FULL:
	case DRV_TLV_RX_QUEUES_FULL:
		*tlv_group |= QED_MFW_TLV_ETH;
		break;
	case DRV_TLV_SCSI_TO:
	case DRV_TLV_R_T_TOV:
	case DRV_TLV_R_A_TOV:
	case DRV_TLV_E_D_TOV:
	case DRV_TLV_CR_TOV:
	case DRV_TLV_BOOT_TYPE:
	case DRV_TLV_NPIV_STATE:
	case DRV_TLV_NUM_OF_NPIV_IDS:
	case DRV_TLV_SWITCH_NAME:
	case DRV_TLV_SWITCH_PORT_NUM:
	case DRV_TLV_SWITCH_PORT_ID:
	case DRV_TLV_VENDOR_NAME:
	case DRV_TLV_SWITCH_MODEL:
	case DRV_TLV_SWITCH_FW_VER:
	case DRV_TLV_QOS_PRIORITY_PER_802_1P:
	case DRV_TLV_PORT_ALIAS:
	case DRV_TLV_PORT_STATE:
	case DRV_TLV_FIP_TX_DESCRIPTORS_QUEUE_SIZE:
	case DRV_TLV_FCOE_RX_DESCRIPTORS_QUEUE_SIZE:
	case DRV_TLV_LINK_FAILURE_COUNT:
	case DRV_TLV_FCOE_BOOT_PROGRESS:
	case DRV_TLV_RX_BROADCAST_PACKETS:
	case DRV_TLV_TX_BROADCAST_PACKETS:
	case DRV_TLV_FCOE_TX_DESCRIPTOR_QUEUE_AVG_DEPTH:
	case DRV_TLV_FCOE_RX_DESCRIPTORS_QUEUE_AVG_DEPTH:
	case DRV_TLV_FCOE_RX_FRAMES_RECEIVED:
	case DRV_TLV_FCOE_RX_BYTES_RECEIVED:
	case DRV_TLV_FCOE_TX_FRAMES_SENT:
	case DRV_TLV_FCOE_TX_BYTES_SENT:
	case DRV_TLV_CRC_ERROR_COUNT:
	case DRV_TLV_CRC_ERROR_1_RECEIVED_SOURCE_FC_ID:
	case DRV_TLV_CRC_ERROR_1_TIMESTAMP:
	case DRV_TLV_CRC_ERROR_2_RECEIVED_SOURCE_FC_ID:
	case DRV_TLV_CRC_ERROR_2_TIMESTAMP:
	case DRV_TLV_CRC_ERROR_3_RECEIVED_SOURCE_FC_ID:
	case DRV_TLV_CRC_ERROR_3_TIMESTAMP:
	case DRV_TLV_CRC_ERROR_4_RECEIVED_SOURCE_FC_ID:
	case DRV_TLV_CRC_ERROR_4_TIMESTAMP:
	case DRV_TLV_CRC_ERROR_5_RECEIVED_SOURCE_FC_ID:
	case DRV_TLV_CRC_ERROR_5_TIMESTAMP:
	case DRV_TLV_LOSS_OF_SYNC_ERROR_COUNT:
	case DRV_TLV_LOSS_OF_SIGNAL_ERRORS:
	case DRV_TLV_PRIMITIVE_SEQUENCE_PROTOCOL_ERROR_COUNT:
	case DRV_TLV_DISPARITY_ERROR_COUNT:
	case DRV_TLV_CODE_VIOLATION_ERROR_COUNT:
	case DRV_TLV_LAST_FLOGI_ISSUED_COMMON_PARAMETERS_WORD_1:
	case DRV_TLV_LAST_FLOGI_ISSUED_COMMON_PARAMETERS_WORD_2:
	case DRV_TLV_LAST_FLOGI_ISSUED_COMMON_PARAMETERS_WORD_3:
	case DRV_TLV_LAST_FLOGI_ISSUED_COMMON_PARAMETERS_WORD_4:
	case DRV_TLV_LAST_FLOGI_TIMESTAMP:
	case DRV_TLV_LAST_FLOGI_ACC_COMMON_PARAMETERS_WORD_1:
	case DRV_TLV_LAST_FLOGI_ACC_COMMON_PARAMETERS_WORD_2:
	case DRV_TLV_LAST_FLOGI_ACC_COMMON_PARAMETERS_WORD_3:
	case DRV_TLV_LAST_FLOGI_ACC_COMMON_PARAMETERS_WORD_4:
	case DRV_TLV_LAST_FLOGI_ACC_TIMESTAMP:
	case DRV_TLV_LAST_FLOGI_RJT:
	case DRV_TLV_LAST_FLOGI_RJT_TIMESTAMP:
	case DRV_TLV_FDISCS_SENT_COUNT:
	case DRV_TLV_FDISC_ACCS_RECEIVED:
	case DRV_TLV_FDISC_RJTS_RECEIVED:
	case DRV_TLV_PLOGI_SENT_COUNT:
	case DRV_TLV_PLOGI_ACCS_RECEIVED:
	case DRV_TLV_PLOGI_RJTS_RECEIVED:
	case DRV_TLV_PLOGI_1_SENT_DESTINATION_FC_ID:
	case DRV_TLV_PLOGI_1_TIMESTAMP:
	case DRV_TLV_PLOGI_2_SENT_DESTINATION_FC_ID:
	case DRV_TLV_PLOGI_2_TIMESTAMP:
	case DRV_TLV_PLOGI_3_SENT_DESTINATION_FC_ID:
	case DRV_TLV_PLOGI_3_TIMESTAMP:
	case DRV_TLV_PLOGI_4_SENT_DESTINATION_FC_ID:
	case DRV_TLV_PLOGI_4_TIMESTAMP:
	case DRV_TLV_PLOGI_5_SENT_DESTINATION_FC_ID:
	case DRV_TLV_PLOGI_5_TIMESTAMP:
	case DRV_TLV_PLOGI_1_ACC_RECEIVED_SOURCE_FC_ID:
	case DRV_TLV_PLOGI_1_ACC_TIMESTAMP:
	case DRV_TLV_PLOGI_2_ACC_RECEIVED_SOURCE_FC_ID:
	case DRV_TLV_PLOGI_2_ACC_TIMESTAMP:
	case DRV_TLV_PLOGI_3_ACC_RECEIVED_SOURCE_FC_ID:
	case DRV_TLV_PLOGI_3_ACC_TIMESTAMP:
	case DRV_TLV_PLOGI_4_ACC_RECEIVED_SOURCE_FC_ID:
	case DRV_TLV_PLOGI_4_ACC_TIMESTAMP:
	case DRV_TLV_PLOGI_5_ACC_RECEIVED_SOURCE_FC_ID:
	case DRV_TLV_PLOGI_5_ACC_TIMESTAMP:
	case DRV_TLV_LOGOS_ISSUED:
	case DRV_TLV_LOGO_ACCS_RECEIVED:
	case DRV_TLV_LOGO_RJTS_RECEIVED:
	case DRV_TLV_LOGO_1_RECEIVED_SOURCE_FC_ID:
	case DRV_TLV_LOGO_1_TIMESTAMP:
	case DRV_TLV_LOGO_2_RECEIVED_SOURCE_FC_ID:
	case DRV_TLV_LOGO_2_TIMESTAMP:
	case DRV_TLV_LOGO_3_RECEIVED_SOURCE_FC_ID:
	case DRV_TLV_LOGO_3_TIMESTAMP:
	case DRV_TLV_LOGO_4_RECEIVED_SOURCE_FC_ID:
	case DRV_TLV_LOGO_4_TIMESTAMP:
	case DRV_TLV_LOGO_5_RECEIVED_SOURCE_FC_ID:
	case DRV_TLV_LOGO_5_TIMESTAMP:
	case DRV_TLV_LOGOS_RECEIVED:
	case DRV_TLV_ACCS_ISSUED:
	case DRV_TLV_PRLIS_ISSUED:
	case DRV_TLV_ACCS_RECEIVED:
	case DRV_TLV_ABTS_SENT_COUNT:
	case DRV_TLV_ABTS_ACCS_RECEIVED:
	case DRV_TLV_ABTS_RJTS_RECEIVED:
	case DRV_TLV_ABTS_1_SENT_DESTINATION_FC_ID:
	case DRV_TLV_ABTS_1_TIMESTAMP:
	case DRV_TLV_ABTS_2_SENT_DESTINATION_FC_ID:
	case DRV_TLV_ABTS_2_TIMESTAMP:
	case DRV_TLV_ABTS_3_SENT_DESTINATION_FC_ID:
	case DRV_TLV_ABTS_3_TIMESTAMP:
	case DRV_TLV_ABTS_4_SENT_DESTINATION_FC_ID:
	case DRV_TLV_ABTS_4_TIMESTAMP:
	case DRV_TLV_ABTS_5_SENT_DESTINATION_FC_ID:
	case DRV_TLV_ABTS_5_TIMESTAMP:
	case DRV_TLV_RSCNS_RECEIVED:
	case DRV_TLV_LAST_RSCN_RECEIVED_N_PORT_1:
	case DRV_TLV_LAST_RSCN_RECEIVED_N_PORT_2:
	case DRV_TLV_LAST_RSCN_RECEIVED_N_PORT_3:
	case DRV_TLV_LAST_RSCN_RECEIVED_N_PORT_4:
	case DRV_TLV_LUN_RESETS_ISSUED:
	case DRV_TLV_ABORT_TASK_SETS_ISSUED:
	case DRV_TLV_TPRLOS_SENT:
	case DRV_TLV_NOS_SENT_COUNT:
	case DRV_TLV_NOS_RECEIVED_COUNT:
	case DRV_TLV_OLS_COUNT:
	case DRV_TLV_LR_COUNT:
	case DRV_TLV_LRR_COUNT:
	case DRV_TLV_LIP_SENT_COUNT:
	case DRV_TLV_LIP_RECEIVED_COUNT:
	case DRV_TLV_EOFA_COUNT:
	case DRV_TLV_EOFNI_COUNT:
	case DRV_TLV_SCSI_STATUS_CHECK_CONDITION_COUNT:
	case DRV_TLV_SCSI_STATUS_CONDITION_MET_COUNT:
	case DRV_TLV_SCSI_STATUS_BUSY_COUNT:
	case DRV_TLV_SCSI_STATUS_INTERMEDIATE_COUNT:
	case DRV_TLV_SCSI_STATUS_INTERMEDIATE_CONDITION_MET_COUNT:
	case DRV_TLV_SCSI_STATUS_RESERVATION_CONFLICT_COUNT:
	case DRV_TLV_SCSI_STATUS_TASK_SET_FULL_COUNT:
	case DRV_TLV_SCSI_STATUS_ACA_ACTIVE_COUNT:
	case DRV_TLV_SCSI_STATUS_TASK_ABORTED_COUNT:
	case DRV_TLV_SCSI_CHECK_CONDITION_1_RECEIVED_SK_ASC_ASCQ:
	case DRV_TLV_SCSI_CHECK_1_TIMESTAMP:
	case DRV_TLV_SCSI_CHECK_CONDITION_2_RECEIVED_SK_ASC_ASCQ:
	case DRV_TLV_SCSI_CHECK_2_TIMESTAMP:
	case DRV_TLV_SCSI_CHECK_CONDITION_3_RECEIVED_SK_ASC_ASCQ:
	case DRV_TLV_SCSI_CHECK_3_TIMESTAMP:
	case DRV_TLV_SCSI_CHECK_CONDITION_4_RECEIVED_SK_ASC_ASCQ:
	case DRV_TLV_SCSI_CHECK_4_TIMESTAMP:
	case DRV_TLV_SCSI_CHECK_CONDITION_5_RECEIVED_SK_ASC_ASCQ:
	case DRV_TLV_SCSI_CHECK_5_TIMESTAMP:
		*tlv_group = QED_MFW_TLV_FCOE;
		break;
	case DRV_TLV_TARGET_LLMNR_ENABLED:
	case DRV_TLV_HEADER_DIGEST_FLAG_ENABLED:
	case DRV_TLV_DATA_DIGEST_FLAG_ENABLED:
	case DRV_TLV_AUTHENTICATION_METHOD:
	case DRV_TLV_ISCSI_BOOT_TARGET_PORTAL:
	case DRV_TLV_MAX_FRAME_SIZE:
	case DRV_TLV_PDU_TX_DESCRIPTORS_QUEUE_SIZE:
	case DRV_TLV_PDU_RX_DESCRIPTORS_QUEUE_SIZE:
	case DRV_TLV_ISCSI_BOOT_PROGRESS:
	case DRV_TLV_PDU_TX_DESCRIPTOR_QUEUE_AVG_DEPTH:
	case DRV_TLV_PDU_RX_DESCRIPTORS_QUEUE_AVG_DEPTH:
	case DRV_TLV_ISCSI_PDU_RX_FRAMES_RECEIVED:
	case DRV_TLV_ISCSI_PDU_RX_BYTES_RECEIVED:
	case DRV_TLV_ISCSI_PDU_TX_FRAMES_SENT:
	case DRV_TLV_ISCSI_PDU_TX_BYTES_SENT:
		*tlv_group |= QED_MFW_TLV_ISCSI;
		break;
	default:
		return -EINVAL;
	}

	return 0;
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int tlv_type = 100;
          int _len_tlv_group0 = 1;
          int * tlv_group = (int *) malloc(_len_tlv_group0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tlv_group0; _i0++) {
            tlv_group[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qed_mfw_get_tlv_group(tlv_type,tlv_group);
          printf("%d\n", benchRet); 
          free(tlv_group);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int tlv_type = 10;
          int _len_tlv_group0 = 100;
          int * tlv_group = (int *) malloc(_len_tlv_group0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tlv_group0; _i0++) {
            tlv_group[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = qed_mfw_get_tlv_group(tlv_type,tlv_group);
          printf("%d\n", benchRet); 
          free(tlv_group);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
