#ifndef BARTENDER_H
#define BARTENDER_H

#include "Cliente.h"
#include "Bebida.h"

class Bartender {
private:
    std::string nombre;
    BebidaFria mojito;
    BebidaFria margarita;
    BebidaCaliente cafeIrlandes;
    BebidaCaliente chocolateCaliente;
public:
    Bartender(std::string nombre) : nombre(nombre), mojito("Mojito", 5), margarita("Margarita", 5), cafeIrlandes("Café Irlandés", 5), chocolateCaliente("Chocolate Caliente", 5) {}
    void prepararBebida(Cliente& cliente, int opcion) {
        std::cout << "El bartender " << nombre << " está preparando la bebida.\n";
        switch (opcion) {
            case 1:
                cliente.ordenar(mojito);
                break;
            case 2:
                cliente.ordenar(margarita);
                break;
            case 3:
                cliente.ordenar(cafeIrlandes);
                break;
            case 4:
                cliente.ordenar(chocolateCaliente);
                break;
            default:
                std::cout << "Opción no válida.\n";
        }
    }

    // Métodos get y set
    std::string getNombre() { return nombre; }
    void setNombre(std::string nuevoNombre) { nombre = nuevoNombre; }
};

#endif
