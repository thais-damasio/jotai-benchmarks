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
struct dvb_usb_rc {int /*<<< orphan*/  allowed_protos; } ;
struct dvb_usb_device {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  RC_PROTO_BIT_NEC32 ; 

__attribute__((used)) static int lme2510_get_rc_config(struct dvb_usb_device *d,
	struct dvb_usb_rc *rc)
{
	rc->allowed_protos = RC_PROTO_BIT_NEC32;
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
          int _len_d0 = 1;
          struct dvb_usb_device * d = (struct dvb_usb_device *) malloc(_len_d0*sizeof(struct dvb_usb_device));
          for(int _i0 = 0; _i0 < _len_d0; _i0++) {
            d->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rc0 = 1;
          struct dvb_usb_rc * rc = (struct dvb_usb_rc *) malloc(_len_rc0*sizeof(struct dvb_usb_rc));
          for(int _i0 = 0; _i0 < _len_rc0; _i0++) {
            rc->allowed_protos = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = lme2510_get_rc_config(d,rc);
          printf("%d\n", benchRet); 
          free(d);
          free(rc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
