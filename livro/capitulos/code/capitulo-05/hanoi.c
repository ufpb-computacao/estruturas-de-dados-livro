#include <stdio.h>

/**
 * Solução recursiva para o problema das Torres de Hanoi.
 * Move n discos da torre SOURCE para a torre DEST, usando INTERM 
 * como intermediário.
 */
void hanoi(int n, char source, char dest, char interm) {
  if( n > 0 ) {
    hanoi(n - 1, source, interm, dest);
    printf("Move disco de %c para %c\n", source, dest); 
    hanoi(n - 1, interm, dest, source);
  }
}

int main() {
  hanoi(3, 'A', 'C', 'B');
  return 0;
}
