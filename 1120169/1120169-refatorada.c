#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//ATOMO

    static void btreeHeapInsert(u32 *aHeap, u32 x){
  u32 j, i = ++aHeap[0];
  aHeap[i] = x;
  while( (j = i/2)>0 && aHeap[j]>aHeap[i] ){
    x = aHeap[j];
    aHeap[j] = aHeap[i];
    aHeap[i] = x;
    i = j;
  }
}

//INÍCIO FUNÇÃO COM ÁTOMO

static void btreeHeapInsert(u32 *aHeap, u32 x){

  u32 j, i = ++aHeap[0];
  aHeap[i] = x;

  j = i/2;
  while( j > 0 && aHeap[j]>aHeap[i] ){

    x = aHeap[j];
    aHeap[j] = aHeap[i];
    aHeap[i] = x;

    j /= 2;
  }

}

