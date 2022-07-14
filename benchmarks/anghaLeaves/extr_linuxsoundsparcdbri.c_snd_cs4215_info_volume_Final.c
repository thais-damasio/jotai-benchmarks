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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_4__ {int /*<<< orphan*/  max; scalar_t__ min; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_1__ value; int /*<<< orphan*/  type; } ;

/* Variables and functions */
 int /*<<< orphan*/  DBRI_MAX_GAIN ; 
 int /*<<< orphan*/  DBRI_MAX_VOLUME ; 
 scalar_t__ DBRI_PLAY ; 
 int /*<<< orphan*/  SNDRV_CTL_ELEM_TYPE_INTEGER ; 

__attribute__((used)) static int snd_cs4215_info_volume(struct snd_kcontrol *kcontrol,
				  struct snd_ctl_elem_info *uinfo)
{
	uinfo->type = SNDRV_CTL_ELEM_TYPE_INTEGER;
	uinfo->count = 2;
	uinfo->value.integer.min = 0;
	if (kcontrol->private_value == DBRI_PLAY)
		uinfo->value.integer.max = DBRI_MAX_VOLUME;
	else
		uinfo->value.integer.max = DBRI_MAX_GAIN;
	return 0;
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
          int _len_kcontrol0 = 1;
          struct snd_kcontrol * kcontrol = (struct snd_kcontrol *) malloc(_len_kcontrol0*sizeof(struct snd_kcontrol));
          for(int _i0 = 0; _i0 < _len_kcontrol0; _i0++) {
            kcontrol[_i0].private_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_uinfo0 = 1;
          struct snd_ctl_elem_info * uinfo = (struct snd_ctl_elem_info *) malloc(_len_uinfo0*sizeof(struct snd_ctl_elem_info));
          for(int _i0 = 0; _i0 < _len_uinfo0; _i0++) {
            uinfo[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        uinfo[_i0].value.integer.max = ((-2 * (next_i()%2)) + 1) * next_i();
        uinfo[_i0].value.integer.min = ((-2 * (next_i()%2)) + 1) * next_i();
        uinfo[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = snd_cs4215_info_volume(kcontrol,uinfo);
          printf("%d\n", benchRet); 
          free(kcontrol);
          free(uinfo);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_kcontrol0 = 65025;
          struct snd_kcontrol * kcontrol = (struct snd_kcontrol *) malloc(_len_kcontrol0*sizeof(struct snd_kcontrol));
          for(int _i0 = 0; _i0 < _len_kcontrol0; _i0++) {
            kcontrol[_i0].private_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_uinfo0 = 65025;
          struct snd_ctl_elem_info * uinfo = (struct snd_ctl_elem_info *) malloc(_len_uinfo0*sizeof(struct snd_ctl_elem_info));
          for(int _i0 = 0; _i0 < _len_uinfo0; _i0++) {
            uinfo[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        uinfo[_i0].value.integer.max = ((-2 * (next_i()%2)) + 1) * next_i();
        uinfo[_i0].value.integer.min = ((-2 * (next_i()%2)) + 1) * next_i();
        uinfo[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = snd_cs4215_info_volume(kcontrol,uinfo);
          printf("%d\n", benchRet); 
          free(kcontrol);
          free(uinfo);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_kcontrol0 = 100;
          struct snd_kcontrol * kcontrol = (struct snd_kcontrol *) malloc(_len_kcontrol0*sizeof(struct snd_kcontrol));
          for(int _i0 = 0; _i0 < _len_kcontrol0; _i0++) {
            kcontrol[_i0].private_value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_uinfo0 = 100;
          struct snd_ctl_elem_info * uinfo = (struct snd_ctl_elem_info *) malloc(_len_uinfo0*sizeof(struct snd_ctl_elem_info));
          for(int _i0 = 0; _i0 < _len_uinfo0; _i0++) {
            uinfo[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
        uinfo[_i0].value.integer.max = ((-2 * (next_i()%2)) + 1) * next_i();
        uinfo[_i0].value.integer.min = ((-2 * (next_i()%2)) + 1) * next_i();
        uinfo[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = snd_cs4215_info_volume(kcontrol,uinfo);
          printf("%d\n", benchRet); 
          free(kcontrol);
          free(uinfo);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}