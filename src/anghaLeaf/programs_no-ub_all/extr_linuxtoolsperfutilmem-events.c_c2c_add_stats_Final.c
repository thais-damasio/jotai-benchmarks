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
struct c2c_stats {scalar_t__ noparse; scalar_t__ nomap; scalar_t__ rmt_dram; scalar_t__ lcl_dram; scalar_t__ rmt_hit; scalar_t__ tot_hitm; scalar_t__ rmt_hitm; scalar_t__ lcl_hitm; scalar_t__ ld_llchit; scalar_t__ ld_l2hit; scalar_t__ ld_l1hit; scalar_t__ ld_fbhit; scalar_t__ ld_noadrs; scalar_t__ ld_miss; scalar_t__ ld_io; scalar_t__ ld_uncache; scalar_t__ ld_shared; scalar_t__ ld_excl; scalar_t__ load; scalar_t__ st_l1miss; scalar_t__ st_l1hit; scalar_t__ st_noadrs; scalar_t__ st_uncache; scalar_t__ store; scalar_t__ locks; scalar_t__ nr_entries; } ;

/* Variables and functions */

void c2c_add_stats(struct c2c_stats *stats, struct c2c_stats *add)
{
	stats->nr_entries	+= add->nr_entries;

	stats->locks		+= add->locks;
	stats->store		+= add->store;
	stats->st_uncache	+= add->st_uncache;
	stats->st_noadrs	+= add->st_noadrs;
	stats->st_l1hit		+= add->st_l1hit;
	stats->st_l1miss	+= add->st_l1miss;
	stats->load		+= add->load;
	stats->ld_excl		+= add->ld_excl;
	stats->ld_shared	+= add->ld_shared;
	stats->ld_uncache	+= add->ld_uncache;
	stats->ld_io		+= add->ld_io;
	stats->ld_miss		+= add->ld_miss;
	stats->ld_noadrs	+= add->ld_noadrs;
	stats->ld_fbhit		+= add->ld_fbhit;
	stats->ld_l1hit		+= add->ld_l1hit;
	stats->ld_l2hit		+= add->ld_l2hit;
	stats->ld_llchit	+= add->ld_llchit;
	stats->lcl_hitm		+= add->lcl_hitm;
	stats->rmt_hitm		+= add->rmt_hitm;
	stats->tot_hitm		+= add->tot_hitm;
	stats->rmt_hit		+= add->rmt_hit;
	stats->lcl_dram		+= add->lcl_dram;
	stats->rmt_dram		+= add->rmt_dram;
	stats->nomap		+= add->nomap;
	stats->noparse		+= add->noparse;
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
          int _len_stats0 = 1;
          struct c2c_stats * stats = (struct c2c_stats *) malloc(_len_stats0*sizeof(struct c2c_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats->noparse = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->nomap = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->rmt_dram = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->lcl_dram = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->rmt_hit = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->tot_hitm = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->rmt_hitm = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->lcl_hitm = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->ld_llchit = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->ld_l2hit = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->ld_l1hit = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->ld_fbhit = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->ld_noadrs = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->ld_miss = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->ld_io = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->ld_uncache = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->ld_shared = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->ld_excl = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->load = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->st_l1miss = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->st_l1hit = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->st_noadrs = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->st_uncache = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->store = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->locks = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->nr_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_add0 = 1;
          struct c2c_stats * add = (struct c2c_stats *) malloc(_len_add0*sizeof(struct c2c_stats));
          for(int _i0 = 0; _i0 < _len_add0; _i0++) {
            add->noparse = ((-2 * (next_i()%2)) + 1) * next_i();
        add->nomap = ((-2 * (next_i()%2)) + 1) * next_i();
        add->rmt_dram = ((-2 * (next_i()%2)) + 1) * next_i();
        add->lcl_dram = ((-2 * (next_i()%2)) + 1) * next_i();
        add->rmt_hit = ((-2 * (next_i()%2)) + 1) * next_i();
        add->tot_hitm = ((-2 * (next_i()%2)) + 1) * next_i();
        add->rmt_hitm = ((-2 * (next_i()%2)) + 1) * next_i();
        add->lcl_hitm = ((-2 * (next_i()%2)) + 1) * next_i();
        add->ld_llchit = ((-2 * (next_i()%2)) + 1) * next_i();
        add->ld_l2hit = ((-2 * (next_i()%2)) + 1) * next_i();
        add->ld_l1hit = ((-2 * (next_i()%2)) + 1) * next_i();
        add->ld_fbhit = ((-2 * (next_i()%2)) + 1) * next_i();
        add->ld_noadrs = ((-2 * (next_i()%2)) + 1) * next_i();
        add->ld_miss = ((-2 * (next_i()%2)) + 1) * next_i();
        add->ld_io = ((-2 * (next_i()%2)) + 1) * next_i();
        add->ld_uncache = ((-2 * (next_i()%2)) + 1) * next_i();
        add->ld_shared = ((-2 * (next_i()%2)) + 1) * next_i();
        add->ld_excl = ((-2 * (next_i()%2)) + 1) * next_i();
        add->load = ((-2 * (next_i()%2)) + 1) * next_i();
        add->st_l1miss = ((-2 * (next_i()%2)) + 1) * next_i();
        add->st_l1hit = ((-2 * (next_i()%2)) + 1) * next_i();
        add->st_noadrs = ((-2 * (next_i()%2)) + 1) * next_i();
        add->st_uncache = ((-2 * (next_i()%2)) + 1) * next_i();
        add->store = ((-2 * (next_i()%2)) + 1) * next_i();
        add->locks = ((-2 * (next_i()%2)) + 1) * next_i();
        add->nr_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          c2c_add_stats(stats,add);
          free(stats);
          free(add);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}