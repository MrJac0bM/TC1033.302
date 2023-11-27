#ifndef COCTELERIA_H
#define COCTELERIA_H

#include "Bartender.h"
#include "Cliente.h"

class Cocteleria {
private:
    Bartender bartender;
    Cliente cliente;
public:
    Cocteleria() : bartender("Juan") {}
    void abrirBar() {
        std::cout << "Bienvenido a la coctelería. ¿Qué tipo de bebida te gustaría? (1. Mojito, 2. Margarita, 3. Café Irlandés, 4. Chocolate Caliente): ";
        int opcion;
        std::cin >> opcion;

        bartender.prepararBebida(cliente, opcion);
    }
};

#endif
