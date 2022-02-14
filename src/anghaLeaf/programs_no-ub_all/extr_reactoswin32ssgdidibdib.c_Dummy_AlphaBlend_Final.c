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
typedef  int /*<<< orphan*/  XLATEOBJ ;
typedef  int /*<<< orphan*/  SURFOBJ ;
typedef  int /*<<< orphan*/  RECTL ;
typedef  int /*<<< orphan*/  CLIPOBJ ;
typedef  int /*<<< orphan*/  BOOLEAN ;
typedef  int /*<<< orphan*/  BLENDOBJ ;

/* Variables and functions */
 int /*<<< orphan*/  FALSE ; 

BOOLEAN
Dummy_AlphaBlend(SURFOBJ* Dest, SURFOBJ* Source, RECTL* DestRect,
                 RECTL* SourceRect, CLIPOBJ* ClipRegion,
                 XLATEOBJ* ColorTranslation, BLENDOBJ* BlendObj)
{
  return FALSE;
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
          int _len_Dest0 = 65025;
          int * Dest = (int *) malloc(_len_Dest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Dest0; _i0++) {
            Dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_Source0 = 65025;
          int * Source = (int *) malloc(_len_Source0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_Source0; _i0++) {
            Source[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_DestRect0 = 65025;
          int * DestRect = (int *) malloc(_len_DestRect0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_DestRect0; _i0++) {
            DestRect[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_SourceRect0 = 65025;
          int * SourceRect = (int *) malloc(_len_SourceRect0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_SourceRect0; _i0++) {
            SourceRect[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ClipRegion0 = 65025;
          int * ClipRegion = (int *) malloc(_len_ClipRegion0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ClipRegion0; _i0++) {
            ClipRegion[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ColorTranslation0 = 65025;
          int * ColorTranslation = (int *) malloc(_len_ColorTranslation0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_ColorTranslation0; _i0++) {
            ColorTranslation[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_BlendObj0 = 65025;
          int * BlendObj = (int *) malloc(_len_BlendObj0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_BlendObj0; _i0++) {
            BlendObj[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = Dummy_AlphaBlend(Dest,Source,DestRect,SourceRect,ClipRegion,ColorTranslation,BlendObj);
          printf("%d\n", benchRet); 
          free(Dest);
          free(Source);
          free(DestRect);
          free(SourceRect);
          free(ClipRegion);
          free(ColorTranslation);
          free(BlendObj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
