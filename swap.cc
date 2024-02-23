#include "swap.h"


Swap::Swap(std::stack<int> *pila, int *indice):InstruccionesPtr(pila, indice){};

// Ejecutar la instruccion () y actualizar su indice (PC).
void Swap::run() const{
    int a = this->pila->top();
    this->pila->pop();

    int b = this->pila->top();
    this->pila->pop();

    this->pila->push(a);
    this->pila->push(b);
    
    *(this->indice) += 1; 
}
        
// Especifica su tipo de instruccion.
void Swap::print() const{
    std::cout << "swap" << std::endl;
}