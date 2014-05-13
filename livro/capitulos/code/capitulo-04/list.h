/**
 *	Retorna um iterador que aponta para o primeiro elemento da lista. 
 *	Tem complexidade O(1).
 */
Iterator getBegin(List list);

/**
 *	Retorna um iterador que aponta para o elemento após o último elemento da lista. 
 *	Tem complexidade O(n).
 */
Iterator getEnd(List list);

/**
 *	Adiciona um elemento no início da lista.
 * 	Tem complexidade O(1).
 */
List prepend(List list, Element newElement);

/**
 *	Adiciona um elemento imediatamente após o elemento apontado por it. 
 * 	Tem complexidade O(n).
 */
void insertAfter(Iterator it, Element newElement);

/**
 *	Remove o primeiro elemento da lista. 
 *	Tem complexidade O(1).
 */
List removeFirst(List list);

/**
 *	Remove o elemento imediatamente após o elemento apontado por it. 
 *	Tem complexidade O(n).
 */
void removeAfter(Iterator it);

/**
 *	Retorna 1 se a lista estiver vazia. 
 *	Possui uma implementação default.
 *	Tem complexidade O(n). 
 */
int isEmpty(List list);

/**
 *	Retorna o número de elementos da lista. 
 *	Possui uma implementação default. 
 *	Tem complexidade O(n).
 */
int getSize(List list);

/**
 *	Retorna o e-nésimo elemento da lista, contando a partir do 0. 
 *	Possui uma implementação default. 
 *	Tem complexidade O(n).
 */
Element getNth(List list, int n);

/**
 *	Altera o valor do e-nésimo elemento da lista, contando a partir do 0. 
 *	Possui uma implementação default. 
 *	Tem complexidade O(n).
 */
void setNth(List list, int n, Element newElement);