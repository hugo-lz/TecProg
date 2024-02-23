#include "progFactorial.h"

//Programa constructor para factorial
ProgFactorial::ProgFactorial(InstruccionesPtr* read, InstruccionesPtr* add, InstruccionesPtr* write, InstruccionesPtr*push,  InstruccionesPtr* dup, InstruccionesPtr*jumpif,  InstruccionesPtr* mul, InstruccionesPtr* swap, InstruccionesPtr* over){
    instrucciones.push_back(push);
    instrucciones.push_back(read);
    instrucciones.push_back(swap);
    instrucciones.push_back(over);
    instrucciones.push_back(mul);
    instrucciones.push_back(swap);
    instrucciones.push_back(push);
    instrucciones.push_back(add);
    instrucciones.push_back(dup);
    instrucciones.push_back(push);
    instrucciones.push_back(add);
    instrucciones.push_back(jumpif);
    instrucciones.push_back(swap);
    instrucciones.push_back(write);
}