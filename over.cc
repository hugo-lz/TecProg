#include "over.h"

Over::Over(std::stack<int> *pila, int *indice):InstruccionesPtr(pila, indice){};

// Ejecutar la instruccion () y actualizar su indice (PC).
void Over::run() const{
    int a = this->pila->top();
    this->pila->pop();

    int b = this->pila->top();
    this->pila->pop();

    this->pila->push(b);
    this->pila->push(a);
    this->pila->push(b);
    
    *(this->indice) += 1; 
}
        
// Especifica su tipo de instruccion.
void Over::print() const{
    std::cout << "over" << std::endl;
}