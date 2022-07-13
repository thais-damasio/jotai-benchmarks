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
struct adf_hw_device_data {TYPE_1__* dev_class; } ;
struct TYPE_2__ {int /*<<< orphan*/  instances; } ;

/* Variables and functions */

void adf_clean_hw_data_c62x(struct adf_hw_device_data *hw_data)
{
	hw_data->dev_class->instances--;
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
          int _len_hw_data0 = 1;
          struct adf_hw_device_data * hw_data = (struct adf_hw_device_data *) malloc(_len_hw_data0*sizeof(struct adf_hw_device_data));
          for(int _i0 = 0; _i0 < _len_hw_data0; _i0++) {
              int _len_hw_data__i0__dev_class0 = 1;
          hw_data[_i0].dev_class = (struct TYPE_2__ *) malloc(_len_hw_data__i0__dev_class0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hw_data__i0__dev_class0; _j0++) {
            hw_data[_i0].dev_class->instances = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          adf_clean_hw_data_c62x(hw_data);
          for(int _aux = 0; _aux < _len_hw_data0; _aux++) {
          free(hw_data[_aux].dev_class);
          }
          free(hw_data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hw_data0 = 65025;
          struct adf_hw_device_data * hw_data = (struct adf_hw_device_data *) malloc(_len_hw_data0*sizeof(struct adf_hw_device_data));
          for(int _i0 = 0; _i0 < _len_hw_data0; _i0++) {
              int _len_hw_data__i0__dev_class0 = 1;
          hw_data[_i0].dev_class = (struct TYPE_2__ *) malloc(_len_hw_data__i0__dev_class0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hw_data__i0__dev_class0; _j0++) {
            hw_data[_i0].dev_class->instances = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          adf_clean_hw_data_c62x(hw_data);
          for(int _aux = 0; _aux < _len_hw_data0; _aux++) {
          free(hw_data[_aux].dev_class);
          }
          free(hw_data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hw_data0 = 100;
          struct adf_hw_device_data * hw_data = (struct adf_hw_device_data *) malloc(_len_hw_data0*sizeof(struct adf_hw_device_data));
          for(int _i0 = 0; _i0 < _len_hw_data0; _i0++) {
              int _len_hw_data__i0__dev_class0 = 1;
          hw_data[_i0].dev_class = (struct TYPE_2__ *) malloc(_len_hw_data__i0__dev_class0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hw_data__i0__dev_class0; _j0++) {
            hw_data[_i0].dev_class->instances = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          adf_clean_hw_data_c62x(hw_data);
          for(int _aux = 0; _aux < _len_hw_data0; _aux++) {
          free(hw_data[_aux].dev_class);
          }
          free(hw_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
