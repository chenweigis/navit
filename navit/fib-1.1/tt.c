/*-
 * Copyright 1997, 1998-2003 John-Mark Gurney.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.

*/

#include <stdio.h>
#include <stdlib.h>
#include "fib.h"

int main(void)
{
  
    struct fibheap *a;
    void *arr[10];
    int i;

    a = fh_makekeyheap();
	
    for (i=1 ; i < 8 ; i++)
     {
      arr[i]= fh_insertkey(a,0,(void *)i);
      printf("adding: 0 %d \n",i);
     }
     
     printf(" \n");

     fh_replacekey(a, arr[1],-2);
     fh_replacekey(a, arr[4],-3);
     fh_replacekey(a, arr[7],-5);
	  
     printf("Wert(minkey) %d\n",fh_minkey(a));
     printf("Knoten: %d\n\n", (int)fh_extractmin(a)); 
        
     fh_replacekey(a, arr[3],-2);
     fh_replacekey(a, arr[6],-1);
	
     printf("Wert(minkey) %d\n",fh_minkey(a));
     printf("Knoten: %d\n\n", (int)fh_extractmin(a));
	
     fh_replacekey(a, arr[1],-9);
     fh_replacekey(a, arr[5],-3);

     printf("Wert(minkey) %d\n",fh_minkey(a));
     printf("Knoten: %d\n\n", (int)fh_extractmin(a));

     fh_replacekey(a, arr[2],-4);
     fh_replacekey(a, arr[5],-5);
     fh_replacekey(a, arr[6],-3);
        	
     printf("Wert(minkey) %d\n",fh_minkey(a));
     printf("Knoten: %d\n\n", (int)fh_extractmin(a));

     fh_replacekey(a, arr[2],-6);
     fh_replacekey(a, arr[6],-6);

     printf("Wert(minkey) %d\n",fh_minkey(a));
     printf("Knoten: %d\n\n", (int)fh_extractmin(a));

     printf("Wert(minkey) %d\n",fh_minkey(a));
     printf("Knoten: %d\n\n", (int)fh_extractmin(a));

     printf("Wert(minkey) %d\n",fh_minkey(a));
     printf("Knoten: %d\n\n", (int)fh_extractmin(a));
       	
     fh_deleteheap(a);

	return 0;
}

