#include <iostream>  
#include "Cocteleria.h"  

int main() { 
    Cocteleria cocteleria;  
    char opcion;  
    do {  
        cocteleria.abrirBar();  
        std::cout << "¿Deseas ordenar otra bebida? (s/n): ";  
        std::cin >> opcion;  
    } while (opcion == 's' || opcion == 'S');  

    std::cout << "Gracias por visitar nuestra coctelería. ¡Vuelve pronto!\n";  

    return 0;  
}

