#include "stack.c"
#include <stdio.h>

int main() {

  int number, digit;
  Stack stack;
  
  printf("Digite um número decimal: ");
  scanf( "%d", &number);

  //Realiza a conversão, empilhando os digitos
  while( number > 0 ) {
    digit = number % 2;
    stack = push(stack,digit);
    number = number / 2;
  }

  //Desempilha e imprime os digitos.
  while( !isEmpty(stack)) {
    digit = top(stack);
    stack = pop(stack);
    printf( "%d", digit);
  }
  printf( "\n");

  return 0;
}
