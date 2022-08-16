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
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
\n\
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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int m_iLen; } ;
struct lsapi_packet_header {char m_type; TYPE_1__ m_packetLen; int /*<<< orphan*/  m_flag; int /*<<< orphan*/  m_versionB1; int /*<<< orphan*/  m_versionB0; } ;

/* Variables and functions */
 int /*<<< orphan*/  LSAPI_ENDIAN ; 
 int /*<<< orphan*/  LSAPI_VERSION_B0 ; 
 int /*<<< orphan*/  LSAPI_VERSION_B1 ; 

__attribute__((used)) static inline void lsapi_buildPacketHeader( struct lsapi_packet_header * pHeader,
                                char type, int len )
{
    pHeader->m_versionB0 = LSAPI_VERSION_B0;  /* LSAPI protocol version */
    pHeader->m_versionB1 = LSAPI_VERSION_B1;
    pHeader->m_type      = type;
    pHeader->m_flag      = LSAPI_ENDIAN;
    pHeader->m_packetLen.m_iLen = len;
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
          char type = 100;
          int len = 100;
          int _len_pHeader0 = 1;
          struct lsapi_packet_header * pHeader = (struct lsapi_packet_header *) malloc(_len_pHeader0*sizeof(struct lsapi_packet_header));
          for(int _i0 = 0; _i0 < _len_pHeader0; _i0++) {
            pHeader[_i0].m_type = ((-2 * (next_i()%2)) + 1) * next_i();
        pHeader[_i0].m_packetLen.m_iLen = ((-2 * (next_i()%2)) + 1) * next_i();
        pHeader[_i0].m_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        pHeader[_i0].m_versionB1 = ((-2 * (next_i()%2)) + 1) * next_i();
        pHeader[_i0].m_versionB0 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lsapi_buildPacketHeader(pHeader,type,len);
          free(pHeader);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
