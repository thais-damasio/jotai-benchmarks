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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int /*<<< orphan*/  ids; int /*<<< orphan*/  count; } ;
typedef  TYPE_1__ git_oidarray ;
struct TYPE_6__ {int /*<<< orphan*/  ptr; int /*<<< orphan*/  size; } ;
typedef  TYPE_2__ git_array_oid_t ;

/* Variables and functions */

void git_oidarray__from_array(git_oidarray *arr, git_array_oid_t *array)
{
	arr->count = array->size;
	arr->ids = array->ptr;
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
          int _len_arr0 = 1;
          struct TYPE_5__ * arr = (struct TYPE_5__ *) malloc(_len_arr0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_arr0; _i0++) {
            arr[_i0].ids = ((-2 * (next_i()%2)) + 1) * next_i();
        arr[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_array0 = 1;
          struct TYPE_6__ * array = (struct TYPE_6__ *) malloc(_len_array0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_array0; _i0++) {
            array[_i0].ptr = ((-2 * (next_i()%2)) + 1) * next_i();
        array[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          git_oidarray__from_array(arr,array);
          free(arr);
          free(array);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
