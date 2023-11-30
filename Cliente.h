#ifndef CLIENTE_H
#define CLIENTE_H

#include "Bebida.h"

// Clase Cliente
class Cliente {
public:
    // Método para ordenar una bebida
    void ordenar(Bebida& bebida) {
        bebida.servir(); // Llama al método servir de la bebida
    }
};

#endif

