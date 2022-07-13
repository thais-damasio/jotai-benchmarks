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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int u64 ;
struct mic_device {TYPE_2__* smpt; } ;
struct TYPE_3__ {int num_reg; int page_size; } ;
struct TYPE_4__ {TYPE_1__ info; } ;

/* Variables and functions */

__attribute__((used)) static inline u64 mic_max_system_memory(struct mic_device *mdev)
{
	return mdev->smpt->info.num_reg * mdev->smpt->info.page_size;
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
          int _len_mdev0 = 1;
          struct mic_device * mdev = (struct mic_device *) malloc(_len_mdev0*sizeof(struct mic_device));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
              int _len_mdev__i0__smpt0 = 1;
          mdev[_i0].smpt = (struct TYPE_4__ *) malloc(_len_mdev__i0__smpt0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mdev__i0__smpt0; _j0++) {
            mdev[_i0].smpt->info.num_reg = ((-2 * (next_i()%2)) + 1) * next_i();
        mdev[_i0].smpt->info.page_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mic_max_system_memory(mdev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mdev0; _aux++) {
          free(mdev[_aux].smpt);
          }
          free(mdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mdev0 = 65025;
          struct mic_device * mdev = (struct mic_device *) malloc(_len_mdev0*sizeof(struct mic_device));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
              int _len_mdev__i0__smpt0 = 1;
          mdev[_i0].smpt = (struct TYPE_4__ *) malloc(_len_mdev__i0__smpt0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mdev__i0__smpt0; _j0++) {
            mdev[_i0].smpt->info.num_reg = ((-2 * (next_i()%2)) + 1) * next_i();
        mdev[_i0].smpt->info.page_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mic_max_system_memory(mdev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mdev0; _aux++) {
          free(mdev[_aux].smpt);
          }
          free(mdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mdev0 = 100;
          struct mic_device * mdev = (struct mic_device *) malloc(_len_mdev0*sizeof(struct mic_device));
          for(int _i0 = 0; _i0 < _len_mdev0; _i0++) {
              int _len_mdev__i0__smpt0 = 1;
          mdev[_i0].smpt = (struct TYPE_4__ *) malloc(_len_mdev__i0__smpt0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_mdev__i0__smpt0; _j0++) {
            mdev[_i0].smpt->info.num_reg = ((-2 * (next_i()%2)) + 1) * next_i();
        mdev[_i0].smpt->info.page_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mic_max_system_memory(mdev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_mdev0; _aux++) {
          free(mdev[_aux].smpt);
          }
          free(mdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
