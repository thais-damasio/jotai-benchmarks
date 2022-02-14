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
struct ip_vs_estimator {int cps; int inpps; int outpps; int inbps; int outbps; } ;
struct ip_vs_stats {struct ip_vs_estimator est; } ;
struct ip_vs_kstats {int cps; int inpps; int outpps; int inbps; int outbps; } ;

/* Variables and functions */

void ip_vs_read_estimator(struct ip_vs_kstats *dst, struct ip_vs_stats *stats)
{
	struct ip_vs_estimator *e = &stats->est;

	dst->cps = (e->cps + 0x1FF) >> 10;
	dst->inpps = (e->inpps + 0x1FF) >> 10;
	dst->outpps = (e->outpps + 0x1FF) >> 10;
	dst->inbps = (e->inbps + 0xF) >> 5;
	dst->outbps = (e->outbps + 0xF) >> 5;
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
          int _len_dst0 = 1;
          struct ip_vs_kstats * dst = (struct ip_vs_kstats *) malloc(_len_dst0*sizeof(struct ip_vs_kstats));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst->cps = ((-2 * (next_i()%2)) + 1) * next_i();
        dst->inpps = ((-2 * (next_i()%2)) + 1) * next_i();
        dst->outpps = ((-2 * (next_i()%2)) + 1) * next_i();
        dst->inbps = ((-2 * (next_i()%2)) + 1) * next_i();
        dst->outbps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stats0 = 1;
          struct ip_vs_stats * stats = (struct ip_vs_stats *) malloc(_len_stats0*sizeof(struct ip_vs_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats->est.cps = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->est.inpps = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->est.outpps = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->est.inbps = ((-2 * (next_i()%2)) + 1) * next_i();
        stats->est.outbps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ip_vs_read_estimator(dst,stats);
          free(dst);
          free(stats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
