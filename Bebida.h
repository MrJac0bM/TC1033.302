#ifndef BEBIDA_H
#define BEBIDA_H

#include <iostream>
#include <string>

// Clase base Bebida
class Bebida {
protected:
    std::string nombre;
    int liquido;

public:
    // Constructor de la clase Bebida
    Bebida(std::string nombre, int liquido) : nombre(nombre), liquido(liquido) {}

    // Método virtual puro para servir la bebida
    virtual void servir() = 0;

    // Métodos para verificar y modificar el líquido
    bool haySuficienteLiquido() { return liquido > 0; }
    void disminuirLiquido() { --liquido; }

    // Métodos get
    std::string getNombre() { return nombre; }
    int getLiquido() { return liquido; }

    // Métodos set
    void setNombre(std::string nuevoNombre) { nombre = nuevoNombre; }
    void setLiquido(int nuevoLiquido) { liquido = nuevoLiquido; }
};

// Clase derivada BebidaFria hereda de Bebida
class BebidaFria : public Bebida {
public:
    // Constructor de la clase BebidaFria
    BebidaFria(std::string nombre, int liquido) : Bebida(nombre, liquido) {}

    // Implementación del método virtual puro para servir la bebida fría
    void servir() override {
        if (haySuficienteLiquido()) {
            std::cout << "Sirviendo una bebida fría llamada " << nombre << ".\n";
            disminuirLiquido();
        } else {
            std::cout << "Lo siento, no hay suficiente líquido para preparar un " << nombre << ".\n";
        }
    }
};

// Clase derivada BebidaCaliente hereda de Bebida
class BebidaCaliente : public Bebida {
public:
    // Constructor de la clase BebidaCaliente
    BebidaCaliente(std::string nombre, int liquido) : Bebida(nombre, liquido) {}

    // Implementación del método virtual puro para servir la bebida caliente
    void servir() override {
        if (haySuficienteLiquido()) {
            std::cout << "Sirviendo una bebida caliente llamada " << nombre << ".\n";
            disminuirLiquido();
        } else {
            std::cout << "Lo siento, no hay suficiente líquido para preparar un " << nombre << ".\n";
        }
    }
};

#endif

