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
       0            big-arr-10x\n\
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
struct comedi_subdevice {void* lock; scalar_t__ busy; } ;
struct comedi_device {unsigned long n_subdevices; struct comedi_subdevice* subdevices; } ;

/* Variables and functions */
 int EACCES ; 
 int EBUSY ; 
 int EINVAL ; 

__attribute__((used)) static int do_unlock_ioctl(struct comedi_device *dev, unsigned long arg,
			   void *file)
{
	struct comedi_subdevice *s;

	if (arg >= dev->n_subdevices)
		return -EINVAL;
	s = &dev->subdevices[arg];

	if (s->busy)
		return -EBUSY;

	if (s->lock && s->lock != file)
		return -EACCES;

	if (s->lock == file)
		s->lock = NULL;

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

    // big-arr-10x
    case 0:
    {
          unsigned long arg = 10;
          int _len_dev0 = 100;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].n_subdevices = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__subdevices0 = 1;
          dev[_i0].subdevices = (struct comedi_subdevice *) malloc(_len_dev__i0__subdevices0*sizeof(struct comedi_subdevice));
          for(int _j0 = 0; _j0 < _len_dev__i0__subdevices0; _j0++) {
            dev[_i0].subdevices->busy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * file;
          int benchRet = do_unlock_ioctl(dev,arg,file);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].subdevices);
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
