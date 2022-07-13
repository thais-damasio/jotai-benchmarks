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
struct si_mode_info {int simr_crt; scalar_t__ simr_rfsd; } ;
struct ucc_tdm_info {struct si_mode_info si_info; } ;
struct ucc_tdm {scalar_t__ tdm_mode; } ;

/* Variables and functions */
 scalar_t__ TDM_INTERNAL_LOOPBACK ; 

__attribute__((used)) static void set_si_param(struct ucc_tdm *utdm, struct ucc_tdm_info *ut_info)
{
	struct si_mode_info *si_info = &ut_info->si_info;

	if (utdm->tdm_mode == TDM_INTERNAL_LOOPBACK) {
		si_info->simr_crt = 1;
		si_info->simr_rfsd = 0;
	}
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
          int _len_utdm0 = 1;
          struct ucc_tdm * utdm = (struct ucc_tdm *) malloc(_len_utdm0*sizeof(struct ucc_tdm));
          for(int _i0 = 0; _i0 < _len_utdm0; _i0++) {
            utdm[_i0].tdm_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ut_info0 = 1;
          struct ucc_tdm_info * ut_info = (struct ucc_tdm_info *) malloc(_len_ut_info0*sizeof(struct ucc_tdm_info));
          for(int _i0 = 0; _i0 < _len_ut_info0; _i0++) {
            ut_info[_i0].si_info.simr_crt = ((-2 * (next_i()%2)) + 1) * next_i();
        ut_info[_i0].si_info.simr_rfsd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_si_param(utdm,ut_info);
          free(utdm);
          free(ut_info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_utdm0 = 65025;
          struct ucc_tdm * utdm = (struct ucc_tdm *) malloc(_len_utdm0*sizeof(struct ucc_tdm));
          for(int _i0 = 0; _i0 < _len_utdm0; _i0++) {
            utdm[_i0].tdm_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ut_info0 = 65025;
          struct ucc_tdm_info * ut_info = (struct ucc_tdm_info *) malloc(_len_ut_info0*sizeof(struct ucc_tdm_info));
          for(int _i0 = 0; _i0 < _len_ut_info0; _i0++) {
            ut_info[_i0].si_info.simr_crt = ((-2 * (next_i()%2)) + 1) * next_i();
        ut_info[_i0].si_info.simr_rfsd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_si_param(utdm,ut_info);
          free(utdm);
          free(ut_info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_utdm0 = 100;
          struct ucc_tdm * utdm = (struct ucc_tdm *) malloc(_len_utdm0*sizeof(struct ucc_tdm));
          for(int _i0 = 0; _i0 < _len_utdm0; _i0++) {
            utdm[_i0].tdm_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ut_info0 = 100;
          struct ucc_tdm_info * ut_info = (struct ucc_tdm_info *) malloc(_len_ut_info0*sizeof(struct ucc_tdm_info));
          for(int _i0 = 0; _i0 < _len_ut_info0; _i0++) {
            ut_info[_i0].si_info.simr_crt = ((-2 * (next_i()%2)) + 1) * next_i();
        ut_info[_i0].si_info.simr_rfsd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          set_si_param(utdm,ut_info);
          free(utdm);
          free(ut_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
