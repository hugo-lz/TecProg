#include "programa.h"



//Constructor de programa
Programa::Programa(){
    this->indice = 0;
};


//Imprime las instrucciones del programa
void Programa::listInstrucciones(){
    
    std::cout << "Programa: " << std::endl;
    for(int i = 0; i < this->instrucciones.size(); i++){
        this->instrucciones[i]->print();
    }
};

//Ejecuta las instrucciones del programa
void Programa::run(){
    std::cout << "Ejecución: " << std::endl;
    while((this->indice) < this->instrucciones.size()){
        this->instrucciones[(this->indice)]->run();
    }
};


//Destruye el programa
void Programa::destroy(){
    for(int i = 0; i < this->instrucciones.size(); i++){
        delete this->instrucciones[i];
    }
};
