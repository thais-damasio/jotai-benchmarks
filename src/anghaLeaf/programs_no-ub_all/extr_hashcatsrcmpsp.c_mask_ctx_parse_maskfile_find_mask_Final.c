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

__attribute__((used)) static char *mask_ctx_parse_maskfile_find_mask (char *line_buf, const size_t line_len)
{
  char *mask_buf = line_buf;

  bool escaped = false;

  for (size_t i = 0; i < line_len; i++)
  {
    if (escaped == true)
    {
      escaped = false;
    }
    else
    {
      if (line_buf[i] == '\\')
      {
        escaped = true;
      }
      else if (line_buf[i] == ',')
      {
        mask_buf = line_buf + i + 1;
      }
    }
  }

  return mask_buf;
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
          const unsigned long line_len = 255;
          int _len_line_buf0 = 65025;
          char * line_buf = (char *) malloc(_len_line_buf0*sizeof(char));
          for(int _i0 = 0; _i0 < _len_line_buf0; _i0++) {
            line_buf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          char * benchRet = mask_ctx_parse_maskfile_find_mask(line_buf,line_len);
          printf("{{other_type}} %p\n", &benchRet); 
          free(line_buf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
