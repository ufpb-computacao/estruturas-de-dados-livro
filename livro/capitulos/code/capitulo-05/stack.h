/**
 * Insere um elemento no topo da pilha. Tem complexidade O(1)
 */
Stack push(Stack stack, Element item);

/**
 * Retorna o elemento no topo da pilha sem removê-lo. Tem complexidade O(1)
 */
Element top(Stack stack);

/**
 * Remove o elemento no topo da pilha. Tem complexidade O(1)
 */
Stack pop(Stack stack);

/**
 * Retorna 1 se a pilha estiver vazia e 0 caso contrário. Tem complexidade O(1)
 */
int isEmpty(Stack stack);

/**
 * Retorna 1 se a pilha estiver completa e 0 caso contrário. Tem complexidade O(1)
 */
int isFull(Stack stack);

/**
 * Retorna o número de elementos na pilha. Tem compleidade O(n)
 */
int getSize(Stack stack);