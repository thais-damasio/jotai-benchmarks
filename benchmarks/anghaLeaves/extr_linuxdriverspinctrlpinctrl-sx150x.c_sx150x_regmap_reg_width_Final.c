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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct sx150x_pinctrl {struct sx150x_device_data* data; } ;
struct TYPE_7__ {unsigned int reg_advanced; } ;
struct TYPE_6__ {unsigned int reg_advanced; } ;
struct TYPE_5__ {unsigned int reg_misc; unsigned int reg_clock; unsigned int reg_reset; } ;
struct TYPE_8__ {TYPE_3__ x456; TYPE_2__ x123; TYPE_1__ x789; } ;
struct sx150x_device_data {unsigned int reg_sense; int ngpios; scalar_t__ model; TYPE_4__ pri; } ;

/* Variables and functions */
 scalar_t__ SX150X_123 ; 
 scalar_t__ SX150X_456 ; 
 scalar_t__ SX150X_789 ; 

__attribute__((used)) static int sx150x_regmap_reg_width(struct sx150x_pinctrl *pctl,
				   unsigned int reg)
{
	const struct sx150x_device_data *data = pctl->data;

	if (reg == data->reg_sense) {
		/*
		 * RegSense packs two bits of configuration per GPIO,
		 * so we'd need to read twice as many bits as there
		 * are GPIO in our chip
		 */
		return 2 * data->ngpios;
	} else if ((data->model == SX150X_789 &&
		    (reg == data->pri.x789.reg_misc ||
		     reg == data->pri.x789.reg_clock ||
		     reg == data->pri.x789.reg_reset))
		   ||
		   (data->model == SX150X_123 &&
		    reg == data->pri.x123.reg_advanced)
		   ||
		   (data->model == SX150X_456 &&
		    data->pri.x456.reg_advanced &&
		    reg == data->pri.x456.reg_advanced)) {
		return 8;
	} else {
		return data->ngpios;
	}
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
          unsigned int reg = 100;
          int _len_pctl0 = 1;
          struct sx150x_pinctrl * pctl = (struct sx150x_pinctrl *) malloc(_len_pctl0*sizeof(struct sx150x_pinctrl));
          for(int _i0 = 0; _i0 < _len_pctl0; _i0++) {
              int _len_pctl__i0__data0 = 1;
          pctl[_i0].data = (struct sx150x_device_data *) malloc(_len_pctl__i0__data0*sizeof(struct sx150x_device_data));
          for(int _j0 = 0; _j0 < _len_pctl__i0__data0; _j0++) {
            pctl[_i0].data->reg_sense = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->ngpios = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->model = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->pri.x456.reg_advanced = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->pri.x123.reg_advanced = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->pri.x789.reg_misc = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->pri.x789.reg_clock = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->pri.x789.reg_reset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sx150x_regmap_reg_width(pctl,reg);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pctl0; _aux++) {
          free(pctl[_aux].data);
          }
          free(pctl);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int reg = 255;
          int _len_pctl0 = 65025;
          struct sx150x_pinctrl * pctl = (struct sx150x_pinctrl *) malloc(_len_pctl0*sizeof(struct sx150x_pinctrl));
          for(int _i0 = 0; _i0 < _len_pctl0; _i0++) {
              int _len_pctl__i0__data0 = 1;
          pctl[_i0].data = (struct sx150x_device_data *) malloc(_len_pctl__i0__data0*sizeof(struct sx150x_device_data));
          for(int _j0 = 0; _j0 < _len_pctl__i0__data0; _j0++) {
            pctl[_i0].data->reg_sense = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->ngpios = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->model = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->pri.x456.reg_advanced = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->pri.x123.reg_advanced = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->pri.x789.reg_misc = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->pri.x789.reg_clock = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->pri.x789.reg_reset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sx150x_regmap_reg_width(pctl,reg);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pctl0; _aux++) {
          free(pctl[_aux].data);
          }
          free(pctl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int reg = 10;
          int _len_pctl0 = 100;
          struct sx150x_pinctrl * pctl = (struct sx150x_pinctrl *) malloc(_len_pctl0*sizeof(struct sx150x_pinctrl));
          for(int _i0 = 0; _i0 < _len_pctl0; _i0++) {
              int _len_pctl__i0__data0 = 1;
          pctl[_i0].data = (struct sx150x_device_data *) malloc(_len_pctl__i0__data0*sizeof(struct sx150x_device_data));
          for(int _j0 = 0; _j0 < _len_pctl__i0__data0; _j0++) {
            pctl[_i0].data->reg_sense = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->ngpios = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->model = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->pri.x456.reg_advanced = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->pri.x123.reg_advanced = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->pri.x789.reg_misc = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->pri.x789.reg_clock = ((-2 * (next_i()%2)) + 1) * next_i();
        pctl[_i0].data->pri.x789.reg_reset = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = sx150x_regmap_reg_width(pctl,reg);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pctl0; _aux++) {
          free(pctl[_aux].data);
          }
          free(pctl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
