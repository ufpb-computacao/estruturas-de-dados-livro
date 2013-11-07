#import <stdlib.h>

typedef int Element;

typedef struct Node_ {
	Element			value;		//armazena o valor contido neste nó
	struct Node_*	next;		//apontador para o proximo nó; possivelmente null
} Node;

//Cria um nó com valor v e next como próximo nó
Node* makeNode(Element v, Node *next);  	

//Retorna o valor contido no nó n
Element getValue(Node *n);	

//Retorna o apontador para o próximo nó
Node* getNext(Node *n);		

//Altera o valor contido no nó n
Node* setValue(Node *n, Element v);	

//Faz o apontador de próximo de nó n apontar para newNext
Node* setNext(Node *n, Node *newNext);	


//Cria um nó com valor v e next como próximo nó
Node* makeNode(Element v, Node *next) {
	Node *n = (Node *) malloc(sizeof(Node));
	n->value = v;
	n->next = next;	
	return n;	
}	

//Retorna o valor contido no nó n
Element getValue(Node *n) {	
	return n->value;
}	

//Retorna o apontador para o próximo nó
Node* getNext(Node *n) {	
	return n->next;
}		

//Altera o valor contido no nó n
Node* setValue(Node *n, Element v) {
	n->value = v;
	return n;
}

//Faz o apontador de próximo de nó n apontar para newNext
Node* setNext(Node *n, Node *newNext) {	
	n->next = newNext;
	return n;
}



	 

