#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef int u32;

//INÍCIO FUNÇÃO COM ÁTOMO

static void btreeHeapInsert(u32 *aHeap, u32 x){

  u32 j, i = ++aHeap[0];
  printf("%d\n\n", i);
  aHeap[i] = x;

  while( (j = i/2)>0 && aHeap[j]>aHeap[i] ){
    x = aHeap[j];
    aHeap[j] = aHeap[i];
    aHeap[i] = x;
    i = j;
  }

}

// FIM FUNÇÃO COM ÁTOMO

void main(){

//iniciado dados necessarios
	int n = 10;
	u32 *aHeap = (u32 *) malloc(n * sizeof(u32));
	for(int i = 0; i < n; i++) aHeap[i] = i*2;

	btreeHeapInsert(aHeap, 188);

	for(int i = 0; i < n; i++) printf("%d\n", aHeap[i]);


}