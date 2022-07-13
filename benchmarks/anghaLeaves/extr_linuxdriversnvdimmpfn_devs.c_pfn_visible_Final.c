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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int umode_t ;
struct kobject {int dummy; } ;
struct attribute {int mode; } ;
struct TYPE_2__ {struct attribute attr; } ;

/* Variables and functions */
 TYPE_1__ dev_attr_resource ; 

__attribute__((used)) static umode_t pfn_visible(struct kobject *kobj, struct attribute *a, int n)
{
	if (a == &dev_attr_resource.attr)
		return 0400;
	return a->mode;
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
          int n = 100;
          int _len_kobj0 = 1;
          struct kobject * kobj = (struct kobject *) malloc(_len_kobj0*sizeof(struct kobject));
          for(int _i0 = 0; _i0 < _len_kobj0; _i0++) {
            kobj[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a0 = 1;
          struct attribute * a = (struct attribute *) malloc(_len_a0*sizeof(struct attribute));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pfn_visible(kobj,a,n);
          printf("%d\n", benchRet); 
          free(kobj);
          free(a);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int _len_kobj0 = 65025;
          struct kobject * kobj = (struct kobject *) malloc(_len_kobj0*sizeof(struct kobject));
          for(int _i0 = 0; _i0 < _len_kobj0; _i0++) {
            kobj[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a0 = 65025;
          struct attribute * a = (struct attribute *) malloc(_len_a0*sizeof(struct attribute));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pfn_visible(kobj,a,n);
          printf("%d\n", benchRet); 
          free(kobj);
          free(a);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int _len_kobj0 = 100;
          struct kobject * kobj = (struct kobject *) malloc(_len_kobj0*sizeof(struct kobject));
          for(int _i0 = 0; _i0 < _len_kobj0; _i0++) {
            kobj[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_a0 = 100;
          struct attribute * a = (struct attribute *) malloc(_len_a0*sizeof(struct attribute));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0].mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pfn_visible(kobj,a,n);
          printf("%d\n", benchRet); 
          free(kobj);
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
