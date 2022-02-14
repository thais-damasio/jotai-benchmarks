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
typedef  int timediff_t ;
struct curltime {int tv_sec; int tv_usec; } ;

/* Variables and functions */
 int TIME_MAX ; 
 int TIME_MIN ; 

timediff_t Curl_timediff_us(struct curltime newer, struct curltime older)
{
  timediff_t diff = (timediff_t)newer.tv_sec-older.tv_sec;
  if(diff >= (TIME_MAX/1000000))
    return TIME_MAX;
  else if(diff <= (TIME_MIN/1000000))
    return TIME_MIN;
  return diff * 1000000 + newer.tv_usec-older.tv_usec;
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
          struct curltime newer;
        newer.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        newer.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
          struct curltime older;
        older.tv_sec = ((-2 * (next_i()%2)) + 1) * next_i();
        older.tv_usec = ((-2 * (next_i()%2)) + 1) * next_i();
          int benchRet = Curl_timediff_us(newer,older);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}