#include <iostream>
#include <string>
#include "instruccionesPtr.h"


class Jumpif : virtual public InstruccionesPtr {
    private:
    int l;
    public:
        Jumpif::Jumpif(std::stack<int> *pila, int *indice, int l);
        // Ejecutar la instruccion () y actualizar su indice (PC).
        virtual void run() const override;
        
        // Especifica su tipo de instruccion.
        virtual void print() const override;
};