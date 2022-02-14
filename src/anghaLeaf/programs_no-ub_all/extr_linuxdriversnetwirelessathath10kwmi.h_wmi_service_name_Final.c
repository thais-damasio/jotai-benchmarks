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
  static counter = 0;
  return (-2 * (counter % 2) + 1) * rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  static counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    fprintf(stderr, "Usage:\n\
    prog [OPTIONS] [ARGS]\n\
\nARGS:\n\
       0            big-arr\n\
\n\
    OPTIONS:\n\
    -t              (NOT IMPLEMENTED YET) enable time measurement\n\n\
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

/* Variables and functions */
#define  WMI_SERVICE_11AC 233 
#define  WMI_SERVICE_4_WIRE_COEX_SUPPORT 232 
#define  WMI_SERVICE_ADAPTIVE_OCS 231 
#define  WMI_SERVICE_AP_DFS 230 
#define  WMI_SERVICE_AP_PS_DETECT_OUT_OF_SYNC 229 
#define  WMI_SERVICE_AP_UAPSD 228 
#define  WMI_SERVICE_ARPNS_OFFLOAD 227 
#define  WMI_SERVICE_ATF 226 
#define  WMI_SERVICE_AUX_CHAN_LOAD_INTF 225 
#define  WMI_SERVICE_AUX_SPECTRAL_INTF 224 
#define  WMI_SERVICE_BATCH_SCAN 223 
#define  WMI_SERVICE_BA_SSN_SUPPORT 222 
#define  WMI_SERVICE_BCN_FILTER 221 
#define  WMI_SERVICE_BCN_MISS_OFFLOAD 220 
#define  WMI_SERVICE_BCN_TXRATE_OVERRIDE 219 
#define  WMI_SERVICE_BEACON_OFFLOAD 218 
#define  WMI_SERVICE_BLOCKACK 217 
#define  WMI_SERVICE_BSS_CHANNEL_INFO_64 216 
#define  WMI_SERVICE_BTCOEX_DUTY_CYCLE 215 
#define  WMI_SERVICE_BURST 214 
#define  WMI_SERVICE_CHATTER 213 
#define  WMI_SERVICE_CHECK_CAL_VERSION 212 
#define  WMI_SERVICE_COEX_FREQAVOID 211 
#define  WMI_SERVICE_COEX_GPIO 210 
#define  WMI_SERVICE_COEX_SAR 209 
#define  WMI_SERVICE_CSA_OFFLOAD 208 
#define  WMI_SERVICE_D0WOW 207 
#define  WMI_SERVICE_DBGLOG_WARN2 206 
#define  WMI_SERVICE_DHCP_OFFLOAD 205 
#define  WMI_SERVICE_EARLY_RX 204 
#define  WMI_SERVICE_ENHANCED_PROXY_STA 203 
#define  WMI_SERVICE_ESTIMATE_LINKSPEED 202 
#define  WMI_SERVICE_EXTENDED_NSS_SUPPORT 201 
#define  WMI_SERVICE_EXTSCAN 200 
#define  WMI_SERVICE_EXT_RES_CFG_SUPPORT 199 
#define  WMI_SERVICE_FILTER_IPSEC_NATKEEPALIVE 198 
#define  WMI_SERVICE_FORCE_FW_HANG 197 
#define  WMI_SERVICE_FWTEST 196 
#define  WMI_SERVICE_GPIO 195 
#define  WMI_SERVICE_GTK_OFFLOAD 194 
#define  WMI_SERVICE_HOST_DFS_CHECK_SUPPORT 193 
#define  WMI_SERVICE_HSOFFLOAD 192 
#define  WMI_SERVICE_HTT_MGMT_TX_COMP_VALID_FLAGS 191 
#define  WMI_SERVICE_IBSS_PWRSAVE 190 
#define  WMI_SERVICE_IRAM_TIDS 189 
#define  WMI_SERVICE_L1SS_STAT 188 
#define  WMI_SERVICE_LPASS 187 
#define  WMI_SERVICE_LTE_ANT_SHARE_SUPPORT 186 
#define  WMI_SERVICE_MCC_BCN_INTERVAL_CHANGE 185 
#define  WMI_SERVICE_MDNS_OFFLOAD 184 
#define  WMI_SERVICE_MESH_11S 183 
#define  WMI_SERVICE_MESH_NON_11S 182 
#define  WMI_SERVICE_MHF_OFFLOAD 181 
#define  WMI_SERVICE_NAN 180 
#define  WMI_SERVICE_NLO 179 
#define  WMI_SERVICE_OBSS_SCAN 178 
#define  WMI_SERVICE_PACKET_POWER_SAVE 177 
#define  WMI_SERVICE_PEER_CACHING 176 
#define  WMI_SERVICE_PEER_STATS 175 
#define  WMI_SERVICE_PERIODIC_CHAN_STAT_SUPPORT 174 
#define  WMI_SERVICE_PHYERR 173 
#define  WMI_SERVICE_PLMREQ 172 
#define  WMI_SERVICE_PROG_GPIO_BAND_SELECT 171 
#define  WMI_SERVICE_QPOWER 170 
#define  WMI_SERVICE_RATECTRL 169 
#define  WMI_SERVICE_RATECTRL_CACHE 168 
#define  WMI_SERVICE_RESET_CHIP 167 
#define  WMI_SERVICE_RESTRT_CHNL_SUPPORT 166 
#define  WMI_SERVICE_RMC 165 
#define  WMI_SERVICE_ROAM_HO_OFFLOAD 164 
#define  WMI_SERVICE_ROAM_OFFLOAD 163 
#define  WMI_SERVICE_ROAM_SCAN_OFFLOAD 162 
#define  WMI_SERVICE_RTT 161 
#define  WMI_SERVICE_RX_FULL_REORDER 160 
#define  WMI_SERVICE_SAP_AUTH_OFFLOAD 159 
#define  WMI_SERVICE_SCAN_OFFLOAD 158 
#define  WMI_SERVICE_SCAN_SCH 157 
#define  WMI_SERVICE_SMART_ANTENNA_HW_SUPPORT 156 
#define  WMI_SERVICE_SMART_ANTENNA_SW_SUPPORT 155 
#define  WMI_SERVICE_SMART_LOGGING_SUPPORT 154 
#define  WMI_SERVICE_STA_ADVANCED_PWRSAVE 153 
#define  WMI_SERVICE_STA_DTIM_PS_MODULATED_DTIM 152 
#define  WMI_SERVICE_STA_KEEP_ALIVE 151 
#define  WMI_SERVICE_STA_PWRSAVE 150 
#define  WMI_SERVICE_STA_RX_IPA_OFFLOAD_SUPPORT 149 
#define  WMI_SERVICE_STA_SMPS 148 
#define  WMI_SERVICE_STA_UAPSD_BASIC_AUTO_TRIG 147 
#define  WMI_SERVICE_STA_UAPSD_VAR_AUTO_TRIG 146 
#define  WMI_SERVICE_STA_WMMAC 145 
#define  WMI_SERVICE_TDLS 144 
#define  WMI_SERVICE_TDLS_CONN_TRACKER_IN_HOST_MODE 143 
#define  WMI_SERVICE_TDLS_EXPLICIT_MODE_ONLY 142 
#define  WMI_SERVICE_TDLS_OFFCHAN 141 
#define  WMI_SERVICE_TDLS_UAPSD_BUFFER_STA 140 
#define  WMI_SERVICE_TDLS_UAPSD_SLEEP_STA 139 
#define  WMI_SERVICE_TDLS_WIDER_BANDWIDTH 138 
#define  WMI_SERVICE_THERMAL_MGMT 137 
#define  WMI_SERVICE_TPC_STATS_FINAL 136 
#define  WMI_SERVICE_TT 135 
#define  WMI_SERVICE_TX_ENCAP 134 
#define  WMI_SERVICE_TX_MODE_DYNAMIC 133 
#define  WMI_SERVICE_TX_MODE_PUSH_ONLY 132 
#define  WMI_SERVICE_TX_MODE_PUSH_PULL 131 
#define  WMI_SERVICE_VDEV_RX_FILTER 130 
#define  WMI_SERVICE_WLAN_HB 129 
#define  WMI_SERVICE_WOW 128 

__attribute__((used)) static inline char *wmi_service_name(int service_id)
{
#define SVCSTR(x) case x: return #x

	switch (service_id) {
	SVCSTR(WMI_SERVICE_BEACON_OFFLOAD);
	SVCSTR(WMI_SERVICE_SCAN_OFFLOAD);
	SVCSTR(WMI_SERVICE_ROAM_OFFLOAD);
	SVCSTR(WMI_SERVICE_BCN_MISS_OFFLOAD);
	SVCSTR(WMI_SERVICE_STA_PWRSAVE);
	SVCSTR(WMI_SERVICE_STA_ADVANCED_PWRSAVE);
	SVCSTR(WMI_SERVICE_AP_UAPSD);
	SVCSTR(WMI_SERVICE_AP_DFS);
	SVCSTR(WMI_SERVICE_11AC);
	SVCSTR(WMI_SERVICE_BLOCKACK);
	SVCSTR(WMI_SERVICE_PHYERR);
	SVCSTR(WMI_SERVICE_BCN_FILTER);
	SVCSTR(WMI_SERVICE_RTT);
	SVCSTR(WMI_SERVICE_RATECTRL);
	SVCSTR(WMI_SERVICE_WOW);
	SVCSTR(WMI_SERVICE_RATECTRL_CACHE);
	SVCSTR(WMI_SERVICE_IRAM_TIDS);
	SVCSTR(WMI_SERVICE_ARPNS_OFFLOAD);
	SVCSTR(WMI_SERVICE_NLO);
	SVCSTR(WMI_SERVICE_GTK_OFFLOAD);
	SVCSTR(WMI_SERVICE_SCAN_SCH);
	SVCSTR(WMI_SERVICE_CSA_OFFLOAD);
	SVCSTR(WMI_SERVICE_CHATTER);
	SVCSTR(WMI_SERVICE_COEX_FREQAVOID);
	SVCSTR(WMI_SERVICE_PACKET_POWER_SAVE);
	SVCSTR(WMI_SERVICE_FORCE_FW_HANG);
	SVCSTR(WMI_SERVICE_GPIO);
	SVCSTR(WMI_SERVICE_STA_DTIM_PS_MODULATED_DTIM);
	SVCSTR(WMI_SERVICE_STA_UAPSD_BASIC_AUTO_TRIG);
	SVCSTR(WMI_SERVICE_STA_UAPSD_VAR_AUTO_TRIG);
	SVCSTR(WMI_SERVICE_STA_KEEP_ALIVE);
	SVCSTR(WMI_SERVICE_TX_ENCAP);
	SVCSTR(WMI_SERVICE_BURST);
	SVCSTR(WMI_SERVICE_SMART_ANTENNA_SW_SUPPORT);
	SVCSTR(WMI_SERVICE_SMART_ANTENNA_HW_SUPPORT);
	SVCSTR(WMI_SERVICE_ROAM_SCAN_OFFLOAD);
	SVCSTR(WMI_SERVICE_AP_PS_DETECT_OUT_OF_SYNC);
	SVCSTR(WMI_SERVICE_EARLY_RX);
	SVCSTR(WMI_SERVICE_STA_SMPS);
	SVCSTR(WMI_SERVICE_FWTEST);
	SVCSTR(WMI_SERVICE_STA_WMMAC);
	SVCSTR(WMI_SERVICE_TDLS);
	SVCSTR(WMI_SERVICE_MCC_BCN_INTERVAL_CHANGE);
	SVCSTR(WMI_SERVICE_ADAPTIVE_OCS);
	SVCSTR(WMI_SERVICE_BA_SSN_SUPPORT);
	SVCSTR(WMI_SERVICE_FILTER_IPSEC_NATKEEPALIVE);
	SVCSTR(WMI_SERVICE_WLAN_HB);
	SVCSTR(WMI_SERVICE_LTE_ANT_SHARE_SUPPORT);
	SVCSTR(WMI_SERVICE_BATCH_SCAN);
	SVCSTR(WMI_SERVICE_QPOWER);
	SVCSTR(WMI_SERVICE_PLMREQ);
	SVCSTR(WMI_SERVICE_THERMAL_MGMT);
	SVCSTR(WMI_SERVICE_RMC);
	SVCSTR(WMI_SERVICE_MHF_OFFLOAD);
	SVCSTR(WMI_SERVICE_COEX_SAR);
	SVCSTR(WMI_SERVICE_BCN_TXRATE_OVERRIDE);
	SVCSTR(WMI_SERVICE_NAN);
	SVCSTR(WMI_SERVICE_L1SS_STAT);
	SVCSTR(WMI_SERVICE_ESTIMATE_LINKSPEED);
	SVCSTR(WMI_SERVICE_OBSS_SCAN);
	SVCSTR(WMI_SERVICE_TDLS_OFFCHAN);
	SVCSTR(WMI_SERVICE_TDLS_UAPSD_BUFFER_STA);
	SVCSTR(WMI_SERVICE_TDLS_UAPSD_SLEEP_STA);
	SVCSTR(WMI_SERVICE_IBSS_PWRSAVE);
	SVCSTR(WMI_SERVICE_LPASS);
	SVCSTR(WMI_SERVICE_EXTSCAN);
	SVCSTR(WMI_SERVICE_D0WOW);
	SVCSTR(WMI_SERVICE_HSOFFLOAD);
	SVCSTR(WMI_SERVICE_ROAM_HO_OFFLOAD);
	SVCSTR(WMI_SERVICE_RX_FULL_REORDER);
	SVCSTR(WMI_SERVICE_DHCP_OFFLOAD);
	SVCSTR(WMI_SERVICE_STA_RX_IPA_OFFLOAD_SUPPORT);
	SVCSTR(WMI_SERVICE_MDNS_OFFLOAD);
	SVCSTR(WMI_SERVICE_SAP_AUTH_OFFLOAD);
	SVCSTR(WMI_SERVICE_ATF);
	SVCSTR(WMI_SERVICE_COEX_GPIO);
	SVCSTR(WMI_SERVICE_ENHANCED_PROXY_STA);
	SVCSTR(WMI_SERVICE_TT);
	SVCSTR(WMI_SERVICE_PEER_CACHING);
	SVCSTR(WMI_SERVICE_AUX_SPECTRAL_INTF);
	SVCSTR(WMI_SERVICE_AUX_CHAN_LOAD_INTF);
	SVCSTR(WMI_SERVICE_BSS_CHANNEL_INFO_64);
	SVCSTR(WMI_SERVICE_EXT_RES_CFG_SUPPORT);
	SVCSTR(WMI_SERVICE_MESH_11S);
	SVCSTR(WMI_SERVICE_MESH_NON_11S);
	SVCSTR(WMI_SERVICE_PEER_STATS);
	SVCSTR(WMI_SERVICE_RESTRT_CHNL_SUPPORT);
	SVCSTR(WMI_SERVICE_PERIODIC_CHAN_STAT_SUPPORT);
	SVCSTR(WMI_SERVICE_TX_MODE_PUSH_ONLY);
	SVCSTR(WMI_SERVICE_TX_MODE_PUSH_PULL);
	SVCSTR(WMI_SERVICE_TX_MODE_DYNAMIC);
	SVCSTR(WMI_SERVICE_VDEV_RX_FILTER);
	SVCSTR(WMI_SERVICE_CHECK_CAL_VERSION);
	SVCSTR(WMI_SERVICE_DBGLOG_WARN2);
	SVCSTR(WMI_SERVICE_BTCOEX_DUTY_CYCLE);
	SVCSTR(WMI_SERVICE_4_WIRE_COEX_SUPPORT);
	SVCSTR(WMI_SERVICE_EXTENDED_NSS_SUPPORT);
	SVCSTR(WMI_SERVICE_PROG_GPIO_BAND_SELECT);
	SVCSTR(WMI_SERVICE_SMART_LOGGING_SUPPORT);
	SVCSTR(WMI_SERVICE_TDLS_CONN_TRACKER_IN_HOST_MODE);
	SVCSTR(WMI_SERVICE_TDLS_EXPLICIT_MODE_ONLY);
	SVCSTR(WMI_SERVICE_TDLS_WIDER_BANDWIDTH);
	SVCSTR(WMI_SERVICE_HTT_MGMT_TX_COMP_VALID_FLAGS);
	SVCSTR(WMI_SERVICE_HOST_DFS_CHECK_SUPPORT);
	SVCSTR(WMI_SERVICE_TPC_STATS_FINAL);
	SVCSTR(WMI_SERVICE_RESET_CHIP);
	default:
		return NULL;
	}

#undef SVCSTR
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

    // big-arr
    case 0:
    {
          int service_id = 255;
          char * benchRet = wmi_service_name(service_id);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}