/** Definição dos tipos Vector e V_Iterator **/

#ifndef ELEMENT_T
#define ELEMENT_T 1
/**
 * Tipo básico de dado a ser armazenado na estrutura.
 */
typedef int Element;
#endif

#ifndef VECTOR
#define VECTOR 1
/**
 * Define o tipo abstrato Vector
 */
typedef struct {
  Element *data;    //Dados armazenados no vector
  int     size;     //Quantidade de dados armazenados
  int     capacity; //Capacidade máxima do vector
} Vector;
#endif

#ifndef V_ITERATOR
#define V_ITERATOR 1
/**
 * Define o tipo abstrato V_Iterator
 */
typedef struct {
  Vector *vector; //Referência ao vector associado
  int    index;   //Índice para acessos
} V_Iterator;
#endif

/**
 * Retorna o elemento do vector apontado por este iterador. 
 * Tem complexidade O(1).
 */
Element getElement(V_Iterator *it) {
  return it->vector->data[it->index];
}

/**
 * Altera o valor do elemento apontado por este iterador. 
 * Tem complexidade O(1).
 */
void setElement(V_Iterator *it, Element newElement) {
  it->vector->data[it->index] = newElement;
}

/**
 * Faz o iterador apontar para o próximo elemento da lista. 
 * Tem complexidade O(1).
 */
V_Iterator *moveNext(V_Iterator *it) {
  it->index++;
  return it;
}

/**
 * Retorna 1 se os dois iteradores apontam para o mesmo elemento 
 * do vector. Tem complexidade O(1).
 */
int equal(V_Iterator *it0, V_Iterator *it1) {
  return (it0->index  == it1->index) && (it0->vector == it1->vector);
}
