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
struct ath10k {int vht_cap_info; } ;

/* Variables and functions */
 int IEEE80211_VHT_CAP_SOUNDING_DIMENSIONS_MASK ; 
 int IEEE80211_VHT_CAP_SOUNDING_DIMENSIONS_SHIFT ; 

__attribute__((used)) static int ath10k_mac_get_vht_cap_bf_sound_dim(struct ath10k *ar)
{
	int sound_dim = ar->vht_cap_info;

	sound_dim &= IEEE80211_VHT_CAP_SOUNDING_DIMENSIONS_MASK;
	sound_dim >>= IEEE80211_VHT_CAP_SOUNDING_DIMENSIONS_SHIFT;

	/* If the sounding dimension is not advertised by the firmware,
	 * let's use a default value of 1
	 */
	if (sound_dim == 0)
		return 1;

	return sound_dim;
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
          int _len_ar0 = 1;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].vht_cap_info = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath10k_mac_get_vht_cap_bf_sound_dim(ar);
          printf("%d\n", benchRet); 
          free(ar);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ar0 = 65025;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].vht_cap_info = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath10k_mac_get_vht_cap_bf_sound_dim(ar);
          printf("%d\n", benchRet); 
          free(ar);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ar0 = 100;
          struct ath10k * ar = (struct ath10k *) malloc(_len_ar0*sizeof(struct ath10k));
          for(int _i0 = 0; _i0 < _len_ar0; _i0++) {
            ar[_i0].vht_cap_info = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ath10k_mac_get_vht_cap_bf_sound_dim(ar);
          printf("%d\n", benchRet); 
          free(ar);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
