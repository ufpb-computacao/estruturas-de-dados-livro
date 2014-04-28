/**
 *	Retorna 1 se a lista estiver vazia. Tem complexidade O(1). 
 */
int isEmpty(List list) {
	return getBegin(list) == getEnd(list);
}

/**
 *	Retorna o número de elementos da lista. Tem complexidade O(n).
 */
int getSize(List list) {
	Iterator it = getBegin(list);
	int size = 0;
	while( it != NULL) {
		moveNext(it);
		size++;
	}
	return size;
}

/**
 *	Retorna o e-nésimo elemento da lista, contando a partir do 0. Tem complexidade O(n).
 */
ItemType getNth(List list, int n) {
	Iterator it = getBegin(list);
	int i;
	for( i = 0; i < n; i++) {
		moveNext(it);
	}
	return getValue(it);
}

/**
 *	Altera o valor do e-nésimo elemento da lista, contando a partir do 0. Tem complexidade O(n).
 */
void setNth(List list, int n, ItemType newItem) {	
	Iterator it = getBegin(list);
	int i;
	for( it = 0; i < n; i++) {
		moveNext(it);
	}
	setValue(it,newItem);
}