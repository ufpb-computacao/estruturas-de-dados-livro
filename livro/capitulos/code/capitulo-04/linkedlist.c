#include "../capitulo-01/node.c"
#include "listiterator.c"
#include <stdlib.h>

/** Definição dos tipos LinkedList e LL_Iterator **/

#ifndef ELEMENT_T
#define ELEMENT_T 1
/**
 * Tipo básico de dado a ser armazenado na estrutura.
 */
typedef int Element;
#endif


#ifndef LL_ITEMTYPE
#define LL_ITEMTYPE 1
/**
 * Define o tipo de elemento a ser armazenado na lista encadeada
 */
typedef Node LL_ItemType;
#endif


#ifndef LINKEDLIST
#define LINKEDLIST 1
/**
 *  Define o tipo abstrato LinkedList
 */
typedef LL_ItemType* LinkedList;
#endif

#ifndef LL_ITERATOR
#define LL_ITERATOR 1
/**
 * Define o tipo abstrato LL_Iterator
 */
typedef LinkedList LL_Iterator;
#endif


/**
 * Retorna um iterador de lista (será definido em breve) que aponta 
 * para o primeiro elemento da lista. Tem complexidade O(1).
 */
LL_Iterator getBegin(LinkedList list) {
  LL_Iterator it = list;
  return it;
}

/**
 * Retorna um iterador que aponta para o elemento após o último 
 * elemento da lista. Tem complexidade O(1).
 */
LL_Iterator getEnd(LinkedList list) {
  return NULL;
}

/**
 * Adiciona um elemento no início da lista. 
 * Tem complexidade O(1).
 */
LinkedList prepend(LinkedList list, Element newElement) {	
	return makeNode(newElement,list);
}

/**
 * Adiciona um elemento imediatamente após o elemento apontado por it.
 * Tem complexidade O(1).
 */
void insertAfter(LL_Iterator it, Element newElement) {
  LL_ItemType* newItem = makeNode(newElement,it->next); 
  it->next = newItem;
}

/**
 * Remove o primeiro elemento da lista. 
 * Tem complexidade O(1).
 */
LinkedList removeFirst(LinkedList list) {
  LinkedList list0 = list;
  // apontador de cabeça da lista apontará para o próximo elemento
  list = list->next; 
  free(list0); // libera primeiro elemento
  return list;
}

/**
 * Remove o elemento imediatamente após o elemento apontado por it. 
 * Tem complexidade O(n).
 */
void removeAfter(LL_Iterator it) {
  LinkedList next_of_iterator = it->next;
  it->next = it->next->next; // liga anterior com o próximo do próximo
  free(next_of_iterator); // libera quem era o próximo de it
}

/**
 * Retorna 1 se a lista estiver vazia. Tem complexidade O(n). 
 */
int isEmpty(LinkedList list) {
  return getBegin(list) == getEnd(list);
}

/**
 * Retorna o número de elementos da lista. Tem complexidade O(n).
 */
int getSize(LinkedList list) {
  LL_Iterator it = getBegin(list);
  int size = 0;
  while( it != NULL) {
    moveNext(it);
    size++;
  }
  return size;
}

/**
 * Retorna o e-nésimo elemento da lista, contando a partir do 0. 
 * Tem complexidade O(n).
 */
Element getNth(LinkedList list, int n) {
  LL_Iterator it = getBegin(list);
  int i;
  for( it = 0; i < n; i++) {
    moveNext(it);
  }
  return getValue(it);
}

/**
 * Altera o valor do e-nésimo elemento da lista, contando a partir 
 * do 0. Tem complexidade O(n).
 */
void setNth(LinkedList list, int n, Element newElement) {
  LL_Iterator it = getBegin(list);
  int i;
  for( it = 0; i < n; i++) {
    moveNext(it);
  }
  setValue(it,newElement);
}
