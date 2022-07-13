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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct hclge_32_bit_stats {scalar_t__ pkt_curr_buf_tc7_cnt; scalar_t__ pkt_curr_buf_tc6_cnt; scalar_t__ pkt_curr_buf_tc5_cnt; scalar_t__ pkt_curr_buf_tc4_cnt; scalar_t__ pkt_curr_buf_tc3_cnt; scalar_t__ pkt_curr_buf_tc2_cnt; scalar_t__ pkt_curr_buf_tc1_cnt; scalar_t__ pkt_curr_buf_tc0_cnt; scalar_t__ pkt_curr_buf_cnt; } ;

/* Variables and functions */

__attribute__((used)) static void hclge_reset_partial_32bit_counter(struct hclge_32_bit_stats *stats)
{
	stats->pkt_curr_buf_cnt     = 0;
	stats->pkt_curr_buf_tc0_cnt = 0;
	stats->pkt_curr_buf_tc1_cnt = 0;
	stats->pkt_curr_buf_tc2_cnt = 0;
	stats->pkt_curr_buf_tc3_cnt = 0;
	stats->pkt_curr_buf_tc4_cnt = 0;
	stats->pkt_curr_buf_tc5_cnt = 0;
	stats->pkt_curr_buf_tc6_cnt = 0;
	stats->pkt_curr_buf_tc7_cnt = 0;
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
          int _len_stats0 = 1;
          struct hclge_32_bit_stats * stats = (struct hclge_32_bit_stats *) malloc(_len_stats0*sizeof(struct hclge_32_bit_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].pkt_curr_buf_tc7_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc6_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc5_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc4_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc3_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc2_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc1_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc0_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hclge_reset_partial_32bit_counter(stats);
          free(stats);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_stats0 = 65025;
          struct hclge_32_bit_stats * stats = (struct hclge_32_bit_stats *) malloc(_len_stats0*sizeof(struct hclge_32_bit_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].pkt_curr_buf_tc7_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc6_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc5_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc4_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc3_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc2_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc1_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc0_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hclge_reset_partial_32bit_counter(stats);
          free(stats);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_stats0 = 100;
          struct hclge_32_bit_stats * stats = (struct hclge_32_bit_stats *) malloc(_len_stats0*sizeof(struct hclge_32_bit_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].pkt_curr_buf_tc7_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc6_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc5_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc4_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc3_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc2_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc1_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_tc0_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].pkt_curr_buf_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hclge_reset_partial_32bit_counter(stats);
          free(stats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
