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

  // Ver http://www.webcid.com.br/?pg=calendario&ano=1999
  Element * setembro1999 = makeArray(31);
  
  Dia diaNormal;
  diaNormal.feriado = false;
  diaNormal.lua = 0;
  
  for(int i=1; i<=30; i++){
    setValueAt(setembro1999, i, diaNormal);
  }
  
  Dia diaDaIndependencia;
  diaNormal.feriado = true;
  setValueAt(setembro1999, 7, diaDaIndependencia);
  
  Dia diaDeLua;
  diaDeLua.lua = 3; // 2/7 lua crescente
  setValueAt(setembro1999, 2, diaDeLua);
  diaDeLua.lua = 3; // 10/7 lua cheia
  setValueAt(setembro1999, 10, diaDeLua);
  diaDeLua.lua = 4; // 17/7 lua minguante
  setValueAt(setembro1999, 17, diaDeLua);
  diaDeLua.lua = 1; // 24/7 lua nova
  setValueAt(setembro1999, 24, diaDeLua);

  Dia dia = getValueAt(setembro1999, 7);
  assert(dia.feriado);
  
  dia = getValueAt(setembro1999, 10);
  assert(dia.lua == 3);
  
  Dia dia9_9_99 = getValueAt(setembro1999, 9);
  assert(!dia9_9_99.feriado);
}

Element * makeArray(int n){
  return calloc(n, sizeof(Element));
}

Element getValueAt(Element * arranjo, int index){
  Element result;
  memcpy(&result, &arranjo[index], sizeof(Element));
  return result;
}

void setValueAt(Element * arranjo, int index, Element newValue){
  memcpy(&arranjo[index], &newValue, sizeof(Element));
}
