#ifndef COCTELERIA_H
#define COCTELERIA_H

#include "Cliente.h"
#include "Bartender.h"

class Cocteleria {
private:
    Cliente clientes[10];
    Bartender bartenders[10];
    int numClientes;
    int numBartenders;

public:
    Cocteleria();

    void agregarCliente(const Cliente& cliente);
    void agregarBartender(const Bartender& bartender);
};

#endif

