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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  u_int ;
struct ahc_tmode_tstate {int /*<<< orphan*/  auto_negotiate; } ;
struct ahc_softc {int features; } ;
struct TYPE_4__ {scalar_t__ period; scalar_t__ width; scalar_t__ offset; scalar_t__ ppr_options; } ;
struct TYPE_3__ {scalar_t__ width; scalar_t__ period; scalar_t__ offset; scalar_t__ ppr_options; } ;
struct ahc_initiator_tinfo {TYPE_2__ goal; TYPE_1__ curr; } ;
struct ahc_devinfo {int /*<<< orphan*/  target_mask; } ;
typedef  scalar_t__ ahc_neg_type ;

/* Variables and functions */
 scalar_t__ AHC_NEG_ALWAYS ; 
 scalar_t__ AHC_NEG_IF_NON_ASYNC ; 
 scalar_t__ AHC_OFFSET_UNKNOWN ; 
 scalar_t__ AHC_PERIOD_UNKNOWN ; 
 int AHC_WIDE ; 
 scalar_t__ AHC_WIDTH_UNKNOWN ; 
 scalar_t__ MSG_EXT_WDTR_BUS_8_BIT ; 

int
ahc_update_neg_request(struct ahc_softc *ahc, struct ahc_devinfo *devinfo,
		       struct ahc_tmode_tstate *tstate,
		       struct ahc_initiator_tinfo *tinfo, ahc_neg_type neg_type)
{
	u_int auto_negotiate_orig;

	auto_negotiate_orig = tstate->auto_negotiate;
	if (neg_type == AHC_NEG_ALWAYS) {
		/*
		 * Force our "current" settings to be
		 * unknown so that unless a bus reset
		 * occurs the need to renegotiate is
		 * recorded persistently.
		 */
		if ((ahc->features & AHC_WIDE) != 0)
			tinfo->curr.width = AHC_WIDTH_UNKNOWN;
		tinfo->curr.period = AHC_PERIOD_UNKNOWN;
		tinfo->curr.offset = AHC_OFFSET_UNKNOWN;
	}
	if (tinfo->curr.period != tinfo->goal.period
	 || tinfo->curr.width != tinfo->goal.width
	 || tinfo->curr.offset != tinfo->goal.offset
	 || tinfo->curr.ppr_options != tinfo->goal.ppr_options
	 || (neg_type == AHC_NEG_IF_NON_ASYNC
	  && (tinfo->goal.offset != 0
	   || tinfo->goal.width != MSG_EXT_WDTR_BUS_8_BIT
	   || tinfo->goal.ppr_options != 0)))
		tstate->auto_negotiate |= devinfo->target_mask;
	else
		tstate->auto_negotiate &= ~devinfo->target_mask;

	return (auto_negotiate_orig != tstate->auto_negotiate);
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
          long neg_type = 100;
          int _len_ahc0 = 1;
          struct ahc_softc * ahc = (struct ahc_softc *) malloc(_len_ahc0*sizeof(struct ahc_softc));
          for(int _i0 = 0; _i0 < _len_ahc0; _i0++) {
            ahc[_i0].features = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_devinfo0 = 1;
          struct ahc_devinfo * devinfo = (struct ahc_devinfo *) malloc(_len_devinfo0*sizeof(struct ahc_devinfo));
          for(int _i0 = 0; _i0 < _len_devinfo0; _i0++) {
            devinfo[_i0].target_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tstate0 = 1;
          struct ahc_tmode_tstate * tstate = (struct ahc_tmode_tstate *) malloc(_len_tstate0*sizeof(struct ahc_tmode_tstate));
          for(int _i0 = 0; _i0 < _len_tstate0; _i0++) {
            tstate[_i0].auto_negotiate = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tinfo0 = 1;
          struct ahc_initiator_tinfo * tinfo = (struct ahc_initiator_tinfo *) malloc(_len_tinfo0*sizeof(struct ahc_initiator_tinfo));
          for(int _i0 = 0; _i0 < _len_tinfo0; _i0++) {
            tinfo[_i0].goal.period = ((-2 * (next_i()%2)) + 1) * next_i();
        tinfo[_i0].goal.width = ((-2 * (next_i()%2)) + 1) * next_i();
        tinfo[_i0].goal.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        tinfo[_i0].goal.ppr_options = ((-2 * (next_i()%2)) + 1) * next_i();
        tinfo[_i0].curr.width = ((-2 * (next_i()%2)) + 1) * next_i();
        tinfo[_i0].curr.period = ((-2 * (next_i()%2)) + 1) * next_i();
        tinfo[_i0].curr.offset = ((-2 * (next_i()%2)) + 1) * next_i();
        tinfo[_i0].curr.ppr_options = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ahc_update_neg_request(ahc,devinfo,tstate,tinfo,neg_type);
          printf("%d\n", benchRet); 
          free(ahc);
          free(devinfo);
          free(tstate);
          free(tinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
