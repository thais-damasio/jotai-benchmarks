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
struct brcms_pub {int dummy; } ;
struct brcms_c_info {struct brcms_pub* pub; } ;

/* Variables and functions */

struct brcms_pub *brcms_c_pub(struct brcms_c_info *wlc)
{
	return wlc->pub;
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
          int _len_wlc0 = 1;
          struct brcms_c_info * wlc = (struct brcms_c_info *) malloc(_len_wlc0*sizeof(struct brcms_c_info));
          for(int _i0 = 0; _i0 < _len_wlc0; _i0++) {
              int _len_wlc__i0__pub0 = 1;
          wlc[_i0].pub = (struct brcms_pub *) malloc(_len_wlc__i0__pub0*sizeof(struct brcms_pub));
          for(int _j0 = 0; _j0 < _len_wlc__i0__pub0; _j0++) {
            wlc[_i0].pub->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct brcms_pub * benchRet = brcms_c_pub(wlc);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_wlc0; _aux++) {
          free(wlc[_aux].pub);
          }
          free(wlc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_wlc0 = 65025;
          struct brcms_c_info * wlc = (struct brcms_c_info *) malloc(_len_wlc0*sizeof(struct brcms_c_info));
          for(int _i0 = 0; _i0 < _len_wlc0; _i0++) {
              int _len_wlc__i0__pub0 = 1;
          wlc[_i0].pub = (struct brcms_pub *) malloc(_len_wlc__i0__pub0*sizeof(struct brcms_pub));
          for(int _j0 = 0; _j0 < _len_wlc__i0__pub0; _j0++) {
            wlc[_i0].pub->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct brcms_pub * benchRet = brcms_c_pub(wlc);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_wlc0; _aux++) {
          free(wlc[_aux].pub);
          }
          free(wlc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_wlc0 = 100;
          struct brcms_c_info * wlc = (struct brcms_c_info *) malloc(_len_wlc0*sizeof(struct brcms_c_info));
          for(int _i0 = 0; _i0 < _len_wlc0; _i0++) {
              int _len_wlc__i0__pub0 = 1;
          wlc[_i0].pub = (struct brcms_pub *) malloc(_len_wlc__i0__pub0*sizeof(struct brcms_pub));
          for(int _j0 = 0; _j0 < _len_wlc__i0__pub0; _j0++) {
            wlc[_i0].pub->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct brcms_pub * benchRet = brcms_c_pub(wlc);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_wlc0; _aux++) {
          free(wlc[_aux].pub);
          }
          free(wlc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
