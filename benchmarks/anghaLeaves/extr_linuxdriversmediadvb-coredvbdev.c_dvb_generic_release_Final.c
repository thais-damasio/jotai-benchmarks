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
struct inode {int dummy; } ;
struct file {int f_flags; struct dvb_device* private_data; } ;
struct dvb_device {int /*<<< orphan*/  users; int /*<<< orphan*/  writers; int /*<<< orphan*/  readers; } ;

/* Variables and functions */
 int ENODEV ; 
 int O_ACCMODE ; 
 int O_RDONLY ; 

int dvb_generic_release(struct inode *inode, struct file *file)
{
	struct dvb_device *dvbdev = file->private_data;

	if (!dvbdev)
		return -ENODEV;

	if ((file->f_flags & O_ACCMODE) == O_RDONLY) {
		dvbdev->readers++;
	} else {
		dvbdev->writers++;
	}

	dvbdev->users++;
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
          int _len_inode0 = 1;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
            inode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_file0 = 1;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].f_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_file__i0__private_data0 = 1;
          file[_i0].private_data = (struct dvb_device *) malloc(_len_file__i0__private_data0*sizeof(struct dvb_device));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data0; _j0++) {
            file[_i0].private_data->users = ((-2 * (next_i()%2)) + 1) * next_i();
        file[_i0].private_data->writers = ((-2 * (next_i()%2)) + 1) * next_i();
        file[_i0].private_data->readers = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = dvb_generic_release(inode,file);
          printf("%d\n", benchRet); 
          free(inode);
          for(int _aux = 0; _aux < _len_file0; _aux++) {
          free(file[_aux].private_data);
          }
          free(file);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_inode0 = 65025;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
            inode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_file0 = 65025;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].f_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_file__i0__private_data0 = 1;
          file[_i0].private_data = (struct dvb_device *) malloc(_len_file__i0__private_data0*sizeof(struct dvb_device));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data0; _j0++) {
            file[_i0].private_data->users = ((-2 * (next_i()%2)) + 1) * next_i();
        file[_i0].private_data->writers = ((-2 * (next_i()%2)) + 1) * next_i();
        file[_i0].private_data->readers = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = dvb_generic_release(inode,file);
          printf("%d\n", benchRet); 
          free(inode);
          for(int _aux = 0; _aux < _len_file0; _aux++) {
          free(file[_aux].private_data);
          }
          free(file);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_inode0 = 100;
          struct inode * inode = (struct inode *) malloc(_len_inode0*sizeof(struct inode));
          for(int _i0 = 0; _i0 < _len_inode0; _i0++) {
            inode[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_file0 = 100;
          struct file * file = (struct file *) malloc(_len_file0*sizeof(struct file));
          for(int _i0 = 0; _i0 < _len_file0; _i0++) {
            file[_i0].f_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_file__i0__private_data0 = 1;
          file[_i0].private_data = (struct dvb_device *) malloc(_len_file__i0__private_data0*sizeof(struct dvb_device));
          for(int _j0 = 0; _j0 < _len_file__i0__private_data0; _j0++) {
            file[_i0].private_data->users = ((-2 * (next_i()%2)) + 1) * next_i();
        file[_i0].private_data->writers = ((-2 * (next_i()%2)) + 1) * next_i();
        file[_i0].private_data->readers = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = dvb_generic_release(inode,file);
          printf("%d\n", benchRet); 
          free(inode);
          for(int _aux = 0; _aux < _len_file0; _aux++) {
          free(file[_aux].private_data);
          }
          free(file);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
