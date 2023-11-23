#ifndef COCTELERIA_H
#define COCTELERIA_H

#include "Bartender.h"
#include "Cliente.h"
#include "Bebida.h"

class Cocteleria {
private:
    Bartender bartender;
    Cliente cliente;
    BebidaFria mojito;
    BebidaFria margarita;
    BebidaCaliente cafeIrlandes;
    BebidaCaliente chocolateCaliente;
public:
    Cocteleria() : bartender("Juan"), mojito("Mojito", 5), margarita("Margarita", 5), cafeIrlandes("Café Irlandés", 5), chocolateCaliente("Chocolate Caliente", 5) {}
    void abrirBar() {
        std::cout << "Bienvenido a la coctelería. ¿Qué tipo de bebida te gustaría? (1. Mojito, 2. Margarita, 3. Café Irlandés, 4. Chocolate Caliente): ";
        int opcion;
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                bartender.prepararBebida(cliente, mojito);
                break;
            case 2:
                bartender.prepararBebida(cliente, margarita);
                break;
            case 3:
                bartender.prepararBebida(cliente, cafeIrlandes);
                break;
            case 4:
                bartender.prepararBebida(cliente, chocolateCaliente);
                break;
            default:
                std::cout << "Opción no válida.\n";
        }
    }
};

#endif
