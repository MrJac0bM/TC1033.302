// Definición de macros de inclusión condicional para evitar conflictos de declaración
#ifndef BARTENDER_H
#define BARTENDER_H

// Inclusión de encabezados necesarios
#include "Cliente.h"
#include "Bebida.h"

// Definición de la clase Bartender
class Bartender {
private:
    // Atributos de la clase Bartender
    std::string nombre;
    BebidaFria mojito;
    BebidaFria margarita;
    BebidaCaliente cafeIrlandes;
    BebidaCaliente chocolateCaliente;

public:
    // Constructor de la clase Bartender
    Bartender(std::string nombre) : nombre(nombre), mojito("Mojito", 5), margarita("Margarita", 5), cafeIrlandes("Café Irlandés", 5), chocolateCaliente("Chocolate Caliente", 5) {}

    // Método para preparar una bebida para un cliente
    void prepararBebida(Cliente& cliente, int opcion) {
        // Mensaje de preparación de bebida
        std::cout << "El bartender " << nombre << " está preparando la bebida.\n";

        // Switch para determinar la opción seleccionada y ordenar la bebida correspondiente
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
                // Mensaje de opción no válida
                std::cout << "Opción no válida.\n";
        }
    }

    // Métodos get y set para el atributo 'nombre'
    std::string getNombre() { return nombre; }
    void setNombre(std::string nuevoNombre) { nombre = nuevoNombre; }
};

// Fin de la definición condicional de macros
#endif

