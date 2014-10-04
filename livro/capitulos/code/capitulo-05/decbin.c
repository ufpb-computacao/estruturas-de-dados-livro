#include <stdio.h>
#include <stdlib.h>
#include "stack.c"

int main() {

  int numero, digito;
  Stack stack;

  printf("Digite um número decimal: ");
  scanf( "%d", &numero);

  //Realiza a conversão, empilhando os digitos
  while( numero > 0 ) {
    digito = numero % 2;
    stack = push(stack,digito);
    numero = numero / 2;
  }

  //Desempilha e imprime os digitos.
  while( !isEmpty(stack)) {
    digito = top(stack);
    stack = pop(stack);
    printf( "%d", digito);
  }
  printf( "\n");

  return 0;
}
