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
       1            big-arr-10x\n\
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
struct SiS_Private {scalar_t__ ChipType; } ;

/* Variables and functions */
 scalar_t__ SIS_315H ; 

__attribute__((used)) static void
SiS_WaitVBRetrace(struct SiS_Private *SiS_Pr)
{
   if(SiS_Pr->ChipType < SIS_315H) {
#ifdef CONFIG_FB_SIS_300
      if(SiS_Pr->SiS_VBType & VB_SIS30xBLV) {
	 if(!(SiS_GetReg(SiS_Pr->SiS_Part1Port,0x00) & 0x20)) return;
      }
      if(!(SiS_GetReg(SiS_Pr->SiS_Part1Port,0x00) & 0x80)) {
	 SiS_WaitRetrace1(SiS_Pr);
      } else {
	 SiS_WaitRetrace2(SiS_Pr, 0x25);
      }
#endif
   } else {
#ifdef CONFIG_FB_SIS_315
      if(!(SiS_GetReg(SiS_Pr->SiS_Part1Port,0x00) & 0x40)) {
	 SiS_WaitRetrace1(SiS_Pr);
      } else {
	 SiS_WaitRetrace2(SiS_Pr, 0x30);
      }
#endif
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

    // int-bounds
    case 0:
    {
          int _len_SiS_Pr0 = 1;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
            SiS_Pr[_i0].ChipType = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SiS_WaitVBRetrace(SiS_Pr);
          free(SiS_Pr);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int _len_SiS_Pr0 = 100;
          struct SiS_Private * SiS_Pr = (struct SiS_Private *) malloc(_len_SiS_Pr0*sizeof(struct SiS_Private));
          for(int _i0 = 0; _i0 < _len_SiS_Pr0; _i0++) {
            SiS_Pr[_i0].ChipType = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          SiS_WaitVBRetrace(SiS_Pr);
          free(SiS_Pr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
