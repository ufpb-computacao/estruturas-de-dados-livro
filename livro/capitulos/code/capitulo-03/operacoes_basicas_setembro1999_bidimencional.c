#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <assert.h>

typedef struct dia_ {
  bool feriado;
  int lua; // 0, 1=Nova, 2=Crescente, 3=Cheia, 4=Minguante
} Dia;

#ifndef ELEMENT_T
#define ELEMENT_T 1
typedef Dia Element;
#endif

#include "array.h"

int main(){

  Element * ano2000;
  
  // x é o mês
  // y é o dia
  
  Dia diaDoTrabalho;
  diaDoTrabalho.feriado = true;
  //setValueAt(...

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

