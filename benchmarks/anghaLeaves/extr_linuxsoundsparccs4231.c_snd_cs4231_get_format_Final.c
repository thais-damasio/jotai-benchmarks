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
struct snd_cs4231 {int dummy; } ;

/* Variables and functions */
 unsigned char CS4231_ADPCM_16 ; 
 unsigned char CS4231_ALAW_8 ; 
 unsigned char CS4231_LINEAR_16 ; 
 unsigned char CS4231_LINEAR_16_BIG ; 
 unsigned char CS4231_LINEAR_8 ; 
 unsigned char CS4231_STEREO ; 
 unsigned char CS4231_ULAW_8 ; 
#define  SNDRV_PCM_FORMAT_A_LAW 132 
#define  SNDRV_PCM_FORMAT_IMA_ADPCM 131 
#define  SNDRV_PCM_FORMAT_MU_LAW 130 
#define  SNDRV_PCM_FORMAT_S16_BE 129 
#define  SNDRV_PCM_FORMAT_S16_LE 128 

__attribute__((used)) static unsigned char snd_cs4231_get_format(struct snd_cs4231 *chip, int format,
					   int channels)
{
	unsigned char rformat;

	rformat = CS4231_LINEAR_8;
	switch (format) {
	case SNDRV_PCM_FORMAT_MU_LAW:
		rformat = CS4231_ULAW_8;
		break;
	case SNDRV_PCM_FORMAT_A_LAW:
		rformat = CS4231_ALAW_8;
		break;
	case SNDRV_PCM_FORMAT_S16_LE:
		rformat = CS4231_LINEAR_16;
		break;
	case SNDRV_PCM_FORMAT_S16_BE:
		rformat = CS4231_LINEAR_16_BIG;
		break;
	case SNDRV_PCM_FORMAT_IMA_ADPCM:
		rformat = CS4231_ADPCM_16;
		break;
	}
	if (channels > 1)
		rformat |= CS4231_STEREO;
	return rformat;
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
          int channels = 100;
          int _len_chip0 = 1;
          struct snd_cs4231 * chip = (struct snd_cs4231 *) malloc(_len_chip0*sizeof(struct snd_cs4231));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = snd_cs4231_get_format(chip,format,channels);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(chip);
        
        break;
    }
    // big-arr
    case 1:
    {
          int format = 255;
          int channels = 255;
          int _len_chip0 = 65025;
          struct snd_cs4231 * chip = (struct snd_cs4231 *) malloc(_len_chip0*sizeof(struct snd_cs4231));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = snd_cs4231_get_format(chip,format,channels);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(chip);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int format = 10;
          int channels = 10;
          int _len_chip0 = 100;
          struct snd_cs4231 * chip = (struct snd_cs4231 *) malloc(_len_chip0*sizeof(struct snd_cs4231));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = snd_cs4231_get_format(chip,format,channels);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
