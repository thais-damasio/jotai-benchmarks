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
typedef  int u32 ;
struct ath10k_sta_tid_stats {int /*<<< orphan*/ * rx_pkt_amsdu; } ;
struct ath10k {int dummy; } ;

/* Variables and functions */
 size_t ATH10K_AMSDU_SUBFRM_NUM_1 ; 
 size_t ATH10K_AMSDU_SUBFRM_NUM_2 ; 
 size_t ATH10K_AMSDU_SUBFRM_NUM_3 ; 
 size_t ATH10K_AMSDU_SUBFRM_NUM_4 ; 
 size_t ATH10K_AMSDU_SUBFRM_NUM_MORE ; 

__attribute__((used)) static void ath10k_rx_stats_update_amsdu_subfrm(struct ath10k *ar,
						struct ath10k_sta_tid_stats *stats,
						u32 msdu_count)
{
	if (msdu_count == 1)
		stats->rx_pkt_amsdu[ATH10K_AMSDU_SUBFRM_NUM_1]++;
	else if (msdu_count == 2)
		stats->rx_pkt_amsdu[ATH10K_AMSDU_SUBFRM_NUM_2]++;
	else if (msdu_count == 3)
		stats->rx_pkt_amsdu[ATH10K_AMSDU_SUBFRM_NUM_3]++;
	else if (msdu_count == 4)
		stats->rx_pkt_amsdu[ATH10K_AMSDU_SUBFRM_NUM_4]++;
	else if (msdu_count > 4)
		stats->rx_pkt_amsdu[ATH10K_AMSDU_SUBFRM_NUM_MORE]++;
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
          int msdu_count = 100;
          int _len_ar0 = 1;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stats0 = 1;
          struct ath10k_sta_tid_stats * stats = (struct ath10k_sta_tid_stats *) malloc(_len_stats0*sizeof(struct ath10k_sta_tid_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
              int _len_stats__i0__rx_pkt_amsdu0 = 1;
          stats[_i0].rx_pkt_amsdu = (int *) malloc(_len_stats__i0__rx_pkt_amsdu0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stats__i0__rx_pkt_amsdu0; _j0++) {
            stats[_i0].rx_pkt_amsdu[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ath10k_rx_stats_update_amsdu_subfrm(ar,stats,msdu_count);
          free(ar);
          for(int _aux = 0; _aux < _len_stats0; _aux++) {
          free(stats[_aux].rx_pkt_amsdu);
          }
          free(stats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
