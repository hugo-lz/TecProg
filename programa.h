#include <stack>
#include <vector>
#include "instruccionesPtr.h"


class Programa {
    private:

        using INSTR = std::vector<InstruccionesPtr*>;
        std::stack<int> pila;
        
    public:
        INSTR instrucciones;
        int indice=0;
        
        //COnstructor de programa
        Programa();
        virtual ~Programa()=default;

        //void puesto(int n, InstruccionesPtr* instruccion);
        void listInstrucciones();
        void run();
        void destroy();
};         
