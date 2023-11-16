#ifndef BEBIDA_H
#define BEBIDA_H

#include <string>
#include <iostream>

using namespace std;

class Bebida {
private:
    string nombre;
    float precio;

public:
    Bebida(string nombre, float precio);

    string getNombre();
    float getPrecio();

    void setNombre(string nombre);
    void setPrecio(float precio);

    void preparar();
};

class BebidaCaliente : public Bebida {
public:
    BebidaCaliente(string nombre, float precio);

    void preparar();
};

class BebidaFria : public Bebida {
public:
    BebidaFria(string nombre, float precio);

    void preparar();
};

#endif
