#include <stack>
#include <vector>
#include "programa.h"

class ProgFactorial : virtual public Programa {
    public:
        
        //Programa constructor para factorial
        ProgFactorial(InstruccionesPtr* read, InstruccionesPtr* add, InstruccionesPtr* write, InstruccionesPtr*push,  InstruccionesPtr* dup, InstruccionesPtr*jumpif,  InstruccionesPtr* mul, InstruccionesPtr* swap, InstruccionesPtr* over);
};         
