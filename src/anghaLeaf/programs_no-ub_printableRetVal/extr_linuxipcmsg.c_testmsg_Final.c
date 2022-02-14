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
struct msg_msg {long m_type; } ;

/* Variables and functions */
#define  SEARCH_ANY 132 
#define  SEARCH_EQUAL 131 
#define  SEARCH_LESSEQUAL 130 
#define  SEARCH_NOTEQUAL 129 
#define  SEARCH_NUMBER 128 

__attribute__((used)) static int testmsg(struct msg_msg *msg, long type, int mode)
{
	switch (mode) {
	case SEARCH_ANY:
	case SEARCH_NUMBER:
		return 1;
	case SEARCH_LESSEQUAL:
		if (msg->m_type <= type)
			return 1;
		break;
	case SEARCH_EQUAL:
		if (msg->m_type == type)
			return 1;
		break;
	case SEARCH_NOTEQUAL:
		if (msg->m_type != type)
			return 1;
		break;
	}
	return 0;
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
          long type = 255;
          int mode = 255;
          int _len_msg0 = 1;
          struct msg_msg * msg = (struct msg_msg *) malloc(_len_msg0*sizeof(struct msg_msg));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
            msg->m_type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = testmsg(msg,type,mode);
          printf("%d\n", benchRet); 
          free(msg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}