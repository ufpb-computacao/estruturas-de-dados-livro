#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

typedef struct dia_ {
  bool feriado;
  int temperatura; // adicionado 
} Dia;

#ifndef ELEMENT_T
#define ELEMENT_T 1
typedef Dia Element;
#endif

#include "array.h"

int main(){

  Element * setembro1999; // unidimencional
  Element * ano2000; // bidimencional: x é o mês, y é o dia

  // NOTE: O valor da temperatura será utilizada nas consultas
  

// a. Encontrar o menor elemento de um arranjo unidimensional

    // Preenchar os valores para o array unidimencional (setembro1999)
    
    // Invoque sua função para encontrar o dia com a Menor temperatura

// b. Encontrar o maior elemento de um arranjo bi-dimensional

    // Preenchar os valores para o array bidimencional (ano2000)
    
    // Invoque sua função para encontrar o dia com a Maior temperatura


// c. Encontrar o índice de um elemento de arranjo unidimensional
// (retornando -1 se o elemento não for encontrado).

    // Encontre o dia de uma temperatura dada;
    // int temperaturaQueProcuramos = 27;

}

Element * makeArray(int n){
  return NULL;
}

Element getValueAt(Element * arranjo, int index){
  Element result;
  return result;
}

void setValueAt(Element * arranjo, int index, Element newValue){
  
}

// Acesso bidimencional

Element getValueAt(Element * arranjo, int x, int y){
  Element result;
  return result;
}

void setValueAt(Element * arranjo, int x, int y, Element newValue){
  
}


/**
* Encontra o menor elemento de um arranjo unidimensional
*/


/**
* Encontra o maior elemento de um arranjo bi-dimensional
*/


/**
* Encontra o índice de um elemento de arranjo unidimensional 
*/


