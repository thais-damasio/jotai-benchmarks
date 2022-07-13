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
struct file_lock {int dummy; } ;
struct file {int dummy; } ;

/* Variables and functions */
 int EINVAL ; 

int
simple_nosetlease(struct file *filp, long arg, struct file_lock **flp,
		  void **priv)
{
	return -EINVAL;
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
          long arg = 100;
          int _len_filp0 = 1;
          struct file * filp = (struct file *) malloc(_len_filp0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_filp0; _i0++) {
            filp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_flp0 = 1;
          struct file_lock ** flp = (struct file_lock **) malloc(_len_flp0*sizeof(struct file_lock *));
          for(int _i0 = 0; _i0 < _len_flp0; _i0++) {
            int _len_flp1 = 1;
            flp[_i0] = (struct file_lock *) malloc(_len_flp1*sizeof(struct file_lock));
            for(int _i1 = 0; _i1 < _len_flp1; _i1++) {
              flp[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_priv0 = 1;
          void ** priv = (void **) malloc(_len_priv0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
          }
          int benchRet = simple_nosetlease(filp,arg,flp,priv);
          printf("%d\n", benchRet); 
          free(filp);
          for(int i1 = 0; i1 < _len_flp0; i1++) {
            int _len_flp1 = 1;
              free(flp[i1]);
          }
          free(flp);
          for(int i1 = 0; i1 < _len_priv0; i1++) {
            int _len_priv1 = 1;
              }
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          long arg = 255;
          int _len_filp0 = 65025;
          struct file * filp = (struct file *) malloc(_len_filp0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_filp0; _i0++) {
            filp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_flp0 = 65025;
          struct file_lock ** flp = (struct file_lock **) malloc(_len_flp0*sizeof(struct file_lock *));
          for(int _i0 = 0; _i0 < _len_flp0; _i0++) {
            int _len_flp1 = 1;
            flp[_i0] = (struct file_lock *) malloc(_len_flp1*sizeof(struct file_lock));
            for(int _i1 = 0; _i1 < _len_flp1; _i1++) {
              flp[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_priv0 = 65025;
          void ** priv = (void **) malloc(_len_priv0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
          }
          int benchRet = simple_nosetlease(filp,arg,flp,priv);
          printf("%d\n", benchRet); 
          free(filp);
          for(int i1 = 0; i1 < _len_flp0; i1++) {
            int _len_flp1 = 1;
              free(flp[i1]);
          }
          free(flp);
          for(int i1 = 0; i1 < _len_priv0; i1++) {
            int _len_priv1 = 1;
              }
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long arg = 10;
          int _len_filp0 = 100;
          struct file * filp = (struct file *) malloc(_len_filp0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_filp0; _i0++) {
            filp[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_flp0 = 100;
          struct file_lock ** flp = (struct file_lock **) malloc(_len_flp0*sizeof(struct file_lock *));
          for(int _i0 = 0; _i0 < _len_flp0; _i0++) {
            int _len_flp1 = 1;
            flp[_i0] = (struct file_lock *) malloc(_len_flp1*sizeof(struct file_lock));
            for(int _i1 = 0; _i1 < _len_flp1; _i1++) {
              flp[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_priv0 = 100;
          void ** priv = (void **) malloc(_len_priv0*sizeof(void *));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
          }
          int benchRet = simple_nosetlease(filp,arg,flp,priv);
          printf("%d\n", benchRet); 
          free(filp);
          for(int i1 = 0; i1 < _len_flp0; i1++) {
            int _len_flp1 = 1;
              free(flp[i1]);
          }
          free(flp);
          for(int i1 = 0; i1 < _len_priv0; i1++) {
            int _len_priv1 = 1;
              }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
