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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int /*<<< orphan*/  DAC_OutputBuffer; int /*<<< orphan*/  DAC_LFSRUnmask_TriangleAmplitude; int /*<<< orphan*/  DAC_WaveGeneration; int /*<<< orphan*/  DAC_Trigger; } ;
typedef  TYPE_1__ DAC_InitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  DAC_LFSRUnmask_Bit0 ; 
 int /*<<< orphan*/  DAC_OutputBuffer_Enable ; 
 int /*<<< orphan*/  DAC_Trigger_None ; 
 int /*<<< orphan*/  DAC_WaveGeneration_None ; 

void DAC_StructInit(DAC_InitTypeDef* DAC_InitStruct)
{
/*--------------- Reset DAC init structure parameters values -----------------*/
  /* Initialize the DAC_Trigger member */
  DAC_InitStruct->DAC_Trigger = DAC_Trigger_None;
  
  /* Initialize the DAC_WaveGeneration member */
  DAC_InitStruct->DAC_WaveGeneration = DAC_WaveGeneration_None;
  
  /* Initialize the DAC_LFSRUnmask_TriangleAmplitude member */
  DAC_InitStruct->DAC_LFSRUnmask_TriangleAmplitude = DAC_LFSRUnmask_Bit0;
  
  /* Initialize the DAC_OutputBuffer member */
  DAC_InitStruct->DAC_OutputBuffer = DAC_OutputBuffer_Enable;
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
          int _len_DAC_InitStruct0 = 1;
          struct TYPE_3__ * DAC_InitStruct = (struct TYPE_3__ *) malloc(_len_DAC_InitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_DAC_InitStruct0; _i0++) {
            DAC_InitStruct->DAC_OutputBuffer = ((-2 * (next_i()%2)) + 1) * next_i();
        DAC_InitStruct->DAC_LFSRUnmask_TriangleAmplitude = ((-2 * (next_i()%2)) + 1) * next_i();
        DAC_InitStruct->DAC_WaveGeneration = ((-2 * (next_i()%2)) + 1) * next_i();
        DAC_InitStruct->DAC_Trigger = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          DAC_StructInit(DAC_InitStruct);
          free(DAC_InitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}