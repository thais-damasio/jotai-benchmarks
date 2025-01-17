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

/* Type definitions */
struct tl_token {struct tl_token* next; } ;

/* Variables and functions */

__attribute__((used)) static struct tl_token *list_token_reverse (struct tl_token *L) {
  struct tl_token *U, *V, *A = NULL;
  for (U = L; U != NULL; U = V) {
    V = U->next;
    U->next = A;
    A = U;
  }
  return A;
}


// ------------------------------------------------------------------------- //

struct tl_token *_allocate_L(int length, struct tl_token *aux_L[]) {
  struct tl_token *walker = (struct tl_token *)malloc(sizeof(struct tl_token));

  aux_L[0] = walker;
  walker->next = NULL;

  struct tl_token *head = walker;
  for(int i = 1; i < length; i++) {
    walker->next = (struct tl_token *)malloc(sizeof(struct tl_token));
    walker = walker->next;
    aux_L[i] = walker;
    walker->next = NULL;
  }

  return head;
}

void _delete_L(struct tl_token *aux_L[], int aux_L_size) {
  for(int i = 0; i < aux_L_size; i++) 
    if(aux_L[i])
      free(aux_L[i]);
}




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
          struct tl_token * aux_L[1];
          struct tl_token * L = _allocate_L(1, aux_L);
          struct tl_token * benchRet = list_token_reverse(L);
          _delete_L(aux_L, 1);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
