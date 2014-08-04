#include "../capitulo-01/node.c"

#ifndef QUEUE_T
#define QUEUE_T 1

typedef struct {
  Node *head;
  Node *tail;
  int size;
} Queue;

#endif

/**
 * Retorna 1 se a fila estiver vazia e 0 caso contrário. Tem 
 * complexidade O(1)
 */
int isEmpty(Queue *queue) {
  return queue->size == 0;
}

/**
 * Insere um elemento no final da fila. Tem complexidade O(1)
 */
void enqueue(Queue *queue, Element item) {
  if(isEmpty(queue)) {
    queue->head = makeNode(item,NULL);
    queue->tail = queue->head;
  }
  else {
    Node *nn = makeNode(item,NULL);
    queue->tail->next = nn;
    queue->tail = nn;
  }
  queue->size++;
}

/**
 * Retorna o elemento na cabeça da fila sem removê-lo. 
 * Tem complexidade O(1)
 */
Element front(Queue *queue) {
  return getValue(queue->head);
}

/**
 * Remove o elemento na cabeça da fila. Tem complexidade O(1)
 */
Element dequeue(Queue *queue) {
  Element v = getValue(queue->head);
  Node *nn = queue->head;
  queue->head = queue->head->next;
  queue->size--;
  if(isEmpty(queue))
    queue->tail = queue->head;
  free(nn);
  return v;
}

/**
 * Retorna sempre 0 uma vez que esta implementação se baseia em uma 
 * lista encadadeada.
 */
int isFull(Queue *queue) {
  return 0;
}

/**
 * Retorna o número de elementos na fila. Tem compleidade O(1).
 */
int getSize(Queue *queue) {
  return queue->size;
}
