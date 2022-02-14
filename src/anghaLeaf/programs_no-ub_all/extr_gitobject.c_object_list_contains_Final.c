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
struct object_list {struct object_list* next; struct object* item; } ;
struct object {int dummy; } ;

/* Variables and functions */

int object_list_contains(struct object_list *list, struct object *obj)
{
	while (list) {
		if (list->item == obj)
			return 1;
		list = list->next;
	}
	return 0;
}


// ------------------------------------------------------------------------- //

struct object_list *_allocate_list(int length) {
  struct object_list *head = (struct object_list *)malloc(sizeof(struct object_list));

  head->next = NULL;
  head->item = rand();

  struct object_list *walker = head;
  for(int i = 1; i < length; i++) {
    walker->next = (struct object_list *)malloc(sizeof(struct object_list));
    walker = walker->next;
    walker->next = NULL;
    walker->item = rand();
  }

  return head;
}

void _delete_list(struct object_list * head) {
  if(head->next != NULL) _delete_list(head->next);
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
          struct object_list * list = _allocate_list(1);
          int _len_obj0 = 1;
          struct object * obj = (struct object *) malloc(_len_obj0*sizeof(struct object));
          for(int _i0 = 0; _i0 < _len_obj0; _i0++) {
            obj->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = object_list_contains(list,obj);
          printf("%d\n", benchRet); 
          _delete_list(list);
          free(obj);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}