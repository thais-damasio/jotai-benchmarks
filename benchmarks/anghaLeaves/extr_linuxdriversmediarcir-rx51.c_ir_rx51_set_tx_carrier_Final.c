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
typedef  int u32 ;
struct rc_dev {struct ir_rx51* priv; } ;
struct ir_rx51 {int freq; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int ir_rx51_set_tx_carrier(struct rc_dev *dev, u32 carrier)
{
	struct ir_rx51 *ir_rx51 = dev->priv;

	if (carrier > 500000 || carrier < 20000)
		return -EINVAL;

	ir_rx51->freq = carrier;

	return 0;
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
          int carrier = 100;
          int _len_dev0 = 1;
          struct rc_dev * dev = (struct rc_dev *) malloc(_len_dev0*sizeof(struct rc_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__priv0 = 1;
          dev[_i0].priv = (struct ir_rx51 *) malloc(_len_dev__i0__priv0*sizeof(struct ir_rx51));
          for(int _j0 = 0; _j0 < _len_dev__i0__priv0; _j0++) {
            dev[_i0].priv->freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ir_rx51_set_tx_carrier(dev,carrier);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].priv);
          }
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int carrier = 255;
          int _len_dev0 = 65025;
          struct rc_dev * dev = (struct rc_dev *) malloc(_len_dev0*sizeof(struct rc_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__priv0 = 1;
          dev[_i0].priv = (struct ir_rx51 *) malloc(_len_dev__i0__priv0*sizeof(struct ir_rx51));
          for(int _j0 = 0; _j0 < _len_dev__i0__priv0; _j0++) {
            dev[_i0].priv->freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ir_rx51_set_tx_carrier(dev,carrier);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].priv);
          }
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int carrier = 10;
          int _len_dev0 = 100;
          struct rc_dev * dev = (struct rc_dev *) malloc(_len_dev0*sizeof(struct rc_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__priv0 = 1;
          dev[_i0].priv = (struct ir_rx51 *) malloc(_len_dev__i0__priv0*sizeof(struct ir_rx51));
          for(int _j0 = 0; _j0 < _len_dev__i0__priv0; _j0++) {
            dev[_i0].priv->freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = ir_rx51_set_tx_carrier(dev,carrier);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].priv);
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
