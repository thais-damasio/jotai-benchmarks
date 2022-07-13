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
struct batadv_priv_debug_log {char* log_buff; } ;

/* Variables and functions */
 size_t BATADV_LOG_BUFF_MASK ; 

__attribute__((used)) static char *batadv_log_char_addr(struct batadv_priv_debug_log *debug_log,
				  size_t idx)
{
	return &debug_log->log_buff[idx & BATADV_LOG_BUFF_MASK];
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
          unsigned long idx = 100;
          int _len_debug_log0 = 1;
          struct batadv_priv_debug_log * debug_log = (struct batadv_priv_debug_log *) malloc(_len_debug_log0*sizeof(struct batadv_priv_debug_log));
          for(int _i0 = 0; _i0 < _len_debug_log0; _i0++) {
              int _len_debug_log__i0__log_buff0 = 1;
          debug_log[_i0].log_buff = (char *) malloc(_len_debug_log__i0__log_buff0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_debug_log__i0__log_buff0; _j0++) {
            debug_log[_i0].log_buff[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          char * benchRet = batadv_log_char_addr(debug_log,idx);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_debug_log0; _aux++) {
          free(debug_log[_aux].log_buff);
          }
          free(debug_log);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long idx = 255;
          int _len_debug_log0 = 65025;
          struct batadv_priv_debug_log * debug_log = (struct batadv_priv_debug_log *) malloc(_len_debug_log0*sizeof(struct batadv_priv_debug_log));
          for(int _i0 = 0; _i0 < _len_debug_log0; _i0++) {
              int _len_debug_log__i0__log_buff0 = 1;
          debug_log[_i0].log_buff = (char *) malloc(_len_debug_log__i0__log_buff0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_debug_log__i0__log_buff0; _j0++) {
            debug_log[_i0].log_buff[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          char * benchRet = batadv_log_char_addr(debug_log,idx);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_debug_log0; _aux++) {
          free(debug_log[_aux].log_buff);
          }
          free(debug_log);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long idx = 10;
          int _len_debug_log0 = 100;
          struct batadv_priv_debug_log * debug_log = (struct batadv_priv_debug_log *) malloc(_len_debug_log0*sizeof(struct batadv_priv_debug_log));
          for(int _i0 = 0; _i0 < _len_debug_log0; _i0++) {
              int _len_debug_log__i0__log_buff0 = 1;
          debug_log[_i0].log_buff = (char *) malloc(_len_debug_log__i0__log_buff0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_debug_log__i0__log_buff0; _j0++) {
            debug_log[_i0].log_buff[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          char * benchRet = batadv_log_char_addr(debug_log,idx);
          printf("%c\n", ((*benchRet) %26) + 'a'); 
          for(int _aux = 0; _aux < _len_debug_log0; _aux++) {
          free(debug_log[_aux].log_buff);
          }
          free(debug_log);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
