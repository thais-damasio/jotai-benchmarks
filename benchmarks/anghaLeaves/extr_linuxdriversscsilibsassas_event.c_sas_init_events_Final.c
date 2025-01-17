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
struct sas_ha_struct {int /*<<< orphan*/  notify_phy_event; int /*<<< orphan*/  notify_port_event; } ;

/* Variables and functions */
 int /*<<< orphan*/  sas_notify_phy_event ; 
 int /*<<< orphan*/  sas_notify_port_event ; 

int sas_init_events(struct sas_ha_struct *sas_ha)
{
	sas_ha->notify_port_event = sas_notify_port_event;
	sas_ha->notify_phy_event = sas_notify_phy_event;

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
          int _len_sas_ha0 = 1;
          struct sas_ha_struct * sas_ha = (struct sas_ha_struct *) malloc(_len_sas_ha0*sizeof(struct sas_ha_struct));
          for(int _i0 = 0; _i0 < _len_sas_ha0; _i0++) {
            sas_ha[_i0].notify_phy_event = ((-2 * (next_i()%2)) + 1) * next_i();
        sas_ha[_i0].notify_port_event = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = sas_init_events(sas_ha);
          printf("%d\n", benchRet); 
          free(sas_ha);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
