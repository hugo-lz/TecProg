#include <iostream>
#include <string>
#include "instruccionesPtr.h"


class Mul : virtual public InstruccionesPtr {
    private:
    
    public:
        Mul::Mul(std::stack<int> *pila, int *indice);
        // Ejecutar la instruccion () y actualizar su indice (PC).
        virtual void run() const override;
        
        // Especifica su tipo de instruccion.
        virtual void print() const override;
};