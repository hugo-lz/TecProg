#include "write.h"

// Ejecutar la instruccion () y actualizar su indice (PC).
void Write::run() const{
    std::cout << this->pila->top() << std::endl;
    this->pila->pop();
    *(this->indice) += 1;
}
        
// Especifica su tipo de instruccion.
void Write::print() const{
    std::cout << "write" << std::endl;
}