#include "add.h"


Add::Add(std::stack<int> *pila, int *indice):InstruccionesPtr(pila, indice){};

// Ejecutar la instruccion () y actualizar su indice (PC).
void Add::run() const{

    if(!this->pila->empty()){

        int a = this->pila->top();
        this->pila->pop();

        int b = this->pila->top();
        this->pila->pop();

        this->pila->push(a + b);
        
        *(this->indice) += 1;
    } 
};
        
// Especifica su tipo de instruccion.
void Add::print() const{
    std::cout << "add" << std::endl;
};