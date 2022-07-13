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
       0            big-arr-10x\n\
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
typedef  size_t u16 ;
struct l2cap_seq_list {scalar_t__* list; size_t mask; } ;

/* Variables and functions */
 scalar_t__ L2CAP_SEQ_LIST_CLEAR ; 

__attribute__((used)) static inline bool l2cap_seq_list_contains(struct l2cap_seq_list *seq_list,
					   u16 seq)
{
	/* Constant-time check for list membership */
	return seq_list->list[seq & seq_list->mask] != L2CAP_SEQ_LIST_CLEAR;
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

    // big-arr-10x
    case 0:
    {
          unsigned long seq = 10;
          int _len_seq_list0 = 100;
          struct l2cap_seq_list * seq_list = (struct l2cap_seq_list *) malloc(_len_seq_list0*sizeof(struct l2cap_seq_list));
          for(int _i0 = 0; _i0 < _len_seq_list0; _i0++) {
              int _len_seq_list__i0__list0 = 1;
          seq_list[_i0].list = (long *) malloc(_len_seq_list__i0__list0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_seq_list__i0__list0; _j0++) {
            seq_list[_i0].list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        seq_list[_i0].mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = l2cap_seq_list_contains(seq_list,seq);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_seq_list0; _aux++) {
          free(seq_list[_aux].list);
          }
          free(seq_list);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
