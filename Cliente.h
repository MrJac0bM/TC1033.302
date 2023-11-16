#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>

using namespace std;

class Cliente {
private:
    string nombre;
    int edad;
    int id;

public:
    Cliente(string nombre, int edad, int id);
    
    string getNombre();
    int getEdad();
    int getId();

    void setNombre(string nombre);
    void setEdad(int edad);
    void setId(int id);

    void ordenarBebidaCaliente();
    void ordenarBebidaFria();
    void pagarCuenta();
};

#endif
