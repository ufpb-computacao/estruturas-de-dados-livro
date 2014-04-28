#include "viterator.c"
#include <stdlib.h>
#include <math.h>

/**
 *	Método auxiliar para a criação de um vector que possui capacidade inicial igual a 10.
 */
Vector createVector() {
	
	Vector vector;
	vector.data = (Element *) malloc(10 * sizeof(Element));
	vector.size = 0;
	vector.capacity = 16;
	
	return vector;
}

/**
 *	Retorna o número de elementos do vector. Tem complexidade O(1).
 */
int getSize(Vector *vector) {
	return vector->size;
}

/**
 *	Retorna 1 se o vector estiver vazio. Tem complexidade O(1). 
 */
int isEmpty(Vector *vector) {
	return getSize(vector) == 0;
}

/**
 *	Retorna o e-nésimo elemento do vector, contando a partir do 0. Tem complexidade O(1).
 */
Element getNth(Vector *vector, int n) {
	return vector->data[n];
}

/**
 *	Altera o valor do e-nésimo elemento do vector, contando a partir do 0. Tem complexidade O(1).
 */
void setNth(Vector *vector, int n, Element newElement) {
	vector->data[n] = newElement;
}	


/**
 *	Retorna um iterador de vector que aponta para o primeiro elemento do vector. 
 *	Tem complexidade O(1).
 */
V_Iterator getBegin(Vector *vector) {
	V_Iterator it;
	it.vector = vector;
	it.index = 0;
	return it;
}

/**
 *	Retorna um iterador que aponta para o elemento após o último elemento do vector. 
 *	Tem complexidade O(1).
 */
V_Iterator getEnd(Vector *vector) {
	V_Iterator it;
	it.vector = vector;
	it.index = vector->size;
	return it;
}

/**
 *	Método auxiliar para garantir que o vector sempre terá capacidade suficiente para acomodar a 
 *	inserção de um novo elemento
 */
void ensureCapacity(Vector *vector, int newCapacity) {

	//Se a capacidade atual for suficiente para acomodar o novo elemento não fazemos nada.
	if(vector->capacity >= newCapacity) return;  
	
	//Se a capacidade não for suficiente, devemos criar um novo arranjo.
	//O novo arranjo terá, no mínimo, o dobro da capacidade anterior.
	int cap = vector->capacity * 2;
	if(newCapacity > cap) cap = newCapacity;
	
	Element *newData = (Element *) malloc(cap * sizeof(Element));
	
	for( int i = 0; i < cap; i++)
		newData[i] = 0;
	
	//E copiar os elementos do arranjo antigo para o novo.
	for( int i = 0; i < vector->size; i++ )
		newData[i] = vector->data[i];
		
	//Liberar a memória utilizada para armazenar o antigo arranjo.
	free(vector->data);
	
	//E alterar o vector para utilizar o novo arranjo.
	vector->data = newData;
	
	//por fim, atualizamos a nova capacidade do vector.
	vector->capacity = cap;	
}

/**
 *      Adiciona um elemento imediatamente após o elemento apontado por it.
 *      Tem complexidade O(n).
 */
void insertAfter(V_Iterator *it, Element newElement) {
	//Garantindo que o vector pode receber um novo elemento.
	ensureCapacity(it->vector, it->vector->size + 1);
	
	//deslocando todos os elementos entre as posições index + 1 e size uma casa para a direita.
	for(int i = it->vector->size; i > it->index + 1; i-- )
		it->vector->data[i] = it->vector->data[i - 1];
			
	//Inseção do novo elemento na posição seguinte a apontada pelo Iterador
	it->vector->data[it->index+1] = newElement;
	
	//Atualizando o tamanho.
	it->vector->size++;
}

/**
 *      Remove o elemento imediatamente após o elemento apontado por it.
 *      Tem complexidade O(n).
 */
void removeAfter(V_Iterator *it) {

	//Deslocando todos os elementos entre as posições index + 1 e size uma casa para a esquerda
	for(int i = it->index + 1; i < it->vector->size - 1; i++ )
		it->vector->data[i] = it->vector->data[i + 1];
	
	//Atualizando o tamanho.
	it->vector->size--;
}


/**
 *	Adiciona um elemento no início do vector. 
 * 	Tem complexidade O(n).
 */
void prepend(Vector *vector, Element newElement){
	
	V_Iterator it = getBegin(vector);
	it.index--; //Faz o iterador apontar para o elemento localizado antes do primeiro elemento do vector
	insertAfter(&it, newElement);
	
}

/**
 *	Remove o primeiro elemento do vector. 
 *	Tem complexidade O(n).
 */
void removeFirst(Vector *vector) {
	V_Iterator it = getBegin(vector);
	it.index--;  //Aponta para o elemento antes do primeiro elemento do vector.
	removeAfter(&it);
}