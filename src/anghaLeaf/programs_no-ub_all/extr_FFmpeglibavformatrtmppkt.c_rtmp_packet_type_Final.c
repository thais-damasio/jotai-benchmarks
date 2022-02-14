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
#define  RTMP_PT_AUDIO 141 
#define  RTMP_PT_BYTES_READ 140 
#define  RTMP_PT_CHUNK_SIZE 139 
#define  RTMP_PT_FLEX_MESSAGE 138 
#define  RTMP_PT_FLEX_OBJECT 137 
#define  RTMP_PT_FLEX_STREAM 136 
#define  RTMP_PT_INVOKE 135 
#define  RTMP_PT_METADATA 134 
#define  RTMP_PT_NOTIFY 133 
#define  RTMP_PT_SET_PEER_BW 132 
#define  RTMP_PT_SHARED_OBJ 131 
#define  RTMP_PT_USER_CONTROL 130 
#define  RTMP_PT_VIDEO 129 
#define  RTMP_PT_WINDOW_ACK_SIZE 128 

__attribute__((used)) static const char* rtmp_packet_type(int type)
{
    switch (type) {
    case RTMP_PT_CHUNK_SIZE:     return "chunk size";
    case RTMP_PT_BYTES_READ:     return "bytes read";
    case RTMP_PT_USER_CONTROL:   return "user control";
    case RTMP_PT_WINDOW_ACK_SIZE: return "window acknowledgement size";
    case RTMP_PT_SET_PEER_BW:    return "set peer bandwidth";
    case RTMP_PT_AUDIO:          return "audio packet";
    case RTMP_PT_VIDEO:          return "video packet";
    case RTMP_PT_FLEX_STREAM:    return "Flex shared stream";
    case RTMP_PT_FLEX_OBJECT:    return "Flex shared object";
    case RTMP_PT_FLEX_MESSAGE:   return "Flex shared message";
    case RTMP_PT_NOTIFY:         return "notification";
    case RTMP_PT_SHARED_OBJ:     return "shared object";
    case RTMP_PT_INVOKE:         return "invoke";
    case RTMP_PT_METADATA:       return "metadata";
    default:                     return "unknown";
    }
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
          int type = 255;
          const char * benchRet = rtmp_packet_type(type);
          printf("{{other_type}} %p\n", &benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
