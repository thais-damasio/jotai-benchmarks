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
typedef  unsigned int ucs4_t ;
typedef  int /*<<< orphan*/  conv_t ;

/* Variables and functions */
 int RET_ILUNI ; 
 int RET_TOOSMALL ; 
 unsigned int* gb18030uni_ranges ; 
 unsigned int* gb18030uni_uni2charset_ranges ; 

__attribute__((used)) static int
gb18030uni_wctomb (conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
  if (n >= 4) {
    unsigned int i = wc;
    if (i >= 0x0080 && i <= 0xffff) {
      if (i == 0xe7c7) {
        i = 7457;
      } else {
        unsigned int k1 = 0;
        unsigned int k2 = 205;
        while (k1 < k2) {
          unsigned int k = (k1 + k2) / 2;
          if (i <= gb18030uni_uni2charset_ranges[2*k+1])
            k2 = k;
          else if (i >= gb18030uni_uni2charset_ranges[2*k+2])
            k1 = k + 1;
          else
            return RET_ILUNI;
        }
        {
          unsigned int diff = gb18030uni_ranges[k1];
          i -= diff;
        }
      }
      r[3] = (i % 10) + 0x30; i = i / 10;
      r[2] = (i % 126) + 0x81; i = i / 126;
      r[1] = (i % 10) + 0x30; i = i / 10;
      r[0] = i + 0x81;
      return 4;
    }
    return RET_ILUNI;
  }
  return RET_TOOSMALL;
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
          int conv = 100;
          unsigned int wc = 100;
          unsigned long n = 100;
          int _len_r0 = 1;
          unsigned char * r = (unsigned char *) malloc(_len_r0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gb18030uni_wctomb(conv,r,wc,n);
          printf("%d\n", benchRet); 
          free(r);
        
        break;
    }
    // big-arr-10x
    case 1:
    {
          int conv = 10;
          unsigned int wc = 10;
          unsigned long n = 10;
          int _len_r0 = 100;
          unsigned char * r = (unsigned char *) malloc(_len_r0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = gb18030uni_wctomb(conv,r,wc,n);
          printf("%d\n", benchRet); 
          free(r);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
