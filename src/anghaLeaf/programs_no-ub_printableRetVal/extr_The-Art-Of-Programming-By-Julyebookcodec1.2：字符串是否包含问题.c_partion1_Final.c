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

/* Variables and functions */

int partion1(char * arr, int start, int end)
{
    char tmpChar;
    int i;
    while (*(arr + start) <= *(arr + end) && start < end)
    {
        start++; //start 指向第一个大的数据
    }
    if (start == end)
    {
        return start; //已经有序
    }
    for (i = start + 1; i < end; i++)
    {
        if (*(arr + i) < * (arr + end)) //交换
        {
            tmpChar = *(arr + start);
            *(arr + start) = *(arr + i);
            *(arr + i) = tmpChar;
            start++;
        }
    }
    tmpChar = *(arr + start);
    *(arr + start) = *(arr + i);
    *(arr + i) = tmpChar;
    return start;
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
          int start = 255;
          int end = 255;
          int _len_arr0 = 65025;
          char * arr = (char *) malloc(_len_arr0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_arr0; _i0++) {
            arr[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = partion1(arr,start,end);
          printf("%d\n", benchRet); 
          free(arr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
