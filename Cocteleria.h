#ifndef COCTELERIA_H
#define COCTELERIA_H

#include "Bartender.h"
#include "Cliente.h"

// Clase Cocteleria
class Cocteleria {
private:
    Bartender bartender; // Instancia de la clase Bartender
    Cliente cliente;     // Instancia de la clase Cliente
public:
    // Constructor de la clase Cocteleria
    Cocteleria() : bartender("Juan") {}

    // Método para abrir el bar y recibir pedidos
    void abrirBar() {
        // Mostrar mensaje de bienvenida y opciones al cliente
        std::cout << "Bienvenido a la coctelería. ¿Qué tipo de bebida te gustaría? (1. Mojito, 2. Margarita, 3. Café Irlandés, 4. Chocolate Caliente): ";
        
        // Leer la opción del cliente desde la entrada estándar
        int opcion;
        std::cin >> opcion;

        // Llamar al método prepararBebida del bartender para servir la bebida al cliente
        bartender.prepararBebida(cliente, opcion);
    }
};

#endif
