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
struct snd_ad1816a {int dummy; } ;
typedef  int snd_pcm_format_t ;

/* Variables and functions */
 unsigned char AD1816A_FMT_ALAW_8 ; 
 unsigned char AD1816A_FMT_LINEAR_16_BIG ; 
 unsigned char AD1816A_FMT_LINEAR_16_LIT ; 
 unsigned char AD1816A_FMT_LINEAR_8 ; 
 unsigned char AD1816A_FMT_STEREO ; 
 unsigned char AD1816A_FMT_ULAW_8 ; 
#define  SNDRV_PCM_FORMAT_A_LAW 131 
#define  SNDRV_PCM_FORMAT_MU_LAW 130 
#define  SNDRV_PCM_FORMAT_S16_BE 129 
#define  SNDRV_PCM_FORMAT_S16_LE 128 

__attribute__((used)) static unsigned char snd_ad1816a_get_format(struct snd_ad1816a *chip,
					    snd_pcm_format_t format,
					    int channels)
{
	unsigned char retval = AD1816A_FMT_LINEAR_8;

	switch (format) {
	case SNDRV_PCM_FORMAT_MU_LAW:
		retval = AD1816A_FMT_ULAW_8;
		break;
	case SNDRV_PCM_FORMAT_A_LAW:
		retval = AD1816A_FMT_ALAW_8;
		break;
	case SNDRV_PCM_FORMAT_S16_LE:
		retval = AD1816A_FMT_LINEAR_16_LIT;
		break;
	case SNDRV_PCM_FORMAT_S16_BE:
		retval = AD1816A_FMT_LINEAR_16_BIG;
	}
	return (channels > 1) ? (retval | AD1816A_FMT_STEREO) : retval;
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
          int format = 255;
          int channels = 255;
          int _len_chip0 = 1;
          struct snd_ad1816a * chip = (struct snd_ad1816a *) malloc(_len_chip0*sizeof(struct snd_ad1816a));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          unsigned char benchRet = snd_ad1816a_get_format(chip,format,channels);
          printf("%c\n", (benchRet%26)+'a'); 
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}