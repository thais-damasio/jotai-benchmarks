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
       1            linked\n\
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
struct property {struct property* next; } ;

/* Variables and functions */

struct property *reverse_properties(struct property *first)
{
	struct property *p = first;
	struct property *head = NULL;
	struct property *next;

	while (p) {
		next = p->next;
		p->next = head;
		head = p;
		p = next;
	}
	return head;
}


// ------------------------------------------------------------------------- //

struct property *_allocate_first(int length, struct property *aux_first[]) {
  struct property *walker = (struct property *)malloc(sizeof(struct property));

  aux_first[0] = walker;
  walker->next = NULL;

  struct property *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct property *)malloc(sizeof(struct property));
    walker = walker->next;
    aux_first[i] = walker;
    walker->next = NULL;
  }

  return head;
}

void _delete_first(struct property *aux_first[], int aux_first_size) {
  for(int i = 0; i < aux_first_size; i++) 
    if(aux_first[i])
      free(aux_first[i]);
}




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
          struct property * aux_first[1];
          struct property * first = _allocate_first(1, aux_first);
          struct property * benchRet = reverse_properties(first);
          _delete_first(aux_first, 1);
        
        break;
    }
    // linked
    case 1:
    {
          struct property * aux_first[10000];
          struct property * first = _allocate_first(10000, aux_first);
          struct property * benchRet = reverse_properties(first);
          _delete_first(aux_first, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
