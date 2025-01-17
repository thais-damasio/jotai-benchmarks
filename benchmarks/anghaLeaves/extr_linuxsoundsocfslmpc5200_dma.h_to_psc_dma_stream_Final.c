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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct snd_pcm_substream {TYPE_1__* pstr; } ;
struct psc_dma_stream {int dummy; } ;
struct psc_dma {struct psc_dma_stream playback; struct psc_dma_stream capture; } ;
struct TYPE_2__ {scalar_t__ stream; } ;

/* Variables and functions */
 scalar_t__ SNDRV_PCM_STREAM_CAPTURE ; 

__attribute__((used)) static inline struct psc_dma_stream *
to_psc_dma_stream(struct snd_pcm_substream *substream, struct psc_dma *psc_dma)
{
	if (substream->pstr->stream == SNDRV_PCM_STREAM_CAPTURE)
		return &psc_dma->capture;
	return &psc_dma->playback;
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
          int _len_substream0 = 1;
          struct snd_pcm_substream * substream = (struct snd_pcm_substream *) malloc(_len_substream0*sizeof(struct snd_pcm_substream));
          for(int _i0 = 0; _i0 < _len_substream0; _i0++) {
              int _len_substream__i0__pstr0 = 1;
          substream[_i0].pstr = (struct TYPE_2__ *) malloc(_len_substream__i0__pstr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_substream__i0__pstr0; _j0++) {
            substream[_i0].pstr->stream = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_psc_dma0 = 1;
          struct psc_dma * psc_dma = (struct psc_dma *) malloc(_len_psc_dma0*sizeof(struct psc_dma));
          for(int _i0 = 0; _i0 < _len_psc_dma0; _i0++) {
            psc_dma[_i0].playback.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        psc_dma[_i0].capture.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct psc_dma_stream * benchRet = to_psc_dma_stream(substream,psc_dma);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_substream0; _aux++) {
          free(substream[_aux].pstr);
          }
          free(substream);
          free(psc_dma);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
