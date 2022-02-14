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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  size_t ULONG ;
struct TYPE_4__ {scalar_t__ ApicId; } ;
struct TYPE_3__ {size_t IrqType; scalar_t__ DstApicId; size_t DstApicInt; } ;

/* Variables and functions */
 TYPE_2__* IOAPICMap ; 
 size_t IRQCount ; 
 TYPE_1__* IRQMap ; 
 scalar_t__ MP_APIC_ALL ; 

__attribute__((used)) static ULONG 
IOAPICGetIrqEntry(ULONG apic,
		  ULONG pin,
		  ULONG type)
{
   ULONG i;

   for (i = 0; i < IRQCount; i++)
   {
      if (IRQMap[i].IrqType == type &&
	  (IRQMap[i].DstApicId == IOAPICMap[apic].ApicId || IRQMap[i].DstApicId == MP_APIC_ALL) &&
	  IRQMap[i].DstApicInt == pin)
      {
         return i;
      }
   }
   return -1;
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
          unsigned long apic = 255;
          unsigned long pin = 255;
          unsigned long type = 255;
          unsigned long benchRet = IOAPICGetIrqEntry(apic,pin,type);
          printf("%lu\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}