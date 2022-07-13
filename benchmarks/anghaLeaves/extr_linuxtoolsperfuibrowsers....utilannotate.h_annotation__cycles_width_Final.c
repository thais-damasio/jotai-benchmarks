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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct annotation {scalar_t__ have_cycles; TYPE_1__* options; } ;
struct TYPE_2__ {scalar_t__ show_minmax_cycle; } ;

/* Variables and functions */
 int ANNOTATION__CYCLES_WIDTH ; 
 int ANNOTATION__IPC_WIDTH ; 
 int ANNOTATION__MINMAX_CYCLES_WIDTH ; 

__attribute__((used)) static inline int annotation__cycles_width(struct annotation *notes)
{
	if (notes->have_cycles && notes->options->show_minmax_cycle)
		return ANNOTATION__IPC_WIDTH + ANNOTATION__MINMAX_CYCLES_WIDTH;

	return notes->have_cycles ? ANNOTATION__IPC_WIDTH + ANNOTATION__CYCLES_WIDTH : 0;
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
          int _len_notes0 = 1;
          struct annotation * notes = (struct annotation *) malloc(_len_notes0*sizeof(struct annotation));
          for(int _i0 = 0; _i0 < _len_notes0; _i0++) {
            notes[_i0].have_cycles = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_notes__i0__options0 = 1;
          notes[_i0].options = (struct TYPE_2__ *) malloc(_len_notes__i0__options0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_notes__i0__options0; _j0++) {
            notes[_i0].options->show_minmax_cycle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = annotation__cycles_width(notes);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_notes0; _aux++) {
          free(notes[_aux].options);
          }
          free(notes);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_notes0 = 65025;
          struct annotation * notes = (struct annotation *) malloc(_len_notes0*sizeof(struct annotation));
          for(int _i0 = 0; _i0 < _len_notes0; _i0++) {
            notes[_i0].have_cycles = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_notes__i0__options0 = 1;
          notes[_i0].options = (struct TYPE_2__ *) malloc(_len_notes__i0__options0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_notes__i0__options0; _j0++) {
            notes[_i0].options->show_minmax_cycle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = annotation__cycles_width(notes);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_notes0; _aux++) {
          free(notes[_aux].options);
          }
          free(notes);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_notes0 = 100;
          struct annotation * notes = (struct annotation *) malloc(_len_notes0*sizeof(struct annotation));
          for(int _i0 = 0; _i0 < _len_notes0; _i0++) {
            notes[_i0].have_cycles = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_notes__i0__options0 = 1;
          notes[_i0].options = (struct TYPE_2__ *) malloc(_len_notes__i0__options0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_notes__i0__options0; _j0++) {
            notes[_i0].options->show_minmax_cycle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = annotation__cycles_width(notes);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_notes0; _aux++) {
          free(notes[_aux].options);
          }
          free(notes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
