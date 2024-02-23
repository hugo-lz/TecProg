#include "progSuma.h"


//Programa constructor para suma de dos números
ProgSuma::ProgSuma(InstruccionesPtr* read, InstruccionesPtr* add, InstruccionesPtr* write){
    instrucciones.push_back(read);
    instrucciones.push_back(read);
    instrucciones.push_back(add);
    instrucciones.push_back(write);
}

