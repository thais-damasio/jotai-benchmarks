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
struct resync_pages {int dummy; } ;
struct bio {struct resync_pages* bi_private; } ;

/* Variables and functions */

__attribute__((used)) static inline struct resync_pages *get_resync_pages(struct bio *bio)
{
	return bio->bi_private;
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
          int _len_bio0 = 1;
          struct bio * bio = (struct bio *) malloc(_len_bio0*sizeof(struct bio));
          for(int _i0 = 0; _i0 < _len_bio0; _i0++) {
              int _len_bio__i0__bi_private0 = 1;
          bio[_i0].bi_private = (struct resync_pages *) malloc(_len_bio__i0__bi_private0*sizeof(struct resync_pages));
          for(int _j0 = 0; _j0 < _len_bio__i0__bi_private0; _j0++) {
            bio[_i0].bi_private->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct resync_pages * benchRet = get_resync_pages(bio);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_bio0; _aux++) {
          free(bio[_aux].bi_private);
          }
          free(bio);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bio0 = 65025;
          struct bio * bio = (struct bio *) malloc(_len_bio0*sizeof(struct bio));
          for(int _i0 = 0; _i0 < _len_bio0; _i0++) {
              int _len_bio__i0__bi_private0 = 1;
          bio[_i0].bi_private = (struct resync_pages *) malloc(_len_bio__i0__bi_private0*sizeof(struct resync_pages));
          for(int _j0 = 0; _j0 < _len_bio__i0__bi_private0; _j0++) {
            bio[_i0].bi_private->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct resync_pages * benchRet = get_resync_pages(bio);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_bio0; _aux++) {
          free(bio[_aux].bi_private);
          }
          free(bio);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bio0 = 100;
          struct bio * bio = (struct bio *) malloc(_len_bio0*sizeof(struct bio));
          for(int _i0 = 0; _i0 < _len_bio0; _i0++) {
              int _len_bio__i0__bi_private0 = 1;
          bio[_i0].bi_private = (struct resync_pages *) malloc(_len_bio__i0__bi_private0*sizeof(struct resync_pages));
          for(int _j0 = 0; _j0 < _len_bio__i0__bi_private0; _j0++) {
            bio[_i0].bi_private->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct resync_pages * benchRet = get_resync_pages(bio);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_bio0; _aux++) {
          free(bio[_aux].bi_private);
          }
          free(bio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
