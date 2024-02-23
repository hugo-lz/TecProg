#include "instruccionesPtr.h"


InstruccionesPtr::InstruccionesPtr(std::stack<int> *pila, int *indice){
    this->pila = pila;
    this->indice = indice;
};

// Devuelve el indice (PC) de la instrucción.
int* InstruccionesPtr::getIndice(){
    return this->indice;
};

// Devuelve el puntero a la pila
std::stack<int>* InstruccionesPtr::getPtr(){
    return this->pila;
};

