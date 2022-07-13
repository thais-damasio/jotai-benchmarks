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
struct snd_pcm_runtime {void* dma_area; int dma_bytes; int channels; } ;

/* Variables and functions */

__attribute__((used)) static void *get_dma_ptr(struct snd_pcm_runtime *runtime,
			   int channel, unsigned long hwoff)
{
	return runtime->dma_area + hwoff +
		channel * (runtime->dma_bytes / runtime->channels);
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
          int channel = 100;
          unsigned long hwoff = 100;
          int _len_runtime0 = 1;
          struct snd_pcm_runtime * runtime = (struct snd_pcm_runtime *) malloc(_len_runtime0*sizeof(struct snd_pcm_runtime));
          for(int _i0 = 0; _i0 < _len_runtime0; _i0++) {
            runtime[_i0].dma_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        runtime[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = get_dma_ptr(runtime,channel,hwoff);
          printf("{{other_type}} %p\n", &benchRet); 
          free(runtime);
        
        break;
    }
    // big-arr
    case 1:
    {
          int channel = 255;
          unsigned long hwoff = 255;
          int _len_runtime0 = 65025;
          struct snd_pcm_runtime * runtime = (struct snd_pcm_runtime *) malloc(_len_runtime0*sizeof(struct snd_pcm_runtime));
          for(int _i0 = 0; _i0 < _len_runtime0; _i0++) {
            runtime[_i0].dma_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        runtime[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = get_dma_ptr(runtime,channel,hwoff);
          printf("{{other_type}} %p\n", &benchRet); 
          free(runtime);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int channel = 10;
          unsigned long hwoff = 10;
          int _len_runtime0 = 100;
          struct snd_pcm_runtime * runtime = (struct snd_pcm_runtime *) malloc(_len_runtime0*sizeof(struct snd_pcm_runtime));
          for(int _i0 = 0; _i0 < _len_runtime0; _i0++) {
            runtime[_i0].dma_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        runtime[_i0].channels = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * benchRet = get_dma_ptr(runtime,channel,hwoff);
          printf("{{other_type}} %p\n", &benchRet); 
          free(runtime);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
