#include "queue.c"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


// Recebe uma matriz A que representa as interligações entre 
// cidades 0,1,..,5: há uma estrada (de mão única) de i a j 
// se e só se A[i][j] == 1.  Devolve um vetor d que registra 
// as distâncias da cidade c a cada uma das outras: d[i] é a 
// distância de c a i.

int *distancias( int A[6][6], int c) {
   int *d, j;
   
   Queue fila;
   fila.size = 0;
   fila.head = NULL;
   fila.tail = NULL;

   d = malloc( 6 * sizeof (int));
   for (j = 0; j < 6; ++j)  
	   d[j] = 6;

   d[c] = 0;

   enqueue(&fila,c); // c entra na fila
   
   while (!isEmpty(&fila)) { 
      int i, di;

	  i = dequeue(&fila);  // i sai da fila
	  
      di = d[i];
      for (j = 0; j < 6; ++j)
         if (A[i][j] == 1 && d[j] >= 6) {
            d[j] = di + 1;
            enqueue(&fila,j); // j entra na fila
         }
   }
   
   return d;
}

int main() {
	
	int matriz[6][6];
	int *dist;
	
	srand(time(NULL));
	
	//Gerando uma matriz de conectividade aleatória.
	printf( "Matriz de conectividade: \n");
	for(int i = 0; i < 6; i++) {
		printf( "Cidade [%d]: ", i);
		for(int j = 0 ; j < 6; j++) {
			if( i != j ) 
				matriz[i][j] = (rand()%2 == 0);
			else
				matriz[i][j] = 0;
			printf( "%d ", matriz[i][j]);
		}
		printf("\n\n");
	}
	
	//Calculando a distância mínima da cidade 0 para todas as outras cidades.
	dist = distancias(matriz,0);
	
	printf( "Distância mínima da cidade 0 para cada uma das outras cidades:\n");
	for( int i = 0; i < 6; i++)
		printf( "%d " , dist[i]);
	printf("\n");
	
	return 0;
}