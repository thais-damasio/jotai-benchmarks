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
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
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
struct pvr2_hdw {int pathway_state; int /*<<< orphan*/  state_encoder_runok; TYPE_1__* hdw_desc; int /*<<< orphan*/  state_decoder_ready; int /*<<< orphan*/  state_decoder_run; int /*<<< orphan*/  state_pathway_ok; int /*<<< orphan*/  state_encoder_ok; } ;
struct TYPE_2__ {int /*<<< orphan*/  digital_control_scheme; } ;

/* Variables and functions */
 int /*<<< orphan*/  PVR2_DIGITAL_SCHEME_ONAIR ; 
#define  PVR2_PATHWAY_ANALOG 129 
#define  PVR2_PATHWAY_DIGITAL 128 

__attribute__((used)) static int state_check_enable_encoder_run(struct pvr2_hdw *hdw)
{
	if (!hdw->state_encoder_ok) {
		/* Don't run the encoder if it isn't healthy... */
		return 0;
	}
	if (!hdw->state_pathway_ok) {
		/* Don't run the encoder if we don't (yet) know what mode
		   we need to be in... */
		return 0;
	}

	switch (hdw->pathway_state) {
	case PVR2_PATHWAY_ANALOG:
		if (hdw->state_decoder_run && hdw->state_decoder_ready) {
			/* In analog mode, if the decoder is running, then
			   run the encoder. */
			return !0;
		}
		break;
	case PVR2_PATHWAY_DIGITAL:
		if ((hdw->hdw_desc->digital_control_scheme ==
		     PVR2_DIGITAL_SCHEME_ONAIR) &&
		    !hdw->state_encoder_runok) {
			/* This is a quirk.  OnAir hardware won't stream
			   digital until the encoder has been run at least
			   once, for a minimal period of time (empiricially
			   measured to be 1/4 second).  So if we're on
			   OnAir hardware and the encoder has never been
			   run at all, then start the encoder.  Normal
			   state machine logic in the driver will
			   automatically handle the remaining bits. */
			return !0;
		}
		break;
	default:
		/* For completeness (unknown mode; encoder won't run ever) */
		break;
	}
	/* If we get here, then we haven't found any reason to run the
	   encoder, so don't run it. */
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

    // int-bounds
    case 0:
    {
          int _len_hdw0 = 1;
          struct pvr2_hdw * hdw = (struct pvr2_hdw *) malloc(_len_hdw0*sizeof(struct pvr2_hdw));
          for(int _i0 = 0; _i0 < _len_hdw0; _i0++) {
            hdw[_i0].pathway_state = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_encoder_runok = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdw__i0__hdw_desc0 = 1;
          hdw[_i0].hdw_desc = (struct TYPE_2__ *) malloc(_len_hdw__i0__hdw_desc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hdw__i0__hdw_desc0; _j0++) {
            hdw[_i0].hdw_desc->digital_control_scheme = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdw[_i0].state_decoder_ready = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_decoder_run = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_pathway_ok = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_encoder_ok = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = state_check_enable_encoder_run(hdw);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hdw0; _aux++) {
          free(hdw[_aux].hdw_desc);
          }
          free(hdw);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hdw0 = 65025;
          struct pvr2_hdw * hdw = (struct pvr2_hdw *) malloc(_len_hdw0*sizeof(struct pvr2_hdw));
          for(int _i0 = 0; _i0 < _len_hdw0; _i0++) {
            hdw[_i0].pathway_state = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_encoder_runok = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdw__i0__hdw_desc0 = 1;
          hdw[_i0].hdw_desc = (struct TYPE_2__ *) malloc(_len_hdw__i0__hdw_desc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hdw__i0__hdw_desc0; _j0++) {
            hdw[_i0].hdw_desc->digital_control_scheme = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdw[_i0].state_decoder_ready = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_decoder_run = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_pathway_ok = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_encoder_ok = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = state_check_enable_encoder_run(hdw);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hdw0; _aux++) {
          free(hdw[_aux].hdw_desc);
          }
          free(hdw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hdw0 = 100;
          struct pvr2_hdw * hdw = (struct pvr2_hdw *) malloc(_len_hdw0*sizeof(struct pvr2_hdw));
          for(int _i0 = 0; _i0 < _len_hdw0; _i0++) {
            hdw[_i0].pathway_state = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_encoder_runok = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hdw__i0__hdw_desc0 = 1;
          hdw[_i0].hdw_desc = (struct TYPE_2__ *) malloc(_len_hdw__i0__hdw_desc0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hdw__i0__hdw_desc0; _j0++) {
            hdw[_i0].hdw_desc->digital_control_scheme = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hdw[_i0].state_decoder_ready = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_decoder_run = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_pathway_ok = ((-2 * (next_i()%2)) + 1) * next_i();
        hdw[_i0].state_encoder_ok = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = state_check_enable_encoder_run(hdw);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hdw0; _aux++) {
          free(hdw[_aux].hdw_desc);
          }
          free(hdw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
