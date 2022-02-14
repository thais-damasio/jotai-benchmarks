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
typedef  int /*<<< orphan*/  trie_node_t ;
struct TYPE_3__ {int x; int /*<<< orphan*/ * data; struct TYPE_3__* right; struct TYPE_3__* left; } ;
typedef  TYPE_1__ tree_t ;

/* Variables and functions */

trie_node_t *tree_find_sk (tree_t *V, int x) {
  while (V && V->x != x) {
    V = (V->x > x ? V->left : V->right);
  }
  return V ? V->data : 0;
}


// ------------------------------------------------------------------------- //

struct TYPE_3__ *_allocate_V(int length) {
  struct TYPE_3__ *head = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));

  head->x = rand();
  head->data = rand();
  head->right = NULL;
  head->left = NULL;

  struct TYPE_3__ *walker = head;
  for(int i = 1; i < length; i++) {
    walker->right = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->right;
    walker->left = (struct TYPE_3__ *)malloc(sizeof(struct TYPE_3__));
    walker = walker->left;
    walker->x = rand();
    walker->data = rand();
    walker->right = NULL;
    walker->left = NULL;
  }

  return head;
}

void _delete_V(struct TYPE_3__ * head) {
  if(head->right != NULL) _delete_V(head->right);
  if(head->left != NULL) _delete_V(head->left);
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
          int x = 255;
          struct TYPE_3__ * V = _allocate_V(1);
          int * benchRet = tree_find_sk(V,x);
          printf("{{other_type}} %p\n", &benchRet); 
          _delete_V(V);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}