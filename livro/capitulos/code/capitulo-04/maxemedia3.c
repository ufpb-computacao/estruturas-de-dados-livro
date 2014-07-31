#include <stdlib.h>
#include <stdio.h>
#include "linkedlist.c"

#define INF 2147483647 //Maior valor que um inteiro pode assumir.

int main() {
  int count = 0;
  int total = 0;
  int largest = -1*(INF-1);
  Element i;

  LinkedList list = NULL;
  LL_Iterator it;

  while( (scanf("%d",&i) == 1 ) ) {
    list = prepend(list, i);
    if( i > largest) largest = i;
  }
  printf( "Valor máximo: %d\n", largest);

  it = getBegin(list);
  while( it != NULL ) {
    i = getElement(it);
    if( largest % i == 0 ) {
      total += i;
      count++;
    }
    it = moveNext(it);
  }
  if(count != 0)
    printf( "Média: %d\n", (total/count));
}
