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
       1            big-arr\n\
       2            big-arr-10x\n\
       3            linked\n\
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
struct task_smack {int /*<<< orphan*/  smk_forked; int /*<<< orphan*/  smk_task; } ;
struct inode_smack {int /*<<< orphan*/  smk_inode; } ;
struct inode {struct inode_smack* i_security; } ;
struct cred {struct task_smack* security; } ;

/* Variables and functions */

__attribute__((used)) static int smack_kernel_create_files_as(struct cred *new,
					struct inode *inode)
{
	struct inode_smack *isp = inode->i_security;
	struct task_smack *tsp = new->security;

	tsp->smk_forked = isp->smk_inode;
	tsp->smk_task = tsp->smk_forked;
	return 0;
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
          int _len_new0 = 1;
          struct cred * new = (struct cred *) malloc(_len_new0*sizeof(struct cred));
          for(int _i0 = 0; _i0 < _len_new0; _i0++) {
              int _len_new__i0__security0 = 1;
          new[_i0].security = (struct task_smack *) malloc(_len_new__i0__security0*sizeof(struct task_smack));
          for(int _j0 = 0; _j0 < _len_new__i0__security0; _j0++) {
            new[_i0].security->smk_forked = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].security->smk_task = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_inode0 = 1;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
              int _len_inode__i0__i_security0 = 1;
          inode[_i0].i_security = (struct inode_smack *) malloc(_len_inode__i0__i_security0*sizeof(struct inode_smack));
          for(int _j0 = 0; _j0 < _len_inode__i0__i_security0; _j0++) {
            inode[_i0].i_security->smk_inode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = smack_kernel_create_files_as(new,inode);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_new0; _aux++) {
          free(new[_aux].security);
          }
          free(new);
          for(int _aux = 0; _aux < _len_inode0; _aux++) {
          free(inode[_aux].i_security);
          }
          free(inode);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_new0 = 65025;
          struct cred * new = (struct cred *) malloc(_len_new0*sizeof(struct cred));
          for(int _i0 = 0; _i0 < _len_new0; _i0++) {
              int _len_new__i0__security0 = 1;
          new[_i0].security = (struct task_smack *) malloc(_len_new__i0__security0*sizeof(struct task_smack));
          for(int _j0 = 0; _j0 < _len_new__i0__security0; _j0++) {
            new[_i0].security->smk_forked = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].security->smk_task = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_inode0 = 65025;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
              int _len_inode__i0__i_security0 = 1;
          inode[_i0].i_security = (struct inode_smack *) malloc(_len_inode__i0__i_security0*sizeof(struct inode_smack));
          for(int _j0 = 0; _j0 < _len_inode__i0__i_security0; _j0++) {
            inode[_i0].i_security->smk_inode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = smack_kernel_create_files_as(new,inode);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_new0; _aux++) {
          free(new[_aux].security);
          }
          free(new);
          for(int _aux = 0; _aux < _len_inode0; _aux++) {
          free(inode[_aux].i_security);
          }
          free(inode);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_new0 = 100;
          struct cred * new = (struct cred *) malloc(_len_new0*sizeof(struct cred));
          for(int _i0 = 0; _i0 < _len_new0; _i0++) {
              int _len_new__i0__security0 = 1;
          new[_i0].security = (struct task_smack *) malloc(_len_new__i0__security0*sizeof(struct task_smack));
          for(int _j0 = 0; _j0 < _len_new__i0__security0; _j0++) {
            new[_i0].security->smk_forked = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].security->smk_task = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_inode0 = 100;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
              int _len_inode__i0__i_security0 = 1;
          inode[_i0].i_security = (struct inode_smack *) malloc(_len_inode__i0__i_security0*sizeof(struct inode_smack));
          for(int _j0 = 0; _j0 < _len_inode__i0__i_security0; _j0++) {
            inode[_i0].i_security->smk_inode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = smack_kernel_create_files_as(new,inode);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_new0; _aux++) {
          free(new[_aux].security);
          }
          free(new);
          for(int _aux = 0; _aux < _len_inode0; _aux++) {
          free(inode[_aux].i_security);
          }
          free(inode);
        
        break;
    }
    // linked
    case 3:
    {
          int _len_new0 = 1;
          struct cred * new = (struct cred *) malloc(_len_new0*sizeof(struct cred));
          for(int _i0 = 0; _i0 < _len_new0; _i0++) {
              int _len_new__i0__security0 = 1;
          new[_i0].security = (struct task_smack *) malloc(_len_new__i0__security0*sizeof(struct task_smack));
          for(int _j0 = 0; _j0 < _len_new__i0__security0; _j0++) {
            new[_i0].security->smk_forked = ((-2 * (next_i()%2)) + 1) * next_i();
        new[_i0].security->smk_task = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_inode0 = 1;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
              int _len_inode__i0__i_security0 = 1;
          inode[_i0].i_security = (struct inode_smack *) malloc(_len_inode__i0__i_security0*sizeof(struct inode_smack));
          for(int _j0 = 0; _j0 < _len_inode__i0__i_security0; _j0++) {
            inode[_i0].i_security->smk_inode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = smack_kernel_create_files_as(new,inode);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_new0; _aux++) {
          free(new[_aux].security);
          }
          free(new);
          for(int _aux = 0; _aux < _len_inode0; _aux++) {
          free(inode[_aux].i_security);
          }
          free(inode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}