#ifndef ELEMENT_T
#define ELEMENT_T 1
/**
 *	Tipo básico de dado a ser armazenado na estrutura.
 */
typedef int Element;
#endif


#ifndef NODE_T
#define NODE_T 1
/**
 *	Estrutura básica de um Nó
 */
typedef struct Node_ {
	Element		value;		//armazena o valor contido neste nó
	struct Node_*	next;		//apontador para o proximo nó; possivelmente null
} Node;
#endif

/**
 *	Cria um nó com valor v e next como próximo nó
 */
Node* makeNode(Element v, Node *next);  	

/**
 *	Retorna o valor contido no nó n
 */
Element getValue(Node *n);	

/**
 *	Retorna o apontador para o próximo nó
 */
Node* getNext(Node *n);		

/**
 *	Altera o valor contido no nó n
 */
Node* setValue(Node *n, Element v);	

/**
 *	Faz o apontador de próximo de nó n apontar para newNext
 */
Node* setNext(Node *n, Node *newNext);	
