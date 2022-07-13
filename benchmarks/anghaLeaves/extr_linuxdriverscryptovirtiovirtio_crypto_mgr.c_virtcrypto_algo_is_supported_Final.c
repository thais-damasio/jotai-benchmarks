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
       0            big-arr-10x\n\
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
typedef  unsigned int uint32_t ;
struct virtio_crypto {unsigned int crypto_services; unsigned int cipher_algo_l; unsigned int cipher_algo_h; unsigned int hash_algo; unsigned int mac_algo_l; unsigned int mac_algo_h; unsigned int aead_algo; } ;

/* Variables and functions */
#define  VIRTIO_CRYPTO_SERVICE_AEAD 131 
#define  VIRTIO_CRYPTO_SERVICE_CIPHER 130 
#define  VIRTIO_CRYPTO_SERVICE_HASH 129 
#define  VIRTIO_CRYPTO_SERVICE_MAC 128 

bool virtcrypto_algo_is_supported(struct virtio_crypto *vcrypto,
				  uint32_t service,
				  uint32_t algo)
{
	uint32_t service_mask = 1u << service;
	uint32_t algo_mask = 0;
	bool low = true;

	if (algo > 31) {
		algo -= 32;
		low = false;
	}

	if (!(vcrypto->crypto_services & service_mask))
		return false;

	switch (service) {
	case VIRTIO_CRYPTO_SERVICE_CIPHER:
		if (low)
			algo_mask = vcrypto->cipher_algo_l;
		else
			algo_mask = vcrypto->cipher_algo_h;
		break;

	case VIRTIO_CRYPTO_SERVICE_HASH:
		algo_mask = vcrypto->hash_algo;
		break;

	case VIRTIO_CRYPTO_SERVICE_MAC:
		if (low)
			algo_mask = vcrypto->mac_algo_l;
		else
			algo_mask = vcrypto->mac_algo_h;
		break;

	case VIRTIO_CRYPTO_SERVICE_AEAD:
		algo_mask = vcrypto->aead_algo;
		break;
	}

	if (!(algo_mask & (1u << algo)))
		return false;

	return true;
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

    // big-arr-10x
    case 0:
    {
          unsigned int service = 10;
          unsigned int algo = 10;
          int _len_vcrypto0 = 100;
          struct virtio_crypto * vcrypto = (struct virtio_crypto *) malloc(_len_vcrypto0*sizeof(struct virtio_crypto));
          for(int _i0 = 0; _i0 < _len_vcrypto0; _i0++) {
            vcrypto[_i0].crypto_services = ((-2 * (next_i()%2)) + 1) * next_i();
        vcrypto[_i0].cipher_algo_l = ((-2 * (next_i()%2)) + 1) * next_i();
        vcrypto[_i0].cipher_algo_h = ((-2 * (next_i()%2)) + 1) * next_i();
        vcrypto[_i0].hash_algo = ((-2 * (next_i()%2)) + 1) * next_i();
        vcrypto[_i0].mac_algo_l = ((-2 * (next_i()%2)) + 1) * next_i();
        vcrypto[_i0].mac_algo_h = ((-2 * (next_i()%2)) + 1) * next_i();
        vcrypto[_i0].aead_algo = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = virtcrypto_algo_is_supported(vcrypto,service,algo);
          printf("%d\n", benchRet); 
          free(vcrypto);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
