#include "../capitulo-04/linkedlist.c"

#ifndef STACK_T
#define STACK_T 1

typedef LinkedList Stack;

#endif

/**
 * Insere um elemento no topo da pilha. Tem complexidade O(1).
 */
Stack push(Stack stack, Element item) {
  return prepend(stack,item);
}

/**
 * Retorna o elemento no topo da pilha sem removê-lo.
 * Tem complexidade O(1)
 */
Element top(Stack stack) {
  return getElement(getBegin(stack));
}

/**
 * Remove o elemento no topo da pilha. Tem complexidade O(1).
 */
Stack pop(Stack stack) {
  return removeFirst(stack);
}

/**
 * Retorna sempre 0 uma vez que esta implementação se baseia em uma
 * lista encadadeada.
 */
int isFull(Stack stack) {
  return 0;
}
