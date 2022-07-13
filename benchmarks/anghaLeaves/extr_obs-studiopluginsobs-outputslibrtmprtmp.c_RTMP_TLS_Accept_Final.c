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
typedef  int /*<<< orphan*/  RTMP ;

/* Variables and functions */
 int FALSE ; 

int
RTMP_TLS_Accept(RTMP *r, void *ctx)
{
#if defined(CRYPTO) && !defined(NO_SSL)
    tls_server_ctx *srv_ctx = ctx;
    TLS_server(srv_ctx, r->m_sb.sb_ssl);

#if defined(USE_MBEDTLS)
    mbedtls_net_context *client_fd = &RTMP_TLS_ctx->net;
    mbedtls_net_init(client_fd);
    client_fd->fd = r->m_sb.sb_socket;
    TLS_setfd(r->m_sb.sb_ssl, client_fd);
#else
    TLS_setfd(r->m_sb.sb_ssl, r->m_sb.sb_socket);
#endif

    int connect_return = TLS_connect(r->m_sb.sb_ssl);
    if (connect_return < 0)
    {
        RTMP_Log(RTMP_LOGERROR, "%s, TLS_Connect failed", __FUNCTION__);
        return FALSE;
    }
    return TRUE;
#else
    (void)r;
    (void)ctx;
    return FALSE;
#endif
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
          int _len_r0 = 1;
          int * r = (int *) malloc(_len_r0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ctx;
          int benchRet = RTMP_TLS_Accept(r,ctx);
          printf("%d\n", benchRet); 
          free(r);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_r0 = 65025;
          int * r = (int *) malloc(_len_r0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ctx;
          int benchRet = RTMP_TLS_Accept(r,ctx);
          printf("%d\n", benchRet); 
          free(r);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_r0 = 100;
          int * r = (int *) malloc(_len_r0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_r0; _i0++) {
            r[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * ctx;
          int benchRet = RTMP_TLS_Accept(r,ctx);
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
