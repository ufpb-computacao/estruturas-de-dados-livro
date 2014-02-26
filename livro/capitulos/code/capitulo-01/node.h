#ifndef NODE_H_
#define NODE_H_

typedef int Element; // <1>

typedef struct Node_ { //<2>
	Element value; // <3>
	struct Node_*	next; // <4>
} Node;

Node* makeNode(Element v, Node *next); // <5>
Element getValue(Node *n); // <6>
Node* getNext(Node *n); // <7>
Node* setValue(Node *n, Element v); // <8>
Node* setNext(Node *n, Node *newNext); // <9>

#endif
