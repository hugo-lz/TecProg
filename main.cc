#include "programa.h"
#include <iostream>
#include <string>


int main(int argc, char const *argv[]) {
    std::string eleccion;
    if (argc == 1) {
        std::cout << "No hay instrucciones, elige que quieres realizar:" << std::endl
        << "suma             cuenta_atras           factorial" << std::endl;
        return 1;
    
        std::cin >> eleccion;
    }
    else {
        eleccion = argv[1];
    }

    if (eleccion == "suma") {
        ProgSuma suma;
        Read* read = new Read(suma.pila, suma.indice);
        Add* add = new Add(suma.pila, suma.indice);
        Write* write = new Write(suma.pila, suma.indice);

        suma.instrucciones.push_back(read);
        suma.instrucciones.push_back(read);
        suma.instrucciones.push_back(add);
        suma.instrucciones.push_back(write);

        suma.listInstructions();
        suma.run();
        suma.destroy();
        destroy suma;
    }
    else if (eleccion == "cuenta_atras") {
        ProgCuentaAtras p;
        Read* read = new Read(p.pila, p.indice);
        Dup* dup = new Dup(p.pila, p.indice);
        Write* write = new Write(p.pila, p.indice);
        Push* push = new Push(p.pila, p.indice, -1);
        Add* add = new Add(p.pila, p.indice);
        Jumpif* jumpif = new Jumpif(p.pila, p.indice, 1);

        p.instrucciones.push_back(read);
        p.instrucciones.push_back(dup);
        p.instrucciones.push_back(write);
        p.instrucciones.push_back(push);
        p.instrucciones.push_back(add);
        p.instrucciones.push_back(dup);
        p.instrucciones.push_back(jumpif);

        p.listInstructions();
        p.run();
        p.destroy();
        destroy p;
    }
    else if (eleccion == "factorial") {
        ProgFactorial p;
        
        Push* push1 = new Push(p.pila, p.indice, 1);
        Read* read2 = new Read(p.pila, p.indice);
        Swap* swap3 = new Swap(p.pila, p.indice);
        Over* over4 = new Over(p.pila, p.indice);
        Mul* mul5 = new Mul(p.pila, p.indice);
        Swap* swap6 = new Swap(p.pila, p.indice);
        Push* push7 = new Push(p.pila, p.indice, -1);
        Add* add8 = new Add(p.pila, p.indice);
        Dup* dup9 = new Dup(p.pila, p.indice);
        Push* push10 = new Push(p.pila, p.indice, -2);
        Add* add11 = new Add(p.pila, p.indice);
        Jumpif* jumpif12 = new Jumpif(p.pila, p.indice, 2);
        Swap* swap13 = new Swap(p.pila, p.indice);
        Write* write14 = new Write(p.pila, p.indice);

        
        p.instrucciones.push_back(push1);
        p.instrucciones.push_back(read2);
        p.instrucciones.push_back(swap3);
        p.instrucciones.push_back(over4);
        p.instrucciones.push_back(mul5);
        p.instrucciones.push_back(swap6);
        p.instrucciones.push_back(push7);
        p.instrucciones.push_back(add8);
        p.instrucciones.push_back(dup9);
        p.instrucciones.push_back(push10);
        p.instrucciones.push_back(add11);
        p.instrucciones.push_back(jumpif12);
        p.instrucciones.push_back(swap13);
        p.instrucciones.push_back(write14);

        p.listInstructions();
        p.run();
        p.destroy();
        destroy p;

    }
    else {
        std::cout << "No se ha seleccionado ninguna operacion" << std::endl;
    }
    return 0;
}