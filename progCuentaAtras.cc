#include "progCuentaAtras.h"



//Programa constructor para cuenta atrás
ProgCuentaAtras::ProgCuentaAtras(InstruccionesPtr* read, InstruccionesPtr* add, InstruccionesPtr* write, InstruccionesPtr* push,  InstruccionesPtr* dup, InstruccionesPtr* jumpif){    
    instrucciones.push_back(read);
    instrucciones.push_back(dup);
    instrucciones.push_back(write);
    instrucciones.push_back(push);
    instrucciones.push_back(add);
    instrucciones.push_back(dup);
    instrucciones.push_back(jumpif);
}
