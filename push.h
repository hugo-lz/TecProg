#include <iostream>
#include <string>
#include "instruccionesPtr.h"


class Push : public InstruccionesPtr {
    private:
        int c;
    public:
        Push(std::stack<int> *pila, int *indice, int c); 
        // Ejecutar la instruccion () y actualizar su indice (PC).
        virtual void run() const override;
        
        // Especifica su tipo de instruccion.
        virtual void print() const override;
};