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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int nBlockAlign; int nChannels; int wBitsPerSample; int nAvgBytesPerSec; int nSamplesPerSec; } ;
struct TYPE_4__ {TYPE_2__ Format; } ;
typedef  TYPE_1__ WAVEFORMATEXTENSIBLE ;
typedef  TYPE_2__ WAVEFORMATEX ;

/* Variables and functions */

__attribute__((used)) static void update_waveformat_datarate(WAVEFORMATEXTENSIBLE *wformat)
{
    WAVEFORMATEX *wf = &wformat->Format;
    wf->nBlockAlign     = wf->nChannels      * wf->wBitsPerSample / 8;
    wf->nAvgBytesPerSec = wf->nSamplesPerSec * wf->nBlockAlign;
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
          int _len_wformat0 = 1;
          struct TYPE_4__ * wformat = (struct TYPE_4__ *) malloc(_len_wformat0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_wformat0; _i0++) {
            wformat[_i0].Format.nBlockAlign = ((-2 * (next_i()%2)) + 1) * next_i();
        wformat[_i0].Format.nChannels = ((-2 * (next_i()%2)) + 1) * next_i();
        wformat[_i0].Format.wBitsPerSample = ((-2 * (next_i()%2)) + 1) * next_i();
        wformat[_i0].Format.nAvgBytesPerSec = ((-2 * (next_i()%2)) + 1) * next_i();
        wformat[_i0].Format.nSamplesPerSec = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_waveformat_datarate(wformat);
          free(wformat);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
