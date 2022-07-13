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
struct dentry {struct dentry* d_fsdata; } ;

/* Variables and functions */
 struct dentry* hypfs_last_dentry ; 

__attribute__((used)) static void hypfs_add_dentry(struct dentry *dentry)
{
	dentry->d_fsdata = hypfs_last_dentry;
	hypfs_last_dentry = dentry;
}


// ------------------------------------------------------------------------- //

struct dentry *_allocate_dentry(int length, struct dentry *aux_dentry[]) {
  struct dentry *walker = (struct dentry *)malloc(sizeof(struct dentry));

  aux_dentry[0] = walker;
  walker->d_fsdata = NULL;

  struct dentry *head = walker;
  for(int i = 1; i < length; i++) {
    walker->d_fsdata = (struct dentry *)malloc(sizeof(struct dentry));
    walker = walker->d_fsdata;
    aux_dentry[i] = walker;
    walker->d_fsdata = NULL;
  }

  return head;
}

void _delete_dentry(struct dentry *aux_dentry[], int aux_dentry_size) {
  for(int i = 0; i < aux_dentry_size; i++) 
    if(aux_dentry[i])
      free(aux_dentry[i]);
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
          struct dentry * aux_dentry[1];
          struct dentry * dentry = _allocate_dentry(1, aux_dentry);
          hypfs_add_dentry(dentry);
          _delete_dentry(aux_dentry, 1);
        
        break;
    }
    // linked
    case 1:
    {
          struct dentry * aux_dentry[10000];
          struct dentry * dentry = _allocate_dentry(10000, aux_dentry);
          hypfs_add_dentry(dentry);
          _delete_dentry(aux_dentry, 10000);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
