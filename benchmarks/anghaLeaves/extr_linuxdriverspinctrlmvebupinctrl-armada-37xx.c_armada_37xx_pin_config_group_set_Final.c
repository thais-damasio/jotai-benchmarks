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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
\n\
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
struct pinctrl_dev {int dummy; } ;

/* Variables and functions */
 int ENOTSUPP ; 

__attribute__((used)) static int armada_37xx_pin_config_group_set(struct pinctrl_dev *pctldev,
			    unsigned int selector, unsigned long *configs,
			    unsigned int num_configs)
{
	return -ENOTSUPP;
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
          unsigned int selector = 100;
          unsigned int num_configs = 100;
          int _len_pctldev0 = 1;
          struct pinctrl_dev * pctldev = (struct pinctrl_dev *) malloc(_len_pctldev0*sizeof(struct pinctrl_dev));
          for(int _i0 = 0; _i0 < _len_pctldev0; _i0++) {
            pctldev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_configs0 = 1;
          unsigned long * configs = (unsigned long *) malloc(_len_configs0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_configs0; _i0++) {
            configs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = armada_37xx_pin_config_group_set(pctldev,selector,configs,num_configs);
          printf("%d\n", benchRet); 
          free(pctldev);
          free(configs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
