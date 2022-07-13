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

/* Type definitions */

/* Variables and functions */
 int* utf8_to_win_convert_0x000 ; 
 int* utf8_to_win_convert_0x2000 ; 
 int* utf8_to_win_convert_0x2100 ; 
 int* utf8_to_win_convert_0x400 ; 
 int* utf8_to_win_convert_0xff00 ; 

int utf8_to_win_char (int c) {
  if (c < 0x80) {
    return c;
  }
  if (c == 8238 || c == 8236 || c == 8235) return 0xda; 
  switch (c & ~0xff) {
    case 0x400: return utf8_to_win_convert_0x400[c & 0xff];
    case 0x2000: return utf8_to_win_convert_0x2000[c & 0xff];
    case 0xff00: return utf8_to_win_convert_0xff00[c & 0xff];
    case 0x2100: return utf8_to_win_convert_0x2100[c & 0xff];
    case 0x000: return utf8_to_win_convert_0x000[c & 0xff];
  }
  return -1;
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
          int c = 100;
          int benchRet = utf8_to_win_char(c);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int c = 10;
          int benchRet = utf8_to_win_char(c);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
