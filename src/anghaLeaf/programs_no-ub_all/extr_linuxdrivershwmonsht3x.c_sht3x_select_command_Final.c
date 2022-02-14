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
       0            big-arr\n\
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
struct TYPE_2__ {scalar_t__ high_precision; scalar_t__ blocking_io; } ;
struct sht3x_data {scalar_t__ mode; scalar_t__ wait_time; int /*<<< orphan*/  command; TYPE_1__ setup; } ;

/* Variables and functions */
 scalar_t__ SHT3X_NONBLOCKING_WAIT_TIME_HPM ; 
 scalar_t__ SHT3X_NONBLOCKING_WAIT_TIME_LPM ; 
 int /*<<< orphan*/  sht3x_cmd_measure_blocking_hpm ; 
 int /*<<< orphan*/  sht3x_cmd_measure_blocking_lpm ; 
 int /*<<< orphan*/  sht3x_cmd_measure_nonblocking_hpm ; 
 int /*<<< orphan*/  sht3x_cmd_measure_nonblocking_lpm ; 
 int /*<<< orphan*/  sht3x_cmd_measure_periodic_mode ; 

__attribute__((used)) static void sht3x_select_command(struct sht3x_data *data)
{
	/*
	 * In blocking mode (clock stretching mode) the I2C bus
	 * is blocked for other traffic, thus the call to i2c_master_recv()
	 * will wait until the data is ready. For non blocking mode, we
	 * have to wait ourselves.
	 */
	if (data->mode > 0) {
		data->command = sht3x_cmd_measure_periodic_mode;
		data->wait_time = 0;
	} else if (data->setup.blocking_io) {
		data->command = data->setup.high_precision ?
				sht3x_cmd_measure_blocking_hpm :
				sht3x_cmd_measure_blocking_lpm;
		data->wait_time = 0;
	} else {
		if (data->setup.high_precision) {
			data->command = sht3x_cmd_measure_nonblocking_hpm;
			data->wait_time = SHT3X_NONBLOCKING_WAIT_TIME_HPM;
		} else {
			data->command = sht3x_cmd_measure_nonblocking_lpm;
			data->wait_time = SHT3X_NONBLOCKING_WAIT_TIME_LPM;
		}
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

    // big-arr
    case 0:
    {
          int _len_data0 = 1;
          struct sht3x_data * data = (struct sht3x_data *) malloc(_len_data0*sizeof(struct sht3x_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data->mode = ((-2 * (next_i()%2)) + 1) * next_i();
        data->wait_time = ((-2 * (next_i()%2)) + 1) * next_i();
        data->command = ((-2 * (next_i()%2)) + 1) * next_i();
        data->setup.high_precision = ((-2 * (next_i()%2)) + 1) * next_i();
        data->setup.blocking_io = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sht3x_select_command(data);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
