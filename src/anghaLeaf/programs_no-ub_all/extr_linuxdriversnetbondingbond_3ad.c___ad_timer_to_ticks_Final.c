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
typedef  int u16 ;

/* Variables and functions */
#define  AD_ACTOR_CHURN_TIMER 132 
 int AD_AGGREGATE_WAIT_TIME ; 
 int AD_CHURN_DETECTION_TIME ; 
#define  AD_CURRENT_WHILE_TIMER 131 
 int AD_LONG_TIMEOUT_TIME ; 
#define  AD_PARTNER_CHURN_TIMER 130 
#define  AD_PERIODIC_TIMER 129 
 int AD_SHORT_TIMEOUT_TIME ; 
#define  AD_WAIT_WHILE_TIMER 128 
 int ad_ticks_per_sec ; 

__attribute__((used)) static u16 __ad_timer_to_ticks(u16 timer_type, u16 par)
{
	u16 retval = 0; /* to silence the compiler */

	switch (timer_type) {
	case AD_CURRENT_WHILE_TIMER:	/* for rx machine usage */
		if (par)
			retval = (AD_SHORT_TIMEOUT_TIME*ad_ticks_per_sec);
		else
			retval = (AD_LONG_TIMEOUT_TIME*ad_ticks_per_sec);
		break;
	case AD_ACTOR_CHURN_TIMER:	/* for local churn machine */
		retval = (AD_CHURN_DETECTION_TIME*ad_ticks_per_sec);
		break;
	case AD_PERIODIC_TIMER:		/* for periodic machine */
		retval = (par*ad_ticks_per_sec); /* long timeout */
		break;
	case AD_PARTNER_CHURN_TIMER:	/* for remote churn machine */
		retval = (AD_CHURN_DETECTION_TIME*ad_ticks_per_sec);
		break;
	case AD_WAIT_WHILE_TIMER:	/* for selection machine */
		retval = (AD_AGGREGATE_WAIT_TIME*ad_ticks_per_sec);
		break;
	}

	return retval;
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
          int timer_type = 255;
          int par = 255;
          int benchRet = __ad_timer_to_ticks(timer_type,par);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}