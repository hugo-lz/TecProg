#include "dup.h"

Dup::Dup(std::stack<int> *pila, int *indice):InstruccionesPtr(pila, indice){};
// Ejecutar la instruccion () y actualizar su indice (PC).
void Dup::run() const{
    
    int a = this->pila->top();
    this->pila->push(a);

    *(this->indice) += 1;
}
        
// Especifica su tipo de instruccion.
void Dup::print() const{
    std::cout << "dup" << std::endl;
}