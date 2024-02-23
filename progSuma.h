#include <stack>
#include <vector>
#include "programa.h"

class ProgSuma : virtual public Programa {

        
    public:    
        //Programa constructor para suma de dos números
        ProgSuma(InstruccionesPtr* read, InstruccionesPtr* add, InstruccionesPtr* write);
};         
