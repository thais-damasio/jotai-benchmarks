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
typedef  int /*<<< orphan*/ * posix_spawn_file_actions_t ;
typedef  int /*<<< orphan*/  _psfa_action_t ;
typedef  int /*<<< orphan*/  _posix_spawn_file_actions_t ;

/* Variables and functions */
 int EBADF ; 
 int EINVAL ; 
 int OPEN_MAX ; 

int
posix_spawn_file_actions_addinherit_np(posix_spawn_file_actions_t *file_actions,
		int filedes)
{
	_posix_spawn_file_actions_t *psactsp;
	_psfa_action_t *psfileact;

	if (file_actions == NULL || *file_actions == NULL)
		return (EINVAL);

	psactsp = (_posix_spawn_file_actions_t *)file_actions;
	/* Range check; required by POSIX */
	if (filedes < 0 || filedes >= OPEN_MAX)
		return (EBADF);

#if defined(POSIX_SPAWN_CLOEXEC_DEFAULT)	// TODO: delete this check
	/* If we do not have enough slots, grow the structure */
	if ((*psactsp)->psfa_act_count == (*psactsp)->psfa_act_alloc) {
		/* need to grow file actions structure */
		if (_posix_spawn_file_actions_grow(psactsp))
			return (ENOMEM);
	}

	/*
	 * Allocate next available slot and fill it out
	 */
	psfileact = &(*psactsp)->psfa_act_acts[(*psactsp)->psfa_act_count++];

	psfileact->psfaa_type = PSFA_INHERIT;
	psfileact->psfaa_filedes = filedes;
#endif
	return (0);
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
          int filedes = 255;
          int _len_file_actions0 = 65025;
          int ** file_actions = (int **) malloc(_len_file_actions0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_file_actions0; _i0++) {
            int _len_file_actions1 = 1;
            file_actions[_i0] = (int *) malloc(_len_file_actions1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_file_actions1; _i1++) {
              file_actions[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = posix_spawn_file_actions_addinherit_np(file_actions,filedes);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_file_actions0; i1++) {
            int _len_file_actions1 = 1;
              free(file_actions[i1]);
          }
          free(file_actions);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}