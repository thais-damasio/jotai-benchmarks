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

/* Type definitions */
typedef  int ALint ;
typedef  int ALenum ;
typedef  int /*<<< orphan*/  ALboolean ;

/* Variables and functions */
 int /*<<< orphan*/  AL_FALSE ; 
#define  AL_FORMAT_MONO16 131 
#define  AL_FORMAT_MONO8 130 
#define  AL_FORMAT_STEREO16 129 
#define  AL_FORMAT_STEREO8 128 
 int /*<<< orphan*/  AL_TRUE ; 

ALboolean _alutFormatGetNumChannels(ALenum format, ALint * numChannels)
{
  switch (format)
  {
  case AL_FORMAT_MONO8:
  case AL_FORMAT_MONO16:
    *numChannels = 1;
    return AL_TRUE;
  case AL_FORMAT_STEREO8:
  case AL_FORMAT_STEREO16:
    *numChannels = 2;
    return AL_TRUE;
  }
  return AL_FALSE;
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
          int format = 100;
          int _len_numChannels0 = 1;
          int * numChannels = (int *) malloc(_len_numChannels0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_numChannels0; _i0++) {
            numChannels[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _alutFormatGetNumChannels(format,numChannels);
          printf("%d\n", benchRet); 
          free(numChannels);
        
        break;
    }
    // big-arr
    case 1:
    {
          int format = 255;
          int _len_numChannels0 = 65025;
          int * numChannels = (int *) malloc(_len_numChannels0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_numChannels0; _i0++) {
            numChannels[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _alutFormatGetNumChannels(format,numChannels);
          printf("%d\n", benchRet); 
          free(numChannels);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int format = 10;
          int _len_numChannels0 = 100;
          int * numChannels = (int *) malloc(_len_numChannels0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_numChannels0; _i0++) {
            numChannels[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _alutFormatGetNumChannels(format,numChannels);
          printf("%d\n", benchRet); 
          free(numChannels);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
