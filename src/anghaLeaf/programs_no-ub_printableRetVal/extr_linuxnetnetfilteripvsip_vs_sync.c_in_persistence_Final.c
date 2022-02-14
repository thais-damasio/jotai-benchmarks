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
struct ip_vs_conn {int flags; struct ip_vs_conn* control; } ;

/* Variables and functions */
 int IP_VS_CONN_F_TEMPLATE ; 

__attribute__((used)) static inline bool in_persistence(struct ip_vs_conn *cp)
{
	for (cp = cp->control; cp; cp = cp->control) {
		if (cp->flags & IP_VS_CONN_F_TEMPLATE)
			return true;
	}
	return false;
}


// ------------------------------------------------------------------------- //

struct ip_vs_conn *_allocate_cp(int length) {
  struct ip_vs_conn *head = (struct ip_vs_conn *)malloc(sizeof(struct ip_vs_conn));

  head->flags = rand();
  head->control = NULL;

  struct ip_vs_conn *walker = head;
  for(int i = 1; i < length; i++) {
    walker->control = (struct ip_vs_conn *)malloc(sizeof(struct ip_vs_conn));
    walker = walker->control;
    walker->flags = rand();
    walker->control = NULL;
  }

  return head;
}

void _delete_cp(struct ip_vs_conn * head) {
  if(head->control != NULL) _delete_cp(head->control);
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
          struct ip_vs_conn * cp = _allocate_cp(1);
          int benchRet = in_persistence(cp);
          printf("%d\n", benchRet); 
          _delete_cp(cp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
