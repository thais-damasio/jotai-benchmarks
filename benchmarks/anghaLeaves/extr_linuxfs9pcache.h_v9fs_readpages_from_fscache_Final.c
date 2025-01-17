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

/* Type definitions */
struct list_head {int dummy; } ;
struct inode {int dummy; } ;
struct address_space {int dummy; } ;

/* Variables and functions */
 int ENOBUFS ; 

__attribute__((used)) static inline int v9fs_readpages_from_fscache(struct inode *inode,
					      struct address_space *mapping,
					      struct list_head *pages,
					      unsigned *nr_pages)
{
	return -ENOBUFS;
}


// ------------------------------------------------------------------------- //




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
          int _len_inode0 = 1;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
            inode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mapping0 = 1;
          struct address_space * mapping = (struct address_space *) malloc(_len_mapping0*sizeof(struct address_space));
          for(int _i0 = 0; _i0 < _len_mapping0; _i0++) {
            mapping[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pages0 = 1;
          struct list_head * pages = (struct list_head *) malloc(_len_pages0*sizeof(struct list_head));
          for(int _i0 = 0; _i0 < _len_pages0; _i0++) {
            pages[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_nr_pages0 = 1;
          unsigned int * nr_pages = (unsigned int *) malloc(_len_nr_pages0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_nr_pages0; _i0++) {
            nr_pages[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = v9fs_readpages_from_fscache(inode,mapping,pages,nr_pages);
          printf("%d\n", benchRet); 
          free(inode);
          free(mapping);
          free(pages);
          free(nr_pages);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
