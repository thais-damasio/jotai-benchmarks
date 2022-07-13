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
struct gcov_node {scalar_t__ num_loaded; struct gcov_info* unloaded_info; struct gcov_info** loaded_info; } ;
struct gcov_info {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static struct gcov_info *get_node_info(struct gcov_node *node)
{
	if (node->num_loaded > 0)
		return node->loaded_info[0];

	return node->unloaded_info;
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
          int _len_node0 = 1;
          struct gcov_node * node = (struct gcov_node *) malloc(_len_node0*sizeof(struct gcov_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].num_loaded = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_node__i0__unloaded_info0 = 1;
          node[_i0].unloaded_info = (struct gcov_info *) malloc(_len_node__i0__unloaded_info0*sizeof(struct gcov_info));
          for(int _j0 = 0; _j0 < _len_node__i0__unloaded_info0; _j0++) {
            node[_i0].unloaded_info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_node__i0__loaded_info0 = 1;
          node[_i0].loaded_info = (struct gcov_info **) malloc(_len_node__i0__loaded_info0*sizeof(struct gcov_info *));
          for(int _j0 = 0; _j0 < _len_node__i0__loaded_info0; _j0++) {
            int _len_node__i0__loaded_info1 = 1;
            node[_i0].loaded_info[_j0] = (struct gcov_info *) malloc(_len_node__i0__loaded_info1*sizeof(struct gcov_info));
            for(int _j1 = 0; _j1 < _len_node__i0__loaded_info1; _j1++) {
              node[_i0].loaded_info[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct gcov_info * benchRet = get_node_info(node);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(node[_aux].unloaded_info);
          }
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(*(node[_aux].loaded_info));
        free(node[_aux].loaded_info);
          }
          free(node);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_node0 = 65025;
          struct gcov_node * node = (struct gcov_node *) malloc(_len_node0*sizeof(struct gcov_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].num_loaded = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_node__i0__unloaded_info0 = 1;
          node[_i0].unloaded_info = (struct gcov_info *) malloc(_len_node__i0__unloaded_info0*sizeof(struct gcov_info));
          for(int _j0 = 0; _j0 < _len_node__i0__unloaded_info0; _j0++) {
            node[_i0].unloaded_info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_node__i0__loaded_info0 = 1;
          node[_i0].loaded_info = (struct gcov_info **) malloc(_len_node__i0__loaded_info0*sizeof(struct gcov_info *));
          for(int _j0 = 0; _j0 < _len_node__i0__loaded_info0; _j0++) {
            int _len_node__i0__loaded_info1 = 1;
            node[_i0].loaded_info[_j0] = (struct gcov_info *) malloc(_len_node__i0__loaded_info1*sizeof(struct gcov_info));
            for(int _j1 = 0; _j1 < _len_node__i0__loaded_info1; _j1++) {
              node[_i0].loaded_info[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct gcov_info * benchRet = get_node_info(node);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(node[_aux].unloaded_info);
          }
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(*(node[_aux].loaded_info));
        free(node[_aux].loaded_info);
          }
          free(node);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_node0 = 100;
          struct gcov_node * node = (struct gcov_node *) malloc(_len_node0*sizeof(struct gcov_node));
          for(int _i0 = 0; _i0 < _len_node0; _i0++) {
            node[_i0].num_loaded = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_node__i0__unloaded_info0 = 1;
          node[_i0].unloaded_info = (struct gcov_info *) malloc(_len_node__i0__unloaded_info0*sizeof(struct gcov_info));
          for(int _j0 = 0; _j0 < _len_node__i0__unloaded_info0; _j0++) {
            node[_i0].unloaded_info->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_node__i0__loaded_info0 = 1;
          node[_i0].loaded_info = (struct gcov_info **) malloc(_len_node__i0__loaded_info0*sizeof(struct gcov_info *));
          for(int _j0 = 0; _j0 < _len_node__i0__loaded_info0; _j0++) {
            int _len_node__i0__loaded_info1 = 1;
            node[_i0].loaded_info[_j0] = (struct gcov_info *) malloc(_len_node__i0__loaded_info1*sizeof(struct gcov_info));
            for(int _j1 = 0; _j1 < _len_node__i0__loaded_info1; _j1++) {
              node[_i0].loaded_info[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          struct gcov_info * benchRet = get_node_info(node);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(node[_aux].unloaded_info);
          }
          for(int _aux = 0; _aux < _len_node0; _aux++) {
          free(*(node[_aux].loaded_info));
        free(node[_aux].loaded_info);
          }
          free(node);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
