/**
 * Insere um elemento no final da fila . Tem complexidade O(1)
 */
void enqueue(Queue *queue, Element item);

/**
 * Retorna o elemento na cabeça da fila sem removê-lo. 
 * Tem complexidade O(1).
 */
Element front(Queue *queue);

/**
 * Remove o elemento na cabeça da fila. Tem complexidade O(1).
 */
Element dequeue(Queue *queue);

/**
 * Retorna 1 se a fila estiver vazia e 0 caso contrário. 
 * Tem complexidade O(1).
 */
int isEmpty(Queue *queue);

/**
 * Retorna 1 se a fila estiver completa e 0 caso contrário. 
 * Tem complexidade O(1).
 */
int isFull(Queue *queue);

/**
 * Retorna o número de elementos na fila. Tem compleidade O(1).
 */
int getSize(Queue *queue);
