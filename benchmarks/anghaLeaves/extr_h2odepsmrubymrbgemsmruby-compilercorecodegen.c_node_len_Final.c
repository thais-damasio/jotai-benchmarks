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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {struct TYPE_3__* cdr; } ;
typedef  TYPE_1__ node ;

/* Variables and functions */

__attribute__((used)) static int
node_len(node *tree)
{
  int n = 0;

  while (tree) {
    n++;
    tree = tree->cdr;
  }
  return n;
}


// ------------------------------------------------------------------------- //

struct TYPE_3__ *_allocate_tree(int length, struct TYPE_3__ *aux_tree[]) {
  struct TYPE_3__ *walker = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  aux_tree[0] = walker;
  walker->cdr = NULL;

  struct TYPE_3__ *head = walker;
  for(int i = 1; i < length; i++) {
    walker->cdr = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->cdr;
    aux_tree[i] = walker;
    walker->cdr = NULL;
  }

  return head;
}

void _delete_tree(struct TYPE_3__ *aux_tree[], int aux_tree_size) {
  for(int i = 0; i < aux_tree_size; i++) 
    if(aux_tree[i])
      free(aux_tree[i]);
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
          struct TYPE_3__ * aux_tree[1];
          struct TYPE_3__ * tree = _allocate_tree(1, aux_tree);
          int benchRet = node_len(tree);
          printf("%d\n", benchRet); 
          _delete_tree(aux_tree, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
