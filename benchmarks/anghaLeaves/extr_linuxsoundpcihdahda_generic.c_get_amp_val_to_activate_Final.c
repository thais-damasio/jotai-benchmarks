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
struct hda_codec {int dummy; } ;
typedef  int /*<<< orphan*/  hda_nid_t ;

/* Variables and functions */
 unsigned int AC_AMPCAP_MIN_MUTE ; 
 unsigned int AC_AMPCAP_MUTE ; 
 unsigned int AC_AMPCAP_NUM_STEPS ; 
 unsigned int AC_AMPCAP_OFFSET ; 
 unsigned int AC_AMPCAP_OFFSET_SHIFT ; 
 unsigned int HDA_AMP_MUTE ; 

__attribute__((used)) static int get_amp_val_to_activate(struct hda_codec *codec, hda_nid_t nid,
				   int dir, unsigned int caps, bool enable)
{
	unsigned int val = 0;

	if (caps & AC_AMPCAP_NUM_STEPS) {
		/* set to 0dB */
		if (enable)
			val = (caps & AC_AMPCAP_OFFSET) >> AC_AMPCAP_OFFSET_SHIFT;
	}
	if (caps & (AC_AMPCAP_MUTE | AC_AMPCAP_MIN_MUTE)) {
		if (!enable)
			val |= HDA_AMP_MUTE;
	}
	return val;
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
          int nid = 100;
          int dir = 100;
          unsigned int caps = 100;
          int enable = 100;
          int _len_codec0 = 1;
          struct hda_codec * codec = (struct hda_codec *) malloc(_len_codec0*sizeof(struct hda_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
            codec[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_amp_val_to_activate(codec,nid,dir,caps,enable);
          printf("%d\n", benchRet); 
          free(codec);
        
        break;
    }
    // big-arr
    case 1:
    {
          int nid = 255;
          int dir = 255;
          unsigned int caps = 255;
          int enable = 255;
          int _len_codec0 = 65025;
          struct hda_codec * codec = (struct hda_codec *) malloc(_len_codec0*sizeof(struct hda_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
            codec[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_amp_val_to_activate(codec,nid,dir,caps,enable);
          printf("%d\n", benchRet); 
          free(codec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int nid = 10;
          int dir = 10;
          unsigned int caps = 10;
          int enable = 10;
          int _len_codec0 = 100;
          struct hda_codec * codec = (struct hda_codec *) malloc(_len_codec0*sizeof(struct hda_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
            codec[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_amp_val_to_activate(codec,nid,dir,caps,enable);
          printf("%d\n", benchRet); 
          free(codec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
