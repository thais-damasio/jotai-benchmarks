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

/* Type definitions */
struct hdac_driver {struct hda_device_id* id_table; } ;
struct hdac_device {scalar_t__ vendor_id; scalar_t__ revision_id; } ;
struct hda_device_id {scalar_t__ vendor_id; scalar_t__ rev_id; } ;

/* Variables and functions */

const struct hda_device_id *
hdac_get_device_id(struct hdac_device *hdev, struct hdac_driver *drv)
{
	if (drv->id_table) {
		const struct hda_device_id *id  = drv->id_table;

		while (id->vendor_id) {
			if (hdev->vendor_id == id->vendor_id &&
				(!id->rev_id || id->rev_id == hdev->revision_id))
				return id;
			id++;
		}
	}

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
          int _len_hdev0 = 65025;
          struct hdac_device * hdev = (struct hdac_device *) malloc(_len_hdev0*sizeof(struct hdac_device));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].vendor_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev[_i0].revision_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_drv0 = 65025;
          struct hdac_driver * drv = (struct hdac_driver *) malloc(_len_drv0*sizeof(struct hdac_driver));
          for(int _i0 = 0; _i0 < _len_drv0; _i0++) {
              int _len_drv__i0__id_table0 = 1;
          drv[_i0].id_table = (struct hda_device_id *) malloc(_len_drv__i0__id_table0*sizeof(struct hda_device_id));
          for(int _j0 = 0; _j0 < _len_drv__i0__id_table0; _j0++) {
            drv[_i0].id_table->vendor_id = ((-2 * (next_i()%2)) + 1) * next_i();
        drv[_i0].id_table->rev_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const struct hda_device_id * benchRet = hdac_get_device_id(hdev,drv);
          free(hdev);
          for(int _aux = 0; _aux < _len_drv0; _aux++) {
          free(drv[_aux].id_table);
          }
          free(drv);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_hdev0 = 100;
          struct hdac_device * hdev = (struct hdac_device *) malloc(_len_hdev0*sizeof(struct hdac_device));
          for(int _i0 = 0; _i0 < _len_hdev0; _i0++) {
            hdev[_i0].vendor_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hdev[_i0].revision_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_drv0 = 100;
          struct hdac_driver * drv = (struct hdac_driver *) malloc(_len_drv0*sizeof(struct hdac_driver));
          for(int _i0 = 0; _i0 < _len_drv0; _i0++) {
              int _len_drv__i0__id_table0 = 1;
          drv[_i0].id_table = (struct hda_device_id *) malloc(_len_drv__i0__id_table0*sizeof(struct hda_device_id));
          for(int _j0 = 0; _j0 < _len_drv__i0__id_table0; _j0++) {
            drv[_i0].id_table->vendor_id = ((-2 * (next_i()%2)) + 1) * next_i();
        drv[_i0].id_table->rev_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          const struct hda_device_id * benchRet = hdac_get_device_id(hdev,drv);
          free(hdev);
          for(int _aux = 0; _aux < _len_drv0; _aux++) {
          free(drv[_aux].id_table);
          }
          free(drv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
