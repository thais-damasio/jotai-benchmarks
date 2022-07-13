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
struct smq_hash_table {int /*<<< orphan*/ * buckets; } ;
struct entry {int /*<<< orphan*/  hash_next; } ;

/* Variables and functions */

__attribute__((used)) static void __h_unlink(struct smq_hash_table *ht, unsigned h,
		       struct entry *e, struct entry *prev)
{
	if (prev)
		prev->hash_next = e->hash_next;
	else
		ht->buckets[h] = e->hash_next;
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
          unsigned int h = 100;
          int _len_ht0 = 1;
          struct smq_hash_table * ht = (struct smq_hash_table *) malloc(_len_ht0*sizeof(struct smq_hash_table));
          for(int _i0 = 0; _i0 < _len_ht0; _i0++) {
              int _len_ht__i0__buckets0 = 1;
          ht[_i0].buckets = (int *) malloc(_len_ht__i0__buckets0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ht__i0__buckets0; _j0++) {
            ht[_i0].buckets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_e0 = 1;
          struct entry * e = (struct entry *) malloc(_len_e0*sizeof(struct entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].hash_next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prev0 = 1;
          struct entry * prev = (struct entry *) malloc(_len_prev0*sizeof(struct entry));
          for(int _i0 = 0; _i0 < _len_prev0; _i0++) {
            prev[_i0].hash_next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __h_unlink(ht,h,e,prev);
          for(int _aux = 0; _aux < _len_ht0; _aux++) {
          free(ht[_aux].buckets);
          }
          free(ht);
          free(e);
          free(prev);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int h = 255;
          int _len_ht0 = 65025;
          struct smq_hash_table * ht = (struct smq_hash_table *) malloc(_len_ht0*sizeof(struct smq_hash_table));
          for(int _i0 = 0; _i0 < _len_ht0; _i0++) {
              int _len_ht__i0__buckets0 = 1;
          ht[_i0].buckets = (int *) malloc(_len_ht__i0__buckets0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ht__i0__buckets0; _j0++) {
            ht[_i0].buckets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_e0 = 65025;
          struct entry * e = (struct entry *) malloc(_len_e0*sizeof(struct entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].hash_next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prev0 = 65025;
          struct entry * prev = (struct entry *) malloc(_len_prev0*sizeof(struct entry));
          for(int _i0 = 0; _i0 < _len_prev0; _i0++) {
            prev[_i0].hash_next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __h_unlink(ht,h,e,prev);
          for(int _aux = 0; _aux < _len_ht0; _aux++) {
          free(ht[_aux].buckets);
          }
          free(ht);
          free(e);
          free(prev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int h = 10;
          int _len_ht0 = 100;
          struct smq_hash_table * ht = (struct smq_hash_table *) malloc(_len_ht0*sizeof(struct smq_hash_table));
          for(int _i0 = 0; _i0 < _len_ht0; _i0++) {
              int _len_ht__i0__buckets0 = 1;
          ht[_i0].buckets = (int *) malloc(_len_ht__i0__buckets0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ht__i0__buckets0; _j0++) {
            ht[_i0].buckets[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_e0 = 100;
          struct entry * e = (struct entry *) malloc(_len_e0*sizeof(struct entry));
          for(int _i0 = 0; _i0 < _len_e0; _i0++) {
            e[_i0].hash_next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prev0 = 100;
          struct entry * prev = (struct entry *) malloc(_len_prev0*sizeof(struct entry));
          for(int _i0 = 0; _i0 < _len_prev0; _i0++) {
            prev[_i0].hash_next = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __h_unlink(ht,h,e,prev);
          for(int _aux = 0; _aux < _len_ht0; _aux++) {
          free(ht[_aux].buckets);
          }
          free(ht);
          free(e);
          free(prev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
