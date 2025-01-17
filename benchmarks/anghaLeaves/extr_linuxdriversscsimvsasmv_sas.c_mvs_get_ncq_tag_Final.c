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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct sas_task {struct ata_queued_cmd* uldd_task; } ;
struct TYPE_2__ {scalar_t__ command; } ;
struct ata_queued_cmd {int tag; TYPE_1__ tf; } ;

/* Variables and functions */
 scalar_t__ ATA_CMD_FPDMA_READ ; 
 scalar_t__ ATA_CMD_FPDMA_RECV ; 
 scalar_t__ ATA_CMD_FPDMA_SEND ; 
 scalar_t__ ATA_CMD_FPDMA_WRITE ; 
 scalar_t__ ATA_CMD_NCQ_NON_DATA ; 

__attribute__((used)) static u32 mvs_get_ncq_tag(struct sas_task *task, u32 *tag)
{
	struct ata_queued_cmd *qc = task->uldd_task;

	if (qc) {
		if (qc->tf.command == ATA_CMD_FPDMA_WRITE ||
		    qc->tf.command == ATA_CMD_FPDMA_READ ||
		    qc->tf.command == ATA_CMD_FPDMA_RECV ||
		    qc->tf.command == ATA_CMD_FPDMA_SEND ||
		    qc->tf.command == ATA_CMD_NCQ_NON_DATA) {
			*tag = qc->tag;
			return 1;
		}
	}

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
          int _len_task0 = 1;
          struct sas_task * task = (struct sas_task *) malloc(_len_task0*sizeof(struct sas_task));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__uldd_task0 = 1;
          task[_i0].uldd_task = (struct ata_queued_cmd *) malloc(_len_task__i0__uldd_task0*sizeof(struct ata_queued_cmd));
          for(int _j0 = 0; _j0 < _len_task__i0__uldd_task0; _j0++) {
            task[_i0].uldd_task->tag = ((-2 * (next_i()%2)) + 1) * next_i();
        task[_i0].uldd_task->tf.command = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_tag0 = 1;
          int * tag = (int *) malloc(_len_tag0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_tag0; _i0++) {
            tag[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mvs_get_ncq_tag(task,tag);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_task0; _aux++) {
          free(task[_aux].uldd_task);
          }
          free(task);
          free(tag);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
