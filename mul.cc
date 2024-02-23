#include "mul.h"

Mul::Mul(std::stack<int> *pila, int *indice):InstruccionesPtr(pila, indice){};

// Ejecutar la instruccion () y actualizar su indice (PC).
void Mul::run() const{
    int a = this->pila->top();
    this->pila->pop();

    int b = this->pila->top();
    this->pila->pop();

    this->pila->push(a * b);
    
    *(this->indice) += 1; 
}
        
// Especifica su tipo de instruccion.
void Mul::print() const{
    std::cout << "mul" << std::endl;
}