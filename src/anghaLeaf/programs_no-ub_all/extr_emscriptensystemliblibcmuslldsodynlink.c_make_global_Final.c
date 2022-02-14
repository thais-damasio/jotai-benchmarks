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
struct dso {int global; struct dso* next; } ;

/* Variables and functions */

__attribute__((used)) static void make_global(struct dso *p)
{
	for (; p; p=p->next) p->global = 1;
}


// ------------------------------------------------------------------------- //

struct dso *_allocate_p(int length) {
  struct dso *head = (struct dso *)malloc(sizeof(struct dso));

  head->global = rand();
  head->next = NULL;

  struct dso *walker = head;
  for(int i = 1; i < length; i++) {
    walker->next = (struct dso *)malloc(sizeof(struct dso));
    walker = walker->next;
    walker->global = rand();
    walker->next = NULL;
  }

  return head;
}

void _delete_p(struct dso * head) {
  if(head->next != NULL) _delete_p(head->next);
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
          struct dso * p = _allocate_p(1);
          make_global(p);
          _delete_p(p);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}