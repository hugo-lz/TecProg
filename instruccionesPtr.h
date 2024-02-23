#include <stack>


class InstruccionesPtr
{

    protected:
        //Sería el puntero a la pila de programa
        std::stack<int> *pila;
        //Sería el pc, cada instrucción suma lo que corresponda a pc cuando acaba (las normales suman 1, las jump suman el valor que corresponda, etc.)
        int *indice;

    public: 
        InstruccionesPtr(std::stack<int> *pila, int *indice);

       ~InstruccionesPtr();

        // Ejecutar la instruccion () y actualizar su indice (PC).
        virtual void run() const;
        
        // Especifica su tipo de instruccion.
        virtual void print() const;

        // Devuelve el indice (PC) de la instrucción.
        int* getIndice();

        // Devuelve el puntero a la pila
        std::stack<int>* getPtr();

        //Constructor read
        
};