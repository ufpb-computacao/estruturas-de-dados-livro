#include "node.h"
#include <stdlib.h>

/**
 *	Cria um nó com valor v e next como próximo nó
 */
Node* makeNode(Element v, Node *next) {
	Node *n = (Node *) malloc(sizeof(Node));
	n->value = v;
	n->next = next;	
	return n;	
}	

/** 
 *	Retorna o valor contido no nó n
 */
Element getValue(Node *n) {	
	return n->value;
}	

/**
 *	Retorna o apontador para o próximo nó
 */
Node* getNext(Node *n) {	
	return n->next;
}		

/**
 *	Altera o valor contido no nó n
 */
Node* setValue(Node *n, Element v) {
	n->value = v;
	return n;
}

/**
 *	Faz o apontador de próximo de nó n apontar para newNext
 */
Node* setNext(Node *n, Node *newNext) {	
	n->next = newNext;
	return n;
}