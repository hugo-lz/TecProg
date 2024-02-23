#include <iostream>
#include <string>
#include "instruccionesPtr.h"

class Read : virtual public InstruccionesPtr {
    private:

    public:
    Read(std::stack<int> *pila, int *indice);
    virtual void run() const override;
    virtual void print() const override;
    
};