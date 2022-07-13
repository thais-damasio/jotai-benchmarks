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
struct stm32f7_i2c_dev {scalar_t__* slave; } ;

/* Variables and functions */
 int STM32F7_I2C_MAX_SLAVE ; 

__attribute__((used)) static bool stm32f7_i2c_is_slave_busy(struct stm32f7_i2c_dev *i2c_dev)
{
	int i, busy;

	busy = 0;
	for (i = 0; i < STM32F7_I2C_MAX_SLAVE; i++) {
		if (i2c_dev->slave[i])
			busy++;
	}

	return i == busy;
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
          int _len_i2c_dev0 = 1;
          struct stm32f7_i2c_dev * i2c_dev = (struct stm32f7_i2c_dev *) malloc(_len_i2c_dev0*sizeof(struct stm32f7_i2c_dev));
          for(int _i0 = 0; _i0 < _len_i2c_dev0; _i0++) {
              int _len_i2c_dev__i0__slave0 = 1;
          i2c_dev[_i0].slave = (long *) malloc(_len_i2c_dev__i0__slave0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_i2c_dev__i0__slave0; _j0++) {
            i2c_dev[_i0].slave[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = stm32f7_i2c_is_slave_busy(i2c_dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_i2c_dev0; _aux++) {
          free(i2c_dev[_aux].slave);
          }
          free(i2c_dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_i2c_dev0 = 65025;
          struct stm32f7_i2c_dev * i2c_dev = (struct stm32f7_i2c_dev *) malloc(_len_i2c_dev0*sizeof(struct stm32f7_i2c_dev));
          for(int _i0 = 0; _i0 < _len_i2c_dev0; _i0++) {
              int _len_i2c_dev__i0__slave0 = 1;
          i2c_dev[_i0].slave = (long *) malloc(_len_i2c_dev__i0__slave0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_i2c_dev__i0__slave0; _j0++) {
            i2c_dev[_i0].slave[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = stm32f7_i2c_is_slave_busy(i2c_dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_i2c_dev0; _aux++) {
          free(i2c_dev[_aux].slave);
          }
          free(i2c_dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_i2c_dev0 = 100;
          struct stm32f7_i2c_dev * i2c_dev = (struct stm32f7_i2c_dev *) malloc(_len_i2c_dev0*sizeof(struct stm32f7_i2c_dev));
          for(int _i0 = 0; _i0 < _len_i2c_dev0; _i0++) {
              int _len_i2c_dev__i0__slave0 = 1;
          i2c_dev[_i0].slave = (long *) malloc(_len_i2c_dev__i0__slave0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_i2c_dev__i0__slave0; _j0++) {
            i2c_dev[_i0].slave[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = stm32f7_i2c_is_slave_busy(i2c_dev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_i2c_dev0; _aux++) {
          free(i2c_dev[_aux].slave);
          }
          free(i2c_dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
