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
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {struct comedi_8254* pacer; } ;
struct comedi_cmd {scalar_t__ convert_src; } ;
struct comedi_8254 {unsigned int osc_base; } ;
struct TYPE_2__ {struct comedi_cmd cmd; } ;

/* Variables and functions */
 scalar_t__ TRIG_NOW ; 

__attribute__((used)) static void pci9118_calc_divisors(struct comedi_device *dev,
				  struct comedi_subdevice *s,
				  unsigned int *tim1, unsigned int *tim2,
				  unsigned int flags, int chans,
				  unsigned int *div1, unsigned int *div2,
				  unsigned int chnsshfront)
{
	struct comedi_8254 *pacer = dev->pacer;
	struct comedi_cmd *cmd = &s->async->cmd;

	*div1 = *tim2 / pacer->osc_base;	/* convert timer (burst) */
	*div2 = *tim1 / pacer->osc_base;	/* scan timer */
	*div2 = *div2 / *div1;			/* major timer is c1*c2 */
	if (*div2 < chans)
		*div2 = chans;

	*tim2 = *div1 * pacer->osc_base;	/* real convert timer */

	if (cmd->convert_src == TRIG_NOW && !chnsshfront) {
		/* use BSSH signal */
		if (*div2 < (chans + 2))
			*div2 = chans + 2;
	}

	*tim1 = *div1 * *div2 * pacer->osc_base;
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
          unsigned int flags = 255;
          int chans = 255;
          unsigned int chnsshfront = 255;
          int _len_dev0 = 65025;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__pacer0 = 1;
          dev[_i0].pacer = (struct comedi_8254 *) malloc(_len_dev__i0__pacer0*sizeof(struct comedi_8254));
          for(int _j0 = 0; _j0 < _len_dev__i0__pacer0; _j0++) {
            dev[_i0].pacer->osc_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s0 = 65025;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__async0 = 1;
          s[_i0].async = (struct TYPE_2__ *) malloc(_len_s__i0__async0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_s__i0__async0; _j0++) {
            s[_i0].async->cmd.convert_src = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tim10 = 65025;
          unsigned int * tim1 = (unsigned int *) malloc(_len_tim10*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_tim10; _i0++) {
            tim1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tim20 = 65025;
          unsigned int * tim2 = (unsigned int *) malloc(_len_tim20*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_tim20; _i0++) {
            tim2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_div10 = 65025;
          unsigned int * div1 = (unsigned int *) malloc(_len_div10*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_div10; _i0++) {
            div1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_div20 = 65025;
          unsigned int * div2 = (unsigned int *) malloc(_len_div20*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_div20; _i0++) {
            div2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pci9118_calc_divisors(dev,s,tim1,tim2,flags,chans,div1,div2,chnsshfront);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].pacer);
          }
          free(dev);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].async);
          }
          free(s);
          free(tim1);
          free(tim2);
          free(div1);
          free(div2);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          unsigned int flags = 10;
          int chans = 10;
          unsigned int chnsshfront = 10;
          int _len_dev0 = 100;
          struct comedi_device * dev = (struct comedi_device *) malloc(_len_dev0*sizeof(struct comedi_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__pacer0 = 1;
          dev[_i0].pacer = (struct comedi_8254 *) malloc(_len_dev__i0__pacer0*sizeof(struct comedi_8254));
          for(int _j0 = 0; _j0 < _len_dev__i0__pacer0; _j0++) {
            dev[_i0].pacer->osc_base = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_s0 = 100;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__async0 = 1;
          s[_i0].async = (struct TYPE_2__ *) malloc(_len_s__i0__async0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_s__i0__async0; _j0++) {
            s[_i0].async->cmd.convert_src = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tim10 = 100;
          unsigned int * tim1 = (unsigned int *) malloc(_len_tim10*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_tim10; _i0++) {
            tim1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tim20 = 100;
          unsigned int * tim2 = (unsigned int *) malloc(_len_tim20*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_tim20; _i0++) {
            tim2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_div10 = 100;
          unsigned int * div1 = (unsigned int *) malloc(_len_div10*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_div10; _i0++) {
            div1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_div20 = 100;
          unsigned int * div2 = (unsigned int *) malloc(_len_div20*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_div20; _i0++) {
            div2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pci9118_calc_divisors(dev,s,tim1,tim2,flags,chans,div1,div2,chnsshfront);
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].pacer);
          }
          free(dev);
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].async);
          }
          free(s);
          free(tim1);
          free(tim2);
          free(div1);
          free(div2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
