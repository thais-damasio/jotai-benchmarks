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

/* Variables and functions */
 int ONIG_OPTION_EXTEND ; 
 int ONIG_OPTION_IGNORECASE ; 
 int ONIG_OPTION_MULTILINE ; 

__attribute__((used)) static char *
option_to_str(char str[4], int options) {
  char *p = str;
  if (options & ONIG_OPTION_MULTILINE) *p++ = 'm';
  if (options & ONIG_OPTION_IGNORECASE) *p++ = 'i';
  if (options & ONIG_OPTION_EXTEND) *p++ = 'x';
  *p = 0;
  return str;
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
          int options = 100;
          int _len_str0 = 4;
          char * str = (char *) malloc(_len_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = option_to_str(str,options);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(str);
        
        break;
    }
    // big-arr
    case 1:
    {
          int options = 255;
          int _len_str0 = 4;
          char * str = (char *) malloc(_len_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = option_to_str(str,options);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(str);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int options = 10;
          int _len_str0 = 4;
          char * str = (char *) malloc(_len_str0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_str0; _i0++) {
            str[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = option_to_str(str,options);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          free(str);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
