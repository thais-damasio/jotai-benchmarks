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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
\n\
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
struct comedi_subdevice {struct comedi_async* async; } ;
struct comedi_cmd {scalar_t__ stop_src; scalar_t__ stop_arg; } ;
struct comedi_async {scalar_t__ scans_done; struct comedi_cmd cmd; } ;

/* Variables and functions */
 scalar_t__ TRIG_COUNT ; 

__attribute__((used)) static unsigned int __comedi_nscans_left(struct comedi_subdevice *s,
					 unsigned int nscans)
{
	struct comedi_async *async = s->async;
	struct comedi_cmd *cmd = &async->cmd;

	if (cmd->stop_src == TRIG_COUNT) {
		unsigned int scans_left = 0;

		if (async->scans_done < cmd->stop_arg)
			scans_left = cmd->stop_arg - async->scans_done;

		if (nscans > scans_left)
			nscans = scans_left;
	}
	return nscans;
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
          unsigned int nscans = 100;
          int _len_s0 = 1;
          struct comedi_subdevice * s = (struct comedi_subdevice *) malloc(_len_s0*sizeof(struct comedi_subdevice));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__async0 = 1;
          s[_i0].async = (struct comedi_async *) malloc(_len_s__i0__async0*sizeof(struct comedi_async));
          for(int _j0 = 0; _j0 < _len_s__i0__async0; _j0++) {
            s[_i0].async->scans_done = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].async->cmd.stop_src = ((-2 * (next_i()%2)) + 1) * next_i();
        s[_i0].async->cmd.stop_arg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          unsigned int benchRet = __comedi_nscans_left(s,nscans);
          printf("%u\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].async);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
