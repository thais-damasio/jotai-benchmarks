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
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {scalar_t__ timeOffset; scalar_t__ clampTime; int /*<<< orphan*/  optimalStageIteratorFunc; int /*<<< orphan*/  numUnfoggedPasses; int /*<<< orphan*/  stages; struct TYPE_9__* remappedShader; } ;
typedef  TYPE_3__ shader_t ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {scalar_t__ floatTime; } ;
struct TYPE_11__ {TYPE_2__ viewParms; TYPE_1__ refdef; } ;
struct TYPE_10__ {int fogNum; int cubemapIndex; scalar_t__ shaderTime; int /*<<< orphan*/  currentStageIteratorFunc; TYPE_3__* shader; int /*<<< orphan*/  useCacheVao; int /*<<< orphan*/  useInternalVao; int /*<<< orphan*/  numPasses; int /*<<< orphan*/  xstages; scalar_t__ pshadowBits; scalar_t__ dlightBits; scalar_t__ numVertexes; scalar_t__ firstIndex; scalar_t__ numIndexes; } ;

/* Variables and functions */
 int /*<<< orphan*/  RB_StageIteratorGeneric ; 
 int VPF_SHADOWMAP ; 
 TYPE_5__ backEnd ; 
 int /*<<< orphan*/  qfalse ; 
 int /*<<< orphan*/  qtrue ; 
 TYPE_4__ tess ; 

void RB_BeginSurface( shader_t *shader, int fogNum, int cubemapIndex ) {

	shader_t *state = (shader->remappedShader) ? shader->remappedShader : shader;

	tess.numIndexes = 0;
	tess.firstIndex = 0;
	tess.numVertexes = 0;
	tess.shader = state;
	tess.fogNum = fogNum;
	tess.cubemapIndex = cubemapIndex;
	tess.dlightBits = 0;		// will be OR'd in by surface functions
	tess.pshadowBits = 0;       // will be OR'd in by surface functions
	tess.xstages = state->stages;
	tess.numPasses = state->numUnfoggedPasses;
	tess.currentStageIteratorFunc = state->optimalStageIteratorFunc;
	tess.useInternalVao = qtrue;
	tess.useCacheVao = qfalse;

	tess.shaderTime = backEnd.refdef.floatTime - tess.shader->timeOffset;
	if (tess.shader->clampTime && tess.shaderTime >= tess.shader->clampTime) {
		tess.shaderTime = tess.shader->clampTime;
	}

	if (backEnd.viewParms.flags & VPF_SHADOWMAP)
	{
		tess.currentStageIteratorFunc = RB_StageIteratorGeneric;
	}
}


// ------------------------------------------------------------------------- //

struct TYPE_9__ *_allocate_shader(int length) {
  struct TYPE_9__ *head = (struct TYPE_9__ *)malloc(sizeof(struct TYPE_9__));

  head->timeOffset = rand();
  head->clampTime = rand();
  head->optimalStageIteratorFunc = rand();
  head->numUnfoggedPasses = rand();
  head->stages = rand();
  head->remappedShader = NULL;

  struct TYPE_9__ *walker = head;
  for(int i = 1; i < length; i++) {
    walker->remappedShader = (struct TYPE_9__ *)malloc(sizeof(struct TYPE_9__));
    walker = walker->remappedShader;
    walker->timeOffset = rand();
    walker->clampTime = rand();
    walker->optimalStageIteratorFunc = rand();
    walker->numUnfoggedPasses = rand();
    walker->stages = rand();
    walker->remappedShader = NULL;
  }

  return head;
}

void _delete_shader(struct TYPE_9__ * head) {
  if(head->remappedShader != NULL) _delete_shader(head->remappedShader);
  free(head);
}




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
          int fogNum = 255;
          int cubemapIndex = 255;
          struct TYPE_9__ * shader = _allocate_shader(1);
          RB_BeginSurface(shader,fogNum,cubemapIndex);
          _delete_shader(shader);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
