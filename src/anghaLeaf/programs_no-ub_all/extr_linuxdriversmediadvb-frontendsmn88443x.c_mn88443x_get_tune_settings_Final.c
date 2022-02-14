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
struct dvb_frontend_tune_settings {int min_delay_ms; int max_drift; int step_size; } ;
struct dtv_frontend_properties {scalar_t__ delivery_system; } ;
struct dvb_frontend {struct dtv_frontend_properties dtv_property_cache; } ;

/* Variables and functions */
 scalar_t__ SYS_ISDBS ; 
 scalar_t__ SYS_ISDBT ; 

__attribute__((used)) static int mn88443x_get_tune_settings(struct dvb_frontend *fe,
				      struct dvb_frontend_tune_settings *s)
{
	struct dtv_frontend_properties *c = &fe->dtv_property_cache;

	s->min_delay_ms = 850;

	if (c->delivery_system == SYS_ISDBS) {
		s->max_drift = 30000 * 2 + 1;
		s->step_size = 30000;
	} else if (c->delivery_system == SYS_ISDBT) {
		s->max_drift = 142857 * 2 + 1;
		s->step_size = 142857 * 2;
	}

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
          int _len_fe0 = 1;
          struct dvb_frontend * fe = (struct dvb_frontend *) malloc(_len_fe0*sizeof(struct dvb_frontend));
          for(int _i0 = 0; _i0 < _len_fe0; _i0++) {
            fe->dtv_property_cache.delivery_system = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s0 = 1;
          struct dvb_frontend_tune_settings * s = (struct dvb_frontend_tune_settings *) malloc(_len_s0*sizeof(struct dvb_frontend_tune_settings));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s->min_delay_ms = ((-2 * (next_i()%2)) + 1) * next_i();
        s->max_drift = ((-2 * (next_i()%2)) + 1) * next_i();
        s->step_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mn88443x_get_tune_settings(fe,s);
          printf("%d\n", benchRet); 
          free(fe);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
