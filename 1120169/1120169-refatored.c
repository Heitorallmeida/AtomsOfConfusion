#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

typedef int u32;

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

// FIM FUNÇÃO COM ÁTOMO

void main(){

//iniciado dados necessarios
	int n;
  printf("Tamanho: "); scanf("%d", &n);

	u32 *aHeap = (u32 *) malloc(n * sizeof(u32));

	printf("%d Entradas: \n", n);
  for(int i = 0; i < n; i++) scanf("%d\n", &aHeap[i]);

	btreeHeapInsert(aHeap, 188);

  printf("Saida:\n");
  for(int i = 0; i < n; i++) printf("%d\n", aHeap[i]);
}