#include <stdio.h>

#define INF 2147483647

int main() {
	int total = 0;
	int count = 0;
	int largest = -1*(INF-1);
	int i;	
	while( (scanf("%d",&i) == 1 )) {
		count++;
		total += i;
		if( i > largest) largest = i;
	}	
	printf( "Valor máximo: %d\n", largest);
	if(count != 0)
		printf( "Média: %d\n", (total/count));
}