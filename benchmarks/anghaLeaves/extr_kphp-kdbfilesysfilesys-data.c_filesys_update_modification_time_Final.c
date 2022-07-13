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
struct filesys_directory_node {struct filesys_directory_node* parent; int /*<<< orphan*/  modification_time; } ;

/* Variables and functions */
 int /*<<< orphan*/  now ; 

__attribute__((used)) static void filesys_update_modification_time (struct filesys_directory_node *T) {
  while (T != NULL) {
    T->modification_time = now;
    T = T->parent;
  }
}


// ------------------------------------------------------------------------- //

struct filesys_directory_node *_allocate_T(int length, struct filesys_directory_node *aux_T[]) {
  struct filesys_directory_node *walker = (struct filesys_directory_node *)malloc(sizeof(struct filesys_directory_node));

  aux_T[0] = walker;
  walker->parent = NULL;
walker->modification_time = ((-2 * (next_i()%2)) + 1) * next_i();

  struct filesys_directory_node *head = walker;
  for(int i = 1; i < length; i++) {
    walker->parent = (struct filesys_directory_node *)malloc(sizeof(struct filesys_directory_node));
    walker = walker->parent;
    aux_T[i] = walker;
    walker->parent = NULL;
walker->modification_time = ((-2 * (next_i()%2)) + 1) * next_i();
  }

  return head;
}

void _delete_T(struct filesys_directory_node *aux_T[], int aux_T_size) {
  for(int i = 0; i < aux_T_size; i++) 
    if(aux_T[i])
      free(aux_T[i]);
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
          struct filesys_directory_node * aux_T[1];
          struct filesys_directory_node * T = _allocate_T(1, aux_T);
          filesys_update_modification_time(T);
          _delete_T(aux_T, 1);
        
        break;
    }
    // linked
    case 1:
    {
          struct filesys_directory_node * aux_T[10000];
          struct filesys_directory_node * T = _allocate_T(10000, aux_T);
          filesys_update_modification_time(T);
          _delete_T(aux_T, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
