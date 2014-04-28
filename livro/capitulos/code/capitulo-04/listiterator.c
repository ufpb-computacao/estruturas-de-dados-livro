#include "../capitulo-01/node.h"

/** Definição dos tipos LinkedList e LL_Iterator **/

#ifndef ELEMENT_T
#define ELEMENT_T 1
/**
 *	Tipo básico de dado a ser armazenado na estrutura.
 */
typedef int Element;
#endif


#ifndef LL_ITEMTYPE
#define LL_ITEMTYPE 1
/**
 *	Define o tipo de elemento a ser armazenado na lista encadeada
 */
typedef Node LL_ItemType;
#endif


#ifndef LINKEDLIST
#define LINKEDLIST 1
/**
 * 	Define o tipo abstrato LinkedList
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
 *	Retorna o elemento da lista apontado por este iterador. Tem complexidade O(1).
 */
Element getElement(LL_Iterator it) {
	return getValue(it);
}

/**
 *	Altera o valor do elemento apontado por este iterador. 
 *	Tem complexidade O(1).
 */
void setElement(LL_Iterator it, Element newElement) {
	setValue(it, newElement);
}

/**
 *	Faz o iterador apontar para o próximo elemento da lista. 
 *	Tem complexidade O(1).
 */
LL_Iterator moveNext(LL_Iterator it) {
	return getNext(it);
}

/**
 *	Retorna 1 se os dois iteradores apontam para o mesmo elemento da lista.
 *	Tem complexidade O(1).
 */
int equal(LL_Iterator it0, LL_Iterator it1) {
	return it0 == it1;
}