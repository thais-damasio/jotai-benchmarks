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
struct ide_taskfile {int lbam; int lbah; int device; int /*<<< orphan*/  command; int /*<<< orphan*/  lbal; int /*<<< orphan*/  nsect; } ;
struct TYPE_3__ {int cyl; int head; int select; int /*<<< orphan*/  sect; } ;
typedef  TYPE_1__ ide_drive_t ;

/* Variables and functions */
 int /*<<< orphan*/  ATA_CMD_INIT_DEV_PARAMS ; 

__attribute__((used)) static void ide_tf_set_specify_cmd(ide_drive_t *drive, struct ide_taskfile *tf)
{
	tf->nsect   = drive->sect;
	tf->lbal    = drive->sect;
	tf->lbam    = drive->cyl;
	tf->lbah    = drive->cyl >> 8;
	tf->device  = (drive->head - 1) | drive->select;
	tf->command = ATA_CMD_INIT_DEV_PARAMS;
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

    // big-arr
    case 0:
    {
          int _len_drive0 = 1;
          struct TYPE_3__ * drive = (struct TYPE_3__ *) malloc(_len_drive0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_drive0; _i0++) {
            drive->cyl = ((-2 * (next_i()%2)) + 1) * next_i();
        drive->head = ((-2 * (next_i()%2)) + 1) * next_i();
        drive->select = ((-2 * (next_i()%2)) + 1) * next_i();
        drive->sect = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_tf0 = 1;
          struct ide_taskfile * tf = (struct ide_taskfile *) malloc(_len_tf0*sizeof(struct ide_taskfile));
          for(int _i0 = 0; _i0 < _len_tf0; _i0++) {
            tf->lbam = ((-2 * (next_i()%2)) + 1) * next_i();
        tf->lbah = ((-2 * (next_i()%2)) + 1) * next_i();
        tf->device = ((-2 * (next_i()%2)) + 1) * next_i();
        tf->command = ((-2 * (next_i()%2)) + 1) * next_i();
        tf->lbal = ((-2 * (next_i()%2)) + 1) * next_i();
        tf->nsect = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ide_tf_set_specify_cmd(drive,tf);
          free(drive);
          free(tf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}