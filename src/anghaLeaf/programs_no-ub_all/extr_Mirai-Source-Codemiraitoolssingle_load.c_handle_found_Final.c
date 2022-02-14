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
 int /*<<< orphan*/  found_srvs ; 

void handle_found(int fd)
{
    /* 
    struct stateSlot_t *state = &stateTable[fd];
    
    struct sockaddr_in name;
    int namelen = (sizeof (struct sockaddr_in));

    getpeername(state->fd, &name, &namelen);
    
    FILE *fp = fopen("loaded.txt", "a");
    fprintf(outfd, "%d.%d.%d.%d:%s:%s:%s:%d:%d:%d\n",
        (name.sin_addr.s_addr & 0xff), 
        ((name.sin_addr.s_addr & (0xff << 8)) >> 8), 
        ((name.sin_addr.s_addr & (0xff << 16)) >> 16),
        ((name.sin_addr.s_addr & (0xff << 24)) >> 24), 
        
        state->username, 
        state->password, 
        state->path, 
        state->wget, 
        state->endianness, 
        state->arch
    );
    fclose(outfd);
    */
    
    found_srvs++;
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
          int fd = 255;
          handle_found(fd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
