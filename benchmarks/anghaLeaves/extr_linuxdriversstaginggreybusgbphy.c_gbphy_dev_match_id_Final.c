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
       1            big-arr-10x\n\
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
struct gbphy_driver {struct gbphy_device_id* id_table; } ;
struct gbphy_device_id {scalar_t__ protocol_id; } ;
struct gbphy_device {TYPE_1__* cport_desc; } ;
struct TYPE_2__ {scalar_t__ protocol_id; } ;

/* Variables and functions */

__attribute__((used)) static const struct gbphy_device_id *
gbphy_dev_match_id(struct gbphy_device *gbphy_dev,
		   struct gbphy_driver *gbphy_drv)
{
	const struct gbphy_device_id *id = gbphy_drv->id_table;

	if (!id)
		return NULL;

	for (; id->protocol_id; id++)
		if (id->protocol_id == gbphy_dev->cport_desc->protocol_id)
			return id;

	return NULL;
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
          int _len_gbphy_dev0 = 65025;
          struct gbphy_device * gbphy_dev = (struct gbphy_device *) malloc(_len_gbphy_dev0*sizeof(struct gbphy_device));
          for(int _i0 = 0; _i0 < _len_gbphy_dev0; _i0++) {
              int _len_gbphy_dev__i0__cport_desc0 = 1;
          gbphy_dev[_i0].cport_desc = (struct TYPE_2__ *) malloc(_len_gbphy_dev__i0__cport_desc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gbphy_dev__i0__cport_desc0; _j0++) {
            gbphy_dev[_i0].cport_desc->protocol_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_gbphy_drv0 = 65025;
          struct gbphy_driver * gbphy_drv = (struct gbphy_driver *) malloc(_len_gbphy_drv0*sizeof(struct gbphy_driver));
          for(int _i0 = 0; _i0 < _len_gbphy_drv0; _i0++) {
              int _len_gbphy_drv__i0__id_table0 = 1;
          gbphy_drv[_i0].id_table = (struct gbphy_device_id *) malloc(_len_gbphy_drv__i0__id_table0*sizeof(struct gbphy_device_id));
          for(int _j0 = 0; _j0 < _len_gbphy_drv__i0__id_table0; _j0++) {
            gbphy_drv[_i0].id_table->protocol_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const struct gbphy_device_id * benchRet = gbphy_dev_match_id(gbphy_dev,gbphy_drv);
          for(int _aux = 0; _aux < _len_gbphy_dev0; _aux++) {
          free(gbphy_dev[_aux].cport_desc);
          }
          free(gbphy_dev);
          for(int _aux = 0; _aux < _len_gbphy_drv0; _aux++) {
          free(gbphy_drv[_aux].id_table);
          }
          free(gbphy_drv);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_gbphy_dev0 = 100;
          struct gbphy_device * gbphy_dev = (struct gbphy_device *) malloc(_len_gbphy_dev0*sizeof(struct gbphy_device));
          for(int _i0 = 0; _i0 < _len_gbphy_dev0; _i0++) {
              int _len_gbphy_dev__i0__cport_desc0 = 1;
          gbphy_dev[_i0].cport_desc = (struct TYPE_2__ *) malloc(_len_gbphy_dev__i0__cport_desc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gbphy_dev__i0__cport_desc0; _j0++) {
            gbphy_dev[_i0].cport_desc->protocol_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_gbphy_drv0 = 100;
          struct gbphy_driver * gbphy_drv = (struct gbphy_driver *) malloc(_len_gbphy_drv0*sizeof(struct gbphy_driver));
          for(int _i0 = 0; _i0 < _len_gbphy_drv0; _i0++) {
              int _len_gbphy_drv__i0__id_table0 = 1;
          gbphy_drv[_i0].id_table = (struct gbphy_device_id *) malloc(_len_gbphy_drv__i0__id_table0*sizeof(struct gbphy_device_id));
          for(int _j0 = 0; _j0 < _len_gbphy_drv__i0__id_table0; _j0++) {
            gbphy_drv[_i0].id_table->protocol_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const struct gbphy_device_id * benchRet = gbphy_dev_match_id(gbphy_dev,gbphy_drv);
          for(int _aux = 0; _aux < _len_gbphy_dev0; _aux++) {
          free(gbphy_dev[_aux].cport_desc);
          }
          free(gbphy_dev);
          for(int _aux = 0; _aux < _len_gbphy_drv0; _aux++) {
          free(gbphy_drv[_aux].id_table);
          }
          free(gbphy_drv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
