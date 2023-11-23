#ifndef CLIENTE_H
#define CLIENTE_H

#include "Bebida.h"

class Cliente {
public:
    void ordenar(Bebida& bebida) {
        bebida.servir();
    }
};

#endif
