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
typedef  int u32 ;
struct brcmstb_i2c_dev {TYPE_1__* bsc_regmap; } ;
struct TYPE_2__ {int iic_enable; } ;

/* Variables and functions */
 int COND_START_STOP ; 

__attribute__((used)) static void brcmstb_set_i2c_start_stop(struct brcmstb_i2c_dev *dev,
				       u32 cond_flag)
{
	u32 regval = dev->bsc_regmap->iic_enable;

	dev->bsc_regmap->iic_enable = (regval & ~COND_START_STOP) | cond_flag;
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
          int cond_flag = 100;
          int _len_dev0 = 1;
          struct brcmstb_i2c_dev * dev = (struct brcmstb_i2c_dev *) malloc(_len_dev0*sizeof(struct brcmstb_i2c_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__bsc_regmap0 = 1;
          dev[_i0].bsc_regmap = (struct TYPE_2__ *) malloc(_len_dev__i0__bsc_regmap0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__bsc_regmap0; _j0++) {
            dev[_i0].bsc_regmap->iic_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          brcmstb_set_i2c_start_stop(dev,cond_flag);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].bsc_regmap);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cond_flag = 255;
          int _len_dev0 = 65025;
          struct brcmstb_i2c_dev * dev = (struct brcmstb_i2c_dev *) malloc(_len_dev0*sizeof(struct brcmstb_i2c_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__bsc_regmap0 = 1;
          dev[_i0].bsc_regmap = (struct TYPE_2__ *) malloc(_len_dev__i0__bsc_regmap0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__bsc_regmap0; _j0++) {
            dev[_i0].bsc_regmap->iic_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          brcmstb_set_i2c_start_stop(dev,cond_flag);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].bsc_regmap);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cond_flag = 10;
          int _len_dev0 = 100;
          struct brcmstb_i2c_dev * dev = (struct brcmstb_i2c_dev *) malloc(_len_dev0*sizeof(struct brcmstb_i2c_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__bsc_regmap0 = 1;
          dev[_i0].bsc_regmap = (struct TYPE_2__ *) malloc(_len_dev__i0__bsc_regmap0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dev__i0__bsc_regmap0; _j0++) {
            dev[_i0].bsc_regmap->iic_enable = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          brcmstb_set_i2c_start_stop(dev,cond_flag);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].bsc_regmap);
          }
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
