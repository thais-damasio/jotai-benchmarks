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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct vpfe_pipeline {int input_num; int output_num; TYPE_1__** outputs; TYPE_2__** inputs; } ;
struct TYPE_4__ {scalar_t__ state; int /*<<< orphan*/  started; } ;
struct TYPE_3__ {scalar_t__ state; int /*<<< orphan*/  started; } ;

/* Variables and functions */
 scalar_t__ VPFE_VIDEO_BUFFER_QUEUED ; 

int vpfe_video_is_pipe_ready(struct vpfe_pipeline *pipe)
{
	int i;

	for (i = 0; i < pipe->input_num; i++)
		if (!pipe->inputs[i]->started ||
			pipe->inputs[i]->state != VPFE_VIDEO_BUFFER_QUEUED)
			return 0;
	for (i = 0; i < pipe->output_num; i++)
		if (!pipe->outputs[i]->started ||
			pipe->outputs[i]->state != VPFE_VIDEO_BUFFER_QUEUED)
			return 0;
	return 1;
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
          int _len_pipe0 = 1;
          struct vpfe_pipeline * pipe = (struct vpfe_pipeline *) malloc(_len_pipe0*sizeof(struct vpfe_pipeline));
          for(int _i0 = 0; _i0 < _len_pipe0; _i0++) {
            pipe[_i0].input_num = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe[_i0].output_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pipe__i0__outputs0 = 1;
          pipe[_i0].outputs = (struct TYPE_3__ **) malloc(_len_pipe__i0__outputs0*sizeof(struct TYPE_3__ *));
          for(int _j0 = 0; _j0 < _len_pipe__i0__outputs0; _j0++) {
            int _len_pipe__i0__outputs1 = 1;
            pipe[_i0].outputs[_j0] = (struct TYPE_3__ *) malloc(_len_pipe__i0__outputs1*sizeof(struct TYPE_3__));
            for(int _j1 = 0; _j1 < _len_pipe__i0__outputs1; _j1++) {
              pipe[_i0].outputs[_j0]->state = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe[_i0].outputs[_j0]->started = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_pipe__i0__inputs0 = 1;
          pipe[_i0].inputs = (struct TYPE_4__ **) malloc(_len_pipe__i0__inputs0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_pipe__i0__inputs0; _j0++) {
            int _len_pipe__i0__inputs1 = 1;
            pipe[_i0].inputs[_j0] = (struct TYPE_4__ *) malloc(_len_pipe__i0__inputs1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_pipe__i0__inputs1; _j1++) {
              pipe[_i0].inputs[_j0]->state = ((-2 * (next_i()%2)) + 1) * next_i();
        pipe[_i0].inputs[_j0]->started = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = vpfe_video_is_pipe_ready(pipe);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_pipe0; _aux++) {
          free(*(pipe[_aux].outputs));
        free(pipe[_aux].outputs);
          }
          for(int _aux = 0; _aux < _len_pipe0; _aux++) {
          free(*(pipe[_aux].inputs));
        free(pipe[_aux].inputs);
          }
          free(pipe);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
