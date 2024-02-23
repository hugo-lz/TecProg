#include <iostream>
#include <string>
#include "instruccionesPtr.h"


class Swap : public InstruccionesPtr {
    private:
    
    public:
        Swap::Swap(std::stack<int> *pila, int *indice);
        // Ejecutar la instruccion () y actualizar su indice (PC).
        virtual void run() const override;
        
        // Especifica su tipo de instruccion.
        virtual void print() const override;
};