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

/* Type definitions */
typedef  int uint32_t ;
typedef  int int64_t ;

/* Variables and functions */
 long B ; 
 int* two ; 

__attribute__((used)) static void doit4(register uint32_t *a,register long x,register long y,int64_t start)
{
  long i0;
  long y0;
  register long i;
  register uint32_t data;
  register uint32_t pos;
  register uint32_t bits;

  x += x; x += 15;
  y += 15;

  start += 1000000000;
  while (start < 0) { start += x; x += 30; }
  start -= 1000000000;
  i = start;

  while (i < B) { i += x; x += 30; }

  for (;;) {
    x -= 30;
    if (x <= 15) return;
    i -= x;

    while (i < 0) { i += y; y += 30; }

    i0 = i; y0 = y;
    while (i < B) {
      pos = (uint32_t)i; data = (uint32_t)i;
      pos >>= 5; data &= 31;
      i += y; y += 30;
      bits = a[pos]; data = two[data];
      bits ^= data;
      a[pos] = bits;
    }
    i = i0; y = y0;
  }
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
          long x = 255;
          long y = 255;
          int start = 255;
          int _len_a0 = 65025;
          int * a = (int *) malloc(_len_a0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_a0; _i0++) {
            a[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          doit4(a,x,y,start);
          free(a);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
