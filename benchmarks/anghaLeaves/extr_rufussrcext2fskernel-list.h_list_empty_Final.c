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
struct list_head {struct list_head* next; } ;

/* Variables and functions */

__attribute__((used)) static __inline__ int list_empty(struct list_head *head)
{
	return head->next == head;
}


// ------------------------------------------------------------------------- //

struct list_head *_allocate_head(int length, struct list_head *aux_head[]) {
  struct list_head *walker = (struct list_head *)malloc(sizeof(struct list_head));

  aux_head[0] = walker;
  walker->next = NULL;

  struct list_head *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct list_head *)malloc(sizeof(struct list_head));
    walker = walker->next;
    aux_head[i] = walker;
    walker->next = NULL;
  }

  return head;
}

void _delete_head(struct list_head *aux_head[], int aux_head_size) {
  for(int i = 0; i < aux_head_size; i++) 
    if(aux_head[i])
      free(aux_head[i]);
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
          struct list_head * aux_head[1];
          struct list_head * head = _allocate_head(1, aux_head);
          int benchRet = list_empty(head);
          printf("%d\n", benchRet); 
          _delete_head(aux_head, 1);
        
        break;
    }
    // linked
    case 1:
    {
          struct list_head * aux_head[10000];
          struct list_head * head = _allocate_head(10000, aux_head);
          int benchRet = list_empty(head);
          printf("%d\n", benchRet); 
          _delete_head(aux_head, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
