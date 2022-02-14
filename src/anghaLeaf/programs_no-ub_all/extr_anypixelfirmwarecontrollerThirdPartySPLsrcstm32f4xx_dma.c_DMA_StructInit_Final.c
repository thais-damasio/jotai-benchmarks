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
struct TYPE_3__ {int /*<<< orphan*/  DMA_PeripheralBurst; int /*<<< orphan*/  DMA_MemoryBurst; int /*<<< orphan*/  DMA_FIFOThreshold; int /*<<< orphan*/  DMA_FIFOMode; int /*<<< orphan*/  DMA_Priority; int /*<<< orphan*/  DMA_Mode; int /*<<< orphan*/  DMA_MemoryDataSize; int /*<<< orphan*/  DMA_PeripheralDataSize; int /*<<< orphan*/  DMA_MemoryInc; int /*<<< orphan*/  DMA_PeripheralInc; scalar_t__ DMA_BufferSize; int /*<<< orphan*/  DMA_DIR; scalar_t__ DMA_Memory0BaseAddr; scalar_t__ DMA_PeripheralBaseAddr; scalar_t__ DMA_Channel; } ;
typedef  TYPE_1__ DMA_InitTypeDef ;

/* Variables and functions */
 int /*<<< orphan*/  DMA_DIR_PeripheralToMemory ; 
 int /*<<< orphan*/  DMA_FIFOMode_Disable ; 
 int /*<<< orphan*/  DMA_FIFOThreshold_1QuarterFull ; 
 int /*<<< orphan*/  DMA_MemoryBurst_Single ; 
 int /*<<< orphan*/  DMA_MemoryDataSize_Byte ; 
 int /*<<< orphan*/  DMA_MemoryInc_Disable ; 
 int /*<<< orphan*/  DMA_Mode_Normal ; 
 int /*<<< orphan*/  DMA_PeripheralBurst_Single ; 
 int /*<<< orphan*/  DMA_PeripheralDataSize_Byte ; 
 int /*<<< orphan*/  DMA_PeripheralInc_Disable ; 
 int /*<<< orphan*/  DMA_Priority_Low ; 

void DMA_StructInit(DMA_InitTypeDef* DMA_InitStruct)
{
  /*-------------- Reset DMA init structure parameters values ----------------*/
  /* Initialize the DMA_Channel member */
  DMA_InitStruct->DMA_Channel = 0;

  /* Initialize the DMA_PeripheralBaseAddr member */
  DMA_InitStruct->DMA_PeripheralBaseAddr = 0;

  /* Initialize the DMA_Memory0BaseAddr member */
  DMA_InitStruct->DMA_Memory0BaseAddr = 0;

  /* Initialize the DMA_DIR member */
  DMA_InitStruct->DMA_DIR = DMA_DIR_PeripheralToMemory;

  /* Initialize the DMA_BufferSize member */
  DMA_InitStruct->DMA_BufferSize = 0;

  /* Initialize the DMA_PeripheralInc member */
  DMA_InitStruct->DMA_PeripheralInc = DMA_PeripheralInc_Disable;

  /* Initialize the DMA_MemoryInc member */
  DMA_InitStruct->DMA_MemoryInc = DMA_MemoryInc_Disable;

  /* Initialize the DMA_PeripheralDataSize member */
  DMA_InitStruct->DMA_PeripheralDataSize = DMA_PeripheralDataSize_Byte;

  /* Initialize the DMA_MemoryDataSize member */
  DMA_InitStruct->DMA_MemoryDataSize = DMA_MemoryDataSize_Byte;

  /* Initialize the DMA_Mode member */
  DMA_InitStruct->DMA_Mode = DMA_Mode_Normal;

  /* Initialize the DMA_Priority member */
  DMA_InitStruct->DMA_Priority = DMA_Priority_Low;

  /* Initialize the DMA_FIFOMode member */
  DMA_InitStruct->DMA_FIFOMode = DMA_FIFOMode_Disable;

  /* Initialize the DMA_FIFOThreshold member */
  DMA_InitStruct->DMA_FIFOThreshold = DMA_FIFOThreshold_1QuarterFull;

  /* Initialize the DMA_MemoryBurst member */
  DMA_InitStruct->DMA_MemoryBurst = DMA_MemoryBurst_Single;

  /* Initialize the DMA_PeripheralBurst member */
  DMA_InitStruct->DMA_PeripheralBurst = DMA_PeripheralBurst_Single;
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
          int _len_DMA_InitStruct0 = 1;
          struct TYPE_3__ * DMA_InitStruct = (struct TYPE_3__ *) malloc(_len_DMA_InitStruct0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_DMA_InitStruct0; _i0++) {
            DMA_InitStruct->DMA_PeripheralBurst = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct->DMA_MemoryBurst = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct->DMA_FIFOThreshold = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct->DMA_FIFOMode = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct->DMA_Priority = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct->DMA_Mode = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct->DMA_MemoryDataSize = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct->DMA_PeripheralDataSize = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct->DMA_MemoryInc = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct->DMA_PeripheralInc = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct->DMA_BufferSize = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct->DMA_DIR = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct->DMA_Memory0BaseAddr = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct->DMA_PeripheralBaseAddr = ((-2 * (next_i()%2)) + 1) * next_i();
        DMA_InitStruct->DMA_Channel = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          DMA_StructInit(DMA_InitStruct);
          free(DMA_InitStruct);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
