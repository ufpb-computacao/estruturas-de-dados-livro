#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void findMinAndMax(int array[], int size, int * minimum, 
    int * maximum) {
  int min = INT_MAX;
  int max = INT_MIN;

  //Encontra o valor mínimo no arranjo
  for(int i=0; i < size; i++) {
    if(array[i] < min)
      min = array[i];
  }

  //Encontra o valor máximo no arranjo
  for(int i=0; i < size; i++) {
    if(array[i] > max)
      max = array[i];
  }

  // Retorna os valores por referência
  *minimum=min;
  *maximum=max;
}

int main() {
  int numeros[] = {4,67,23,5,56,34,6,4,7};
  int quantidadeDeElementos = sizeof(numeros)/sizeof(int);
  int minino,maximo;
  
  findMinAndMax(numeros,quantidadeDeElementos,&minino,&maximo);
  
  printf("minino: %d maximo: %d\n", minino, maximo);
  
  return EXIT_SUCCESS;
}
