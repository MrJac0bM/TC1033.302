#ifndef BARTENDER_H
#define BARTENDER_H

#include "Cliente.h"
#include "Bebida.h"

class Bartender {
private:
    std::string nombre;
public:
    Bartender(std::string nombre) : nombre(nombre) {}
    void prepararBebida(Cliente& cliente, Bebida& bebida) {
        std::cout << "El bartender " << nombre << " está preparando la bebida.\n";
        cliente.ordenar(bebida);
    }

    // Métodos get y set
    std::string getNombre() { return nombre; }
    void setNombre(std::string nuevoNombre) { nombre = nuevoNombre; }
};

#endif

