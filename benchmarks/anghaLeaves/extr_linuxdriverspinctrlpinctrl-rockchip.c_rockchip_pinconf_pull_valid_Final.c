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
struct rockchip_pin_ctrl {int type; } ;
typedef  enum pin_config_param { ____Placeholder_pin_config_param } pin_config_param ;

/* Variables and functions */
 int PIN_CONFIG_BIAS_DISABLE ; 
 int PIN_CONFIG_BIAS_PULL_PIN_DEFAULT ; 
#define  PX30 136 
#define  RK2928 135 
#define  RK3066B 134 
#define  RK3128 133 
#define  RK3188 132 
#define  RK3288 131 
#define  RK3368 130 
#define  RK3399 129 
#define  RV1108 128 

__attribute__((used)) static bool rockchip_pinconf_pull_valid(struct rockchip_pin_ctrl *ctrl,
					enum pin_config_param pull)
{
	switch (ctrl->type) {
	case RK2928:
	case RK3128:
		return (pull == PIN_CONFIG_BIAS_PULL_PIN_DEFAULT ||
					pull == PIN_CONFIG_BIAS_DISABLE);
	case RK3066B:
		return pull ? false : true;
	case PX30:
	case RV1108:
	case RK3188:
	case RK3288:
	case RK3368:
	case RK3399:
		return (pull != PIN_CONFIG_BIAS_PULL_PIN_DEFAULT);
	}

	return false;
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
          enum pin_config_param pull = 0;
          int _len_ctrl0 = 1;
          struct rockchip_pin_ctrl * ctrl = (struct rockchip_pin_ctrl *) malloc(_len_ctrl0*sizeof(struct rockchip_pin_ctrl));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
            ctrl[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rockchip_pinconf_pull_valid(ctrl,pull);
          printf("%d\n", benchRet); 
          free(ctrl);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum pin_config_param pull = 0;
          int _len_ctrl0 = 65025;
          struct rockchip_pin_ctrl * ctrl = (struct rockchip_pin_ctrl *) malloc(_len_ctrl0*sizeof(struct rockchip_pin_ctrl));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
            ctrl[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rockchip_pinconf_pull_valid(ctrl,pull);
          printf("%d\n", benchRet); 
          free(ctrl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum pin_config_param pull = 0;
          int _len_ctrl0 = 100;
          struct rockchip_pin_ctrl * ctrl = (struct rockchip_pin_ctrl *) malloc(_len_ctrl0*sizeof(struct rockchip_pin_ctrl));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
            ctrl[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = rockchip_pinconf_pull_valid(ctrl,pull);
          printf("%d\n", benchRet); 
          free(ctrl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
