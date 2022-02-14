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

/* Type definitions */
struct cx8802_driver {scalar_t__ type_id; scalar_t__ hw_access; int /*<<< orphan*/  advise_release; int /*<<< orphan*/  advise_acquire; int /*<<< orphan*/  remove; int /*<<< orphan*/  probe; } ;

/* Variables and functions */
 scalar_t__ CX8802_DRVCTL_EXCLUSIVE ; 
 scalar_t__ CX8802_DRVCTL_SHARED ; 
 scalar_t__ CX88_MPEG_BLACKBIRD ; 
 scalar_t__ CX88_MPEG_DVB ; 
 int EINVAL ; 
 int ENODEV ; 

__attribute__((used)) static int cx8802_check_driver(struct cx8802_driver *drv)
{
	if (!drv)
		return -ENODEV;

	if ((drv->type_id != CX88_MPEG_DVB) &&
	    (drv->type_id != CX88_MPEG_BLACKBIRD))
		return -EINVAL;

	if ((drv->hw_access != CX8802_DRVCTL_SHARED) &&
	    (drv->hw_access != CX8802_DRVCTL_EXCLUSIVE))
		return -EINVAL;

	if ((!drv->probe) ||
	    (!drv->remove) ||
	    (!drv->advise_acquire) ||
	    (!drv->advise_release))
		return -EINVAL;

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

    // big-arr
    case 0:
    {
          int _len_drv0 = 1;
          struct cx8802_driver * drv = (struct cx8802_driver *) malloc(_len_drv0*sizeof(struct cx8802_driver));
          for(int _i0 = 0; _i0 < _len_drv0; _i0++) {
            drv->type_id = ((-2 * (next_i()%2)) + 1) * next_i();
        drv->hw_access = ((-2 * (next_i()%2)) + 1) * next_i();
        drv->advise_release = ((-2 * (next_i()%2)) + 1) * next_i();
        drv->advise_acquire = ((-2 * (next_i()%2)) + 1) * next_i();
        drv->remove = ((-2 * (next_i()%2)) + 1) * next_i();
        drv->probe = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cx8802_check_driver(drv);
          printf("%d\n", benchRet); 
          free(drv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}