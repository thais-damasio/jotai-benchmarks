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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int sb_bsize; } ;
struct gfs2_sbd {TYPE_1__ sd_sb; } ;
typedef  int /*<<< orphan*/  __be64 ;

/* Variables and functions */
 int DATABUF_OFFSET ; 

__attribute__((used)) static inline unsigned int databuf_limit(struct gfs2_sbd *sdp)
{
	unsigned int limit;

	limit = (sdp->sd_sb.sb_bsize - DATABUF_OFFSET) / (2 * sizeof(__be64));
	return limit;
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
          int _len_sdp0 = 1;
          struct gfs2_sbd * sdp = (struct gfs2_sbd *) malloc(_len_sdp0*sizeof(struct gfs2_sbd));
          for(int _i0 = 0; _i0 < _len_sdp0; _i0++) {
            sdp->sd_sb.sb_bsize = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned int benchRet = databuf_limit(sdp);
          printf("%u\n", benchRet); 
          free(sdp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
