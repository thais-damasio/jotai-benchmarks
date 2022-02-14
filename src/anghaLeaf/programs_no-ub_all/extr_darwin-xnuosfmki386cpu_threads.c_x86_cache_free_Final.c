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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_4__ {int level; struct TYPE_4__* next; } ;
typedef  TYPE_1__ x86_cpu_cache_t ;

/* Variables and functions */
 int MAX_CACHE_DEPTH ; 
 int* num_Lx_caches ; 
 int num_caches ; 
 TYPE_1__* x86_caches ; 

__attribute__((used)) static void
x86_cache_free(x86_cpu_cache_t *cache)
{
    num_caches -= 1;
    if (cache->level > 0 && cache->level <= MAX_CACHE_DEPTH)
	num_Lx_caches[cache->level - 1] -= 1;
    cache->next = x86_caches;
    x86_caches = cache;
}


// ------------------------------------------------------------------------- //

struct TYPE_4__ *_allocate_cache(int length) {
  struct TYPE_4__ *head = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));

  head->level = rand();
  head->next = NULL;

  struct TYPE_4__ *walker = head;
  for(int i = 1; i < length; i++) {
    walker->next = (struct TYPE_4__ *)malloc(sizeof(struct TYPE_4__));
    walker = walker->next;
    walker->level = rand();
    walker->next = NULL;
  }

  return head;
}

void _delete_cache(struct TYPE_4__ * head) {
  if(head->next != NULL) _delete_cache(head->next);
  free(head);
}




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
          struct TYPE_4__ * cache = _allocate_cache(1);
          x86_cache_free(cache);
          _delete_cache(cache);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}