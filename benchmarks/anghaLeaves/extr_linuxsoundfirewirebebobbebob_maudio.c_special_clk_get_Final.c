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
struct special_params {unsigned int clk_src; } ;
struct snd_bebob {struct special_params* maudio_special_quirk; } ;

/* Variables and functions */

__attribute__((used)) static int special_clk_get(struct snd_bebob *bebob, unsigned int *id)
{
	struct special_params *params = bebob->maudio_special_quirk;
	*id = params->clk_src;
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
          int _len_bebob0 = 1;
          struct snd_bebob * bebob = (struct snd_bebob *) malloc(_len_bebob0*sizeof(struct snd_bebob));
          for(int _i0 = 0; _i0 < _len_bebob0; _i0++) {
              int _len_bebob__i0__maudio_special_quirk0 = 1;
          bebob[_i0].maudio_special_quirk = (struct special_params *) malloc(_len_bebob__i0__maudio_special_quirk0*sizeof(struct special_params));
          for(int _j0 = 0; _j0 < _len_bebob__i0__maudio_special_quirk0; _j0++) {
            bebob[_i0].maudio_special_quirk->clk_src = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_id0 = 1;
          unsigned int * id = (unsigned int *) malloc(_len_id0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = special_clk_get(bebob,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bebob0; _aux++) {
          free(bebob[_aux].maudio_special_quirk);
          }
          free(bebob);
          free(id);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bebob0 = 65025;
          struct snd_bebob * bebob = (struct snd_bebob *) malloc(_len_bebob0*sizeof(struct snd_bebob));
          for(int _i0 = 0; _i0 < _len_bebob0; _i0++) {
              int _len_bebob__i0__maudio_special_quirk0 = 1;
          bebob[_i0].maudio_special_quirk = (struct special_params *) malloc(_len_bebob__i0__maudio_special_quirk0*sizeof(struct special_params));
          for(int _j0 = 0; _j0 < _len_bebob__i0__maudio_special_quirk0; _j0++) {
            bebob[_i0].maudio_special_quirk->clk_src = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_id0 = 65025;
          unsigned int * id = (unsigned int *) malloc(_len_id0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = special_clk_get(bebob,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bebob0; _aux++) {
          free(bebob[_aux].maudio_special_quirk);
          }
          free(bebob);
          free(id);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bebob0 = 100;
          struct snd_bebob * bebob = (struct snd_bebob *) malloc(_len_bebob0*sizeof(struct snd_bebob));
          for(int _i0 = 0; _i0 < _len_bebob0; _i0++) {
              int _len_bebob__i0__maudio_special_quirk0 = 1;
          bebob[_i0].maudio_special_quirk = (struct special_params *) malloc(_len_bebob__i0__maudio_special_quirk0*sizeof(struct special_params));
          for(int _j0 = 0; _j0 < _len_bebob__i0__maudio_special_quirk0; _j0++) {
            bebob[_i0].maudio_special_quirk->clk_src = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_id0 = 100;
          unsigned int * id = (unsigned int *) malloc(_len_id0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = special_clk_get(bebob,id);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_bebob0; _aux++) {
          free(bebob[_aux].maudio_special_quirk);
          }
          free(bebob);
          free(id);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
