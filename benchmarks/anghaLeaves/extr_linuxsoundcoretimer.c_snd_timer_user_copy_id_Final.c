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
struct snd_timer_id {int card; int /*<<< orphan*/  subdevice; int /*<<< orphan*/  device; int /*<<< orphan*/  dev_sclass; int /*<<< orphan*/  dev_class; } ;
struct snd_timer {int /*<<< orphan*/  tmr_subdevice; int /*<<< orphan*/  tmr_device; TYPE_1__* card; int /*<<< orphan*/  tmr_class; } ;
struct TYPE_2__ {int number; } ;

/* Variables and functions */
 int /*<<< orphan*/  SNDRV_TIMER_SCLASS_NONE ; 

__attribute__((used)) static void snd_timer_user_copy_id(struct snd_timer_id *id, struct snd_timer *timer)
{
	id->dev_class = timer->tmr_class;
	id->dev_sclass = SNDRV_TIMER_SCLASS_NONE;
	id->card = timer->card ? timer->card->number : -1;
	id->device = timer->tmr_device;
	id->subdevice = timer->tmr_subdevice;
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
          int _len_id0 = 1;
          struct snd_timer_id * id = (struct snd_timer_id *) malloc(_len_id0*sizeof(struct snd_timer_id));
          for(int _i0 = 0; _i0 < _len_id0; _i0++) {
            id[_i0].card = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].subdevice = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].device = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].dev_sclass = ((-2 * (next_i()%2)) + 1) * next_i();
        id[_i0].dev_class = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_timer0 = 1;
          struct snd_timer * timer = (struct snd_timer *) malloc(_len_timer0*sizeof(struct snd_timer));
          for(int _i0 = 0; _i0 < _len_timer0; _i0++) {
            timer[_i0].tmr_subdevice = ((-2 * (next_i()%2)) + 1) * next_i();
        timer[_i0].tmr_device = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_timer__i0__card0 = 1;
          timer[_i0].card = (struct TYPE_2__ *) malloc(_len_timer__i0__card0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_timer__i0__card0; _j0++) {
            timer[_i0].card->number = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        timer[_i0].tmr_class = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          snd_timer_user_copy_id(id,timer);
          free(id);
          for(int _aux = 0; _aux < _len_timer0; _aux++) {
          free(timer[_aux].card);
          }
          free(timer);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
