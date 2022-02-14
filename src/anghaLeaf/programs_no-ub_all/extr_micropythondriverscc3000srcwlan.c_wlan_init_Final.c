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
typedef  int /*<<< orphan*/  tWriteWlanPin ;
typedef  int /*<<< orphan*/  tWlanReadInteruptPin ;
typedef  int /*<<< orphan*/  tWlanInterruptEnable ;
typedef  int /*<<< orphan*/  tWlanInterruptDisable ;
typedef  int /*<<< orphan*/  tWlanCB ;
typedef  int /*<<< orphan*/  tFWPatches ;
typedef  int /*<<< orphan*/  tDriverPatches ;
typedef  int /*<<< orphan*/  tBootLoaderPatches ;
struct TYPE_2__ {int InformHostOnTxComplete; int /*<<< orphan*/  sWlanCB; int /*<<< orphan*/  WriteWlanPin; int /*<<< orphan*/  WlanInterruptDisable; int /*<<< orphan*/  WlanInterruptEnable; int /*<<< orphan*/  ReadWlanInterruptPin; int /*<<< orphan*/  sBootLoaderPatches; int /*<<< orphan*/  sDriverPatches; int /*<<< orphan*/  sFWPatches; } ;

/* Variables and functions */
 TYPE_1__ tSLInformation ; 

void wlan_init(		tWlanCB	 	sWlanCB,
	tFWPatches sFWPatches,
	tDriverPatches sDriverPatches,
	tBootLoaderPatches sBootLoaderPatches,
	tWlanReadInteruptPin  sReadWlanInterruptPin,
	tWlanInterruptEnable  sWlanInterruptEnable,
	tWlanInterruptDisable sWlanInterruptDisable,
	tWriteWlanPin         sWriteWlanPin)
{

	tSLInformation.sFWPatches = sFWPatches;
	tSLInformation.sDriverPatches = sDriverPatches;
	tSLInformation.sBootLoaderPatches = sBootLoaderPatches;

	// init io callback
	tSLInformation.ReadWlanInterruptPin = sReadWlanInterruptPin;
	tSLInformation.WlanInterruptEnable  = sWlanInterruptEnable;
	tSLInformation.WlanInterruptDisable = sWlanInterruptDisable;
	tSLInformation.WriteWlanPin = sWriteWlanPin;

	//init asynchronous events callback
	tSLInformation.sWlanCB= sWlanCB;

	// By default TX Complete events are routed to host too
	tSLInformation.InformHostOnTxComplete = 1;
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
          int sWlanCB = 255;
          int sFWPatches = 255;
          int sDriverPatches = 255;
          int sBootLoaderPatches = 255;
          int sReadWlanInterruptPin = 255;
          int sWlanInterruptEnable = 255;
          int sWlanInterruptDisable = 255;
          int sWriteWlanPin = 255;
          wlan_init(sWlanCB,sFWPatches,sDriverPatches,sBootLoaderPatches,sReadWlanInterruptPin,sWlanInterruptEnable,sWlanInterruptDisable,sWriteWlanPin);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
