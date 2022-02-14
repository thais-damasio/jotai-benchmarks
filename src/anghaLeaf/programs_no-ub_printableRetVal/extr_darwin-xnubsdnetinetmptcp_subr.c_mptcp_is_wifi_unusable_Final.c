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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct mptses {int mpte_flags; } ;
struct TYPE_2__ {int sa_wifi_status; } ;

/* Variables and functions */
 int MPTE_FIRSTPARTY ; 
 int SYMPTOMS_ADVISORY_WIFI_BAD ; 
 TYPE_1__ mptcp_advisory ; 

int
mptcp_is_wifi_unusable(struct mptses *mpte)
{
	if (mpte->mpte_flags & MPTE_FIRSTPARTY) {
		if (mptcp_advisory.sa_wifi_status)
			return ((mptcp_advisory.sa_wifi_status & SYMPTOMS_ADVISORY_WIFI_BAD) ? 1 : 0);

		/*
		 * If it's a first-party app and we don't have any info
		 * about the Wi-Fi state, let's be pessimistic.
		 */
		return (-1);
	}

	return ((mptcp_advisory.sa_wifi_status & SYMPTOMS_ADVISORY_WIFI_BAD) ? 1 : 0);
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
          int _len_mpte0 = 1;
          struct mptses * mpte = (struct mptses *) malloc(_len_mpte0*sizeof(struct mptses));
          for(int _i0 = 0; _i0 < _len_mpte0; _i0++) {
            mpte->mpte_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mptcp_is_wifi_unusable(mpte);
          printf("%d\n", benchRet); 
          free(mpte);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}