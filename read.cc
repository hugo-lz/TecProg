#include "read.h"

Read::Read(std::stack<int> *pila, int *indice):InstruccionesPtr(pila, indice){};


void Read::run() const{
    int n;
    std::cin >> n;
    this->pila->push(n);
    *(this->indice) += 1;
};

void Read::print() const{
    std::cout << "read" << std::endl;
};