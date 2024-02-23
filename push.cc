#include "push.h"


Push::Push(std::stack<int> *pila, int *indice, int c):InstruccionesPtr(pila, indice){
    this->c = c;
};

// Ejecutar la instruccion () y actualizar su indice (PC).
void Push::run() const{
    
   this->pila->push(this->c);

    *(this->indice) += 1;
}
        
// Especifica su tipo de instruccion.
void Push::print() const{
    std::cout << "push" << std::endl;
}