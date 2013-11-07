#include <stdio.h>
#include "node.c"

#define INF 2147483647 	//Maior valor que um inteiro pode assumir.

int main() {

	int count = 0;
	int total = 0;
	int largest = -1*(INF-1);
	int i;
	Node *nodes = NULL;
	
	while( (scanf("%d",&i) == 1 )) {
		nodes = makeNode(i, nodes);
		if( i > largest) largest = i;
	}
	
	printf( "Valor máximo: %d\n", largest);
	
	while( nodes != NULL ) {
		i = getValue(nodes);	
		if( largest % i == 0 ) {
			total += i;
			count++;
		}
		nodes = getNext(nodes);
	}
	
	if(count != 0)
		printf( "Média: %d\n", (total/count));
}