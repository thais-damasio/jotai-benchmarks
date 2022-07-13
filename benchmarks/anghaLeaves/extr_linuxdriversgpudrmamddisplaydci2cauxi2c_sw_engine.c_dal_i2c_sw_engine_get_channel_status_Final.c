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
typedef  int /*<<< orphan*/  uint8_t ;
struct i2c_engine {int dummy; } ;
typedef  enum i2c_channel_operation_result { ____Placeholder_i2c_channel_operation_result } i2c_channel_operation_result ;

/* Variables and functions */
 int I2C_CHANNEL_OPERATION_SUCCEEDED ; 

enum i2c_channel_operation_result dal_i2c_sw_engine_get_channel_status(
	struct i2c_engine *engine,
	uint8_t *returned_bytes)
{
	/* No arbitration with VBIOS is performed since DCE 6.0 */
	return I2C_CHANNEL_OPERATION_SUCCEEDED;
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
          int _len_engine0 = 1;
          struct i2c_engine * engine = (struct i2c_engine *) malloc(_len_engine0*sizeof(struct i2c_engine));
          for(int _i0 = 0; _i0 < _len_engine0; _i0++) {
            engine[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_returned_bytes0 = 1;
          int * returned_bytes = (int *) malloc(_len_returned_bytes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_returned_bytes0; _i0++) {
            returned_bytes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum i2c_channel_operation_result benchRet = dal_i2c_sw_engine_get_channel_status(engine,returned_bytes);
          printf("{{other_type}} %p\n", &benchRet); 
          free(engine);
          free(returned_bytes);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_engine0 = 65025;
          struct i2c_engine * engine = (struct i2c_engine *) malloc(_len_engine0*sizeof(struct i2c_engine));
          for(int _i0 = 0; _i0 < _len_engine0; _i0++) {
            engine[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_returned_bytes0 = 65025;
          int * returned_bytes = (int *) malloc(_len_returned_bytes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_returned_bytes0; _i0++) {
            returned_bytes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum i2c_channel_operation_result benchRet = dal_i2c_sw_engine_get_channel_status(engine,returned_bytes);
          printf("{{other_type}} %p\n", &benchRet); 
          free(engine);
          free(returned_bytes);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_engine0 = 100;
          struct i2c_engine * engine = (struct i2c_engine *) malloc(_len_engine0*sizeof(struct i2c_engine));
          for(int _i0 = 0; _i0 < _len_engine0; _i0++) {
            engine[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_returned_bytes0 = 100;
          int * returned_bytes = (int *) malloc(_len_returned_bytes0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_returned_bytes0; _i0++) {
            returned_bytes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum i2c_channel_operation_result benchRet = dal_i2c_sw_engine_get_channel_status(engine,returned_bytes);
          printf("{{other_type}} %p\n", &benchRet); 
          free(engine);
          free(returned_bytes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
