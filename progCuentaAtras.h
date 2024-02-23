#include <stack>
#include <vector>
#include "programa.h"

class ProgCuentaAtras : virtual public Programa{
    private:
                
    public:
        
        //Programa constructor para cuenta atrás
        ProgCuentaAtras(InstruccionesPtr* read, InstruccionesPtr* add, InstruccionesPtr* write, InstruccionesPtr* push,  InstruccionesPtr* dup, InstruccionesPtr* jumpif);

};         
