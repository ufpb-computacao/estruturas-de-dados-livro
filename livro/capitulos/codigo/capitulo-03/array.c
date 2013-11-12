#include <stdio.h>


typedef int Element;

//Cria um arranjo de n elementos indexados de 0 a n - 1, inclusive. 
Element * makeArray(int n);


//Retorna o valor do elemento de índice index.
//O valor de index precisar estar no intervalo 0 <= index <= (n - 1)
Element getValueAt(Element *, int index);


//Altera o valor do elemento de índice index no arranjo para o valor newValue.
void setValueAt(Element *, int index, Element newValue);

int main() {

	int n[10];
	int i = 14;

	printf( "%d\n", n[i]);

	return 0;
	
}
