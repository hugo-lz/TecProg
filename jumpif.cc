#include "jumpif.h"

Jumpif::Jumpif(std::stack<int> *pila, int *indice):InstruccionesPtr(pila, indice){
    this->l = l;
};

// Ejecutar la instruccion () y actualizar su indice (PC).
void Jumpif::run() const{
    
    if(this->pila->top() >= 0){
        this->indice = this-> l;
    }
    else{
        *(this->indice) += 1;
    }
    this->pila->pop();   
}
        
// Especifica su tipo de instruccion.
void Jumpif::print() const{
    std::cout << "jumpif" << std::endl;
}