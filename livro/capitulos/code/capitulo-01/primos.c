#include <stdlib.h>
#include <stdio.h>
#include "node.c"

int isprime( int p ) {
	int i;

	for( i = 2; i * i <= p; i++ )
		if( p % i == 0 )
			return 0;
	return 1;
}

int main() {
	int count = 0;
	int total = 0;
	int largest = 0;
	int i;
	Node *nodes = NULL;
	while( (scanf("%d",&i) == 1 ) && i > 0 ) {
		nodes = makeNode(i, nodes);
		if( i > largest && isprime(i)) largest = i;
	}
	printf( "Maior número primo lido: %d\n", largest);
	printf( "Múltiplos do maior primo lido:"); 
	while( nodes != NULL ) {
		i = getValue(nodes);	
		if( i != largest && i % largest  == 0 ) {
			printf( " %d," , i );
		}
		nodes = getNext(nodes);
	}
	printf( "\n");
}
