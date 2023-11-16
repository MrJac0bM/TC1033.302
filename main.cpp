#include "Cliente.h"
#include "Bebida.h"
#include "Bartender.h"
#include "Cocteleria.h"
#include <iostream>

using namespace std;

int main() {
    // Crear varios clientes
    Cliente cliente1("Juan", 30, 1);
    Cliente cliente2("Maria", 25, 2);
    Cliente cliente3("Carlos", 28, 3);

    // Crear varias bebidas
    BebidaCaliente bebidaCaliente1("Café", 1.5);
    BebidaFria bebidaFria1("Cerveza", 2.0);
    BebidaCaliente bebidaCaliente2("Té", 1.2);

    // Crear un bartender
    Bartender bartender1("Pedro");

    // Crear la Cocteleria
    Cocteleria cocteleria;

    // Agregar clientes y bartender a la Cocteleria
    cocteleria.agregarCliente(cliente1);
    cocteleria.agregarCliente(cliente2);
    cocteleria.agregarCliente(cliente3);
    cocteleria.agregarBartender(bartender1);

    // Realizar acciones con los clientes y el bartender
    cliente1.ordenarBebidaCaliente();
    bartender1.prepararBebida(bebidaCaliente1);

    cliente2.ordenarBebidaFria();
    bartender1.prepararBebida(bebidaFria1);

    cliente3.ordenarBebidaCaliente();
    bartender1.prepararBebida(bebidaCaliente2);

    return 0;
}

