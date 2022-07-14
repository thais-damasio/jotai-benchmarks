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
struct device_node {int dummy; } ;
struct adv7511 {int dummy; } ;

/* Variables and functions */
 int ENODEV ; 

__attribute__((used)) static inline int adv7533_parse_dt(struct device_node *np, struct adv7511 *adv)
{
	return -ENODEV;
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
          int _len_np0 = 1;
          struct device_node * np = (struct device_node *) malloc(_len_np0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            np[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adv0 = 1;
          struct adv7511 * adv = (struct adv7511 *) malloc(_len_adv0*sizeof(struct adv7511));
          for(int _i0 = 0; _i0 < _len_adv0; _i0++) {
            adv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = adv7533_parse_dt(np,adv);
          printf("%d\n", benchRet); 
          free(np);
          free(adv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_np0 = 65025;
          struct device_node * np = (struct device_node *) malloc(_len_np0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            np[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adv0 = 65025;
          struct adv7511 * adv = (struct adv7511 *) malloc(_len_adv0*sizeof(struct adv7511));
          for(int _i0 = 0; _i0 < _len_adv0; _i0++) {
            adv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = adv7533_parse_dt(np,adv);
          printf("%d\n", benchRet); 
          free(np);
          free(adv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_np0 = 100;
          struct device_node * np = (struct device_node *) malloc(_len_np0*sizeof(struct device_node));
          for(int _i0 = 0; _i0 < _len_np0; _i0++) {
            np[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adv0 = 100;
          struct adv7511 * adv = (struct adv7511 *) malloc(_len_adv0*sizeof(struct adv7511));
          for(int _i0 = 0; _i0 < _len_adv0; _i0++) {
            adv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = adv7533_parse_dt(np,adv);
          printf("%d\n", benchRet); 
          free(np);
          free(adv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}