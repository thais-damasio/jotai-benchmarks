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
       1            big-arr-10x\n\
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

/* Type definitions */
struct hda_codec {int dummy; } ;
typedef  int /*<<< orphan*/  hda_nid_t ;

/* Variables and functions */

__attribute__((used)) static void hdmi_debug_dip_size(struct hda_codec *codec, hda_nid_t pin_nid)
{
#ifdef CONFIG_SND_DEBUG_VERBOSE
	int i;
	int size;

	size = snd_hdmi_get_eld_size(codec, pin_nid);
	codec_dbg(codec, "HDMI: ELD buf size is %d\n", size);

	for (i = 0; i < 8; i++) {
		size = snd_hda_codec_read(codec, pin_nid, 0,
						AC_VERB_GET_HDMI_DIP_SIZE, i);
		codec_dbg(codec, "HDMI: DIP GP[%d] buf size is %d\n", i, size);
	}
#endif
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
          int pin_nid = 100;
          int _len_codec0 = 1;
          struct hda_codec * codec = (struct hda_codec *) malloc(_len_codec0*sizeof(struct hda_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
            codec[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hdmi_debug_dip_size(codec,pin_nid);
          free(codec);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int pin_nid = 10;
          int _len_codec0 = 100;
          struct hda_codec * codec = (struct hda_codec *) malloc(_len_codec0*sizeof(struct hda_codec));
          for(int _i0 = 0; _i0 < _len_codec0; _i0++) {
            codec[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hdmi_debug_dip_size(codec,pin_nid);
          free(codec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
