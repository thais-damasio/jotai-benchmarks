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
typedef  char u_char ;
typedef  char ngx_int_t ;

/* Variables and functions */
 char NGX_ERROR ; 
 int NGX_MAX_INT_T_VALUE ; 

ngx_int_t
ngx_atoi(u_char *line, size_t n)
{
    ngx_int_t  value, cutoff, cutlim;

    if (n == 0) {
        return NGX_ERROR;
    }

    cutoff = NGX_MAX_INT_T_VALUE / 10;
    cutlim = NGX_MAX_INT_T_VALUE % 10;

    for (value = 0; n--; line++) {
        if (*line < '0' || *line > '9') {
            return NGX_ERROR;
        }

        if (value >= cutoff && (value > cutoff || *line - '0' > cutlim)) {
            return NGX_ERROR;
        }

        value = value * 10 + (*line - '0');
    }

    return value;
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
          unsigned long n = 100;
          int _len_line0 = 1;
          char * line = (char *) malloc(_len_line0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_line0; _i0++) {
            line[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char benchRet = ngx_atoi(line,n);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(line);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long n = 255;
          int _len_line0 = 65025;
          char * line = (char *) malloc(_len_line0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_line0; _i0++) {
            line[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char benchRet = ngx_atoi(line,n);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(line);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long n = 10;
          int _len_line0 = 100;
          char * line = (char *) malloc(_len_line0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_line0; _i0++) {
            line[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char benchRet = ngx_atoi(line,n);
          printf("%c\n", (benchRet %26) + 'a'); 
          free(line);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}