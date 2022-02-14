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
struct usb_host_endpoint {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void endpoint_update(int edi,
				   struct usb_host_endpoint **in,
				   struct usb_host_endpoint **out,
				   struct usb_host_endpoint *e)
{
	if (edi) {
		if (!*in)
			*in = e;
	} else {
		if (!*out)
			*out = e;
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
          int edi = 255;
          int _len_in0 = 1;
          struct usb_host_endpoint ** in = (struct usb_host_endpoint **) malloc(_len_in0*sizeof(struct usb_host_endpoint *));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            int _len_in1 = 1;
            in[_i0] = (struct usb_host_endpoint *) malloc(_len_in1*sizeof(struct usb_host_endpoint));
            for(int _i1 = 0; _i1 < _len_in1; _i1++) {
              in[_i0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_out0 = 1;
          struct usb_host_endpoint ** out = (struct usb_host_endpoint **) malloc(_len_out0*sizeof(struct usb_host_endpoint *));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            int _len_out1 = 1;
            out[_i0] = (struct usb_host_endpoint *) malloc(_len_out1*sizeof(struct usb_host_endpoint));
            for(int _i1 = 0; _i1 < _len_out1; _i1++) {
              out[_i0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_e0 = 1;
          struct usb_host_endpoint * e = (struct usb_host_endpoint *) malloc(_len_e0*sizeof(struct usb_host_endpoint));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          endpoint_update(edi,in,out,e);
          for(int i1 = 0; i1 < _len_in0; i1++) {
            int _len_in1 = 1;
              free(in[i1]);
          }
          free(in);
          for(int i1 = 0; i1 < _len_out0; i1++) {
            int _len_out1 = 1;
              free(out[i1]);
          }
          free(out);
          free(e);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
