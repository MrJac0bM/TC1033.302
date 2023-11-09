/*Mi proyecto va a crear tres clases orientadas a el manejor de un bar un ejemplo seria que tipos
 de coteles y se le dara un precio ademas de que igual los instrumentos(3 instrumentos) 
se le dara un nombre y su precio para que al final pueda imprimir el tipo de coctel su costo y que herramientas se esta usando
*/
#include <string>
#include <iostream>

class Coctelera {
public:
    Coctelera(std::string nombre, double precio) : nombre(nombre), precio(precio) {}

    std::string getNombre() const {
        return nombre;
    }

    double getPrecio() const {
        return precio;
    }

    void setNombre(std::string nombre) {
        nombre = nombre; 
    }

    void setPrecio(double precio) {
        precio = precio; 
    }

    void agitar() const {
        std::cout << "Agitando con la coctelera: " << nombre << std::endl;
    }

private:
    std::string nombre;
    double precio;
};

class Coctel {
public:
    Coctel(std::string nombre, double precio) : nombre(nombre), precio(precio) {}

    std::string getNombre() const {
        return nombre;
    }

    double getPrecio() const {
        return precio;
    }

    void setNombre(std::string nombre) {
        nombre = nombre; 
    }

    void setPrecio(double precio) {
        precio = precio; 
    }

    void servir() const {
        std::cout << "Sirviendo el coctel: " << nombre << " - Precio: $" << precio << std::endl;
    }

private:
    std::string nombre;
    double precio;
};

class Colador {
public:
    Colador(std::string nombre, double precio) : nombre(nombre), precio(precio) {}

    std::string getNombre() const {
        return nombre;
    }

    double getPrecio() const {
        return precio;
    }

    void setNombre(std::string nombre) {
        nombre = nombre; 
    }

    void setPrecio(double precio) {
        precio = precio;
    }

    void colar() const {
        std::cout << "Colando con el colador: " << nombre << std::endl;
    }

private:
    std::string nombre;
    double precio;
};

