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

/* Type definitions */
struct bpf_lru_list {int /*<<< orphan*/ * counts; } ;
typedef  enum bpf_lru_list_type { ____Placeholder_bpf_lru_list_type } bpf_lru_list_type ;

/* Variables and functions */
 int NR_BPF_LRU_LIST_COUNT ; 

__attribute__((used)) static void bpf_lru_list_count_inc(struct bpf_lru_list *l,
				   enum bpf_lru_list_type type)
{
	if (type < NR_BPF_LRU_LIST_COUNT)
		l->counts[type]++;
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
          enum bpf_lru_list_type type = 0;
          int _len_l0 = 1;
          struct bpf_lru_list * l = (struct bpf_lru_list *) malloc(_len_l0*sizeof(struct bpf_lru_list));
          for(int _i0 = 0; _i0 < _len_l0; _i0++) {
              int _len_l__i0__counts0 = 1;
          l[_i0].counts = (int *) malloc(_len_l__i0__counts0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_l__i0__counts0; _j0++) {
            l[_i0].counts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bpf_lru_list_count_inc(l,type);
          for(int _aux = 0; _aux < _len_l0; _aux++) {
          free(l[_aux].counts);
          }
          free(l);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
