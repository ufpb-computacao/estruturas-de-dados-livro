/**
 *	Retorna o elemento da lista apontado por este iterador. Tem complexidade O(1).
 */
Element getElement(Iterator it);

/**
 *	Altera o valor do elemento apontado por este iterador. 
 *	Tem complexidade O(1).
 */
void setElement(Iterator it, Element newElement);

/**
 *	Faz o iterador apontar para o próximo elemento da lista. 
 *	Tem complexidade O(1).
 */
Iterator moveNext(Iterator it);

/**
 *	Retorna 1 se os dois iteradores apontam para o mesmo elemento da lista.
 *	Tem complexidade O(1).
 */
int equal(Iterator it0, Iterator it1);