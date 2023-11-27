#ifndef BEBIDA_H
#define BEBIDA_H

#include <iostream>
#include <string>

// Clase Bebida
class Bebida {
protected:
    std::string nombre;
    int liquido;
public:
    Bebida(std::string nombre, int liquido) : nombre(nombre), liquido(liquido) {}
    virtual void servir() = 0;
    bool haySuficienteLiquido() { return liquido > 0; }
    void disminuirLiquido() { --liquido; }

    // Métodos get
    std::string getNombre() { return nombre; }
    int getLiquido() { return liquido; }

    // Métodos set
    void setNombre(std::string nuevoNombre) { nombre = nuevoNombre; }
    void setLiquido(int nuevoLiquido) { liquido = nuevoLiquido; }
};

// Clase BebidaFria hereda de Bebida
class BebidaFria : public Bebida {
public:
    BebidaFria(std::string nombre, int liquido) : Bebida(nombre, liquido) {}
    void servir() override {
        if (haySuficienteLiquido()) {
            std::cout << "Sirviendo una bebida fría llamada " << nombre << ".\n";
            disminuirLiquido();
        } else {
            std::cout << "Lo siento, no hay suficiente líquido para preparar un " << nombre << ".\n";
        }
    }
};

// Clase BebidaCaliente hereda de Bebida
class BebidaCaliente : public Bebida {
public:
    BebidaCaliente(std::string nombre, int liquido) : Bebida(nombre, liquido) {}
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

