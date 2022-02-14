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
typedef  int u8 ;
typedef  int /*<<< orphan*/  u16 ;

/* Variables and functions */

__attribute__((used)) static inline u16 si2cip(u8 si1, u8 si2)
{
	static const u8 cip[17][5] =
		{
			/*  0  1  2  3  4  */
			{0, 0, 0, 0, 0},	/*0 */
			{16, 16, 4, 26, 16},	/*1 */
			{17, 17, 17, 4, 4},	/*2 */
			{2, 2, 2, 2, 2},	/*3 */
			{18, 18, 18, 18, 18},	/*4 */
			{2, 2, 2, 2, 2},	/*5 */
			{0, 0, 0, 0, 0},	/*6 */
			{2, 2, 2, 2, 2},	/*7 */
			{2, 2, 2, 2, 2},	/*8 */
			{21, 21, 21, 21, 21},	/*9 */
			{19, 19, 19, 19, 19},	/*10 */
			{0, 0, 0, 0, 0},	/*11 */
			{0, 0, 0, 0, 0},	/*12 */
			{0, 0, 0, 0, 0},	/*13 */
			{0, 0, 0, 0, 0},	/*14 */
			{22, 22, 22, 22, 22},	/*15 */
			{27, 27, 27, 28, 27}	/*16 */
		};
	if (si1 > 16)
		si1 = 0;
	if (si2 > 4)
		si2 = 0;

	return (u16) cip[si1][si2];
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
          int si1 = 255;
          int si2 = 255;
          int benchRet = si2cip(si1,si2);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
