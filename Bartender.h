#ifndef BARTENDER_H
#define BARTENDER_H

#include "Bebida.h"

class Bartender {
private:
    string nombre;

public:
    Bartender(string nombre);

    string getNombre();
    void setNombre(string nombre);

    void prepararBebida(Bebida& bebida);
};

#endif
