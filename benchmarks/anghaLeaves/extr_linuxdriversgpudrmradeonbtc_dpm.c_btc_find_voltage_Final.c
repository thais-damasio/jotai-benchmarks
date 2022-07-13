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
       1            big-arr-10x\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u16 ;
struct atom_voltage_table {unsigned int count; TYPE_1__* entries; } ;
struct TYPE_2__ {scalar_t__ value; } ;

/* Variables and functions */

__attribute__((used)) static u16 btc_find_voltage(struct atom_voltage_table *table, u16 voltage)
{
	unsigned int i;

	for (i = 0; i < table->count; i++) {
		if (voltage <= table->entries[i].value)
			return table->entries[i].value;
	}

	return table->entries[table->count - 1].value;
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
          long voltage = 100;
          int _len_table0 = 1;
          struct atom_voltage_table * table = (struct atom_voltage_table *) malloc(_len_table0*sizeof(struct atom_voltage_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_table__i0__entries0 = 1;
          table[_i0].entries = (struct TYPE_2__ *) malloc(_len_table__i0__entries0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_table__i0__entries0; _j0++) {
            table[_i0].entries->value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = btc_find_voltage(table,voltage);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].entries);
          }
          free(table);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          long voltage = 10;
          int _len_table0 = 100;
          struct atom_voltage_table * table = (struct atom_voltage_table *) malloc(_len_table0*sizeof(struct atom_voltage_table));
          for(int _i0 = 0; _i0 < _len_table0; _i0++) {
            table[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_table__i0__entries0 = 1;
          table[_i0].entries = (struct TYPE_2__ *) malloc(_len_table__i0__entries0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_table__i0__entries0; _j0++) {
            table[_i0].entries->value = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          long benchRet = btc_find_voltage(table,voltage);
          printf("%ld\n", benchRet); 
          for(int _aux = 0; _aux < _len_table0; _aux++) {
          free(table[_aux].entries);
          }
          free(table);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
