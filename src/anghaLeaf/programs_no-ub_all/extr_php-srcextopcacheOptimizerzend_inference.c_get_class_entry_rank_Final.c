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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int ce_flags; struct TYPE_3__* parent; } ;
typedef  TYPE_1__ zend_class_entry ;
typedef  scalar_t__ uint32_t ;

/* Variables and functions */
 int ZEND_ACC_LINKED ; 

__attribute__((used)) static uint32_t get_class_entry_rank(zend_class_entry *ce) {
	uint32_t rank = 0;
	if (ce->ce_flags & ZEND_ACC_LINKED) {
		while (ce->parent) {
			rank++;
			ce = ce->parent;
		}
	}
	return rank;
}


// ------------------------------------------------------------------------- //

struct TYPE_3__ *_allocate_ce(int length) {
  struct TYPE_3__ *head = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  head->ce_flags = rand();
  head->parent = NULL;

  struct TYPE_3__ *walker = head;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->parent;
    walker->ce_flags = rand();
    walker->parent = NULL;
  }

  return head;
}

void _delete_ce(struct TYPE_3__ * head) {
  if(head->parent != NULL) _delete_ce(head->parent);
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
          struct TYPE_3__ * ce = _allocate_ce(1);
          long benchRet = get_class_entry_rank(ce);
          printf("%ld\n", benchRet); 
          _delete_ce(ce);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
