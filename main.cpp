/*Mi proyecto va a crear tres clases orientadas a el manejor de un bar un ejemplo seria que tipos
 de coteles y se le dara un precio ademas de que igual los instrumentos(3 instrumentos) 
se le dara un nombre y su precio para que al final pueda imprimir el tipo de coctel su costo y que herramientas se esta usando
*/
#include <iostream>
#include "Bar.h"
using namespace std;

int main() {
  
    Coctel coctel1("Margarita", 7.50);
    Coctel coctel2("Cosmopolitan", 8.50);
    Coctel coctel3("Pina Colada", 6.50);
    Coctel coctel4("Daiquiri", 7.00);
    Coctel coctel5("Mojito", 8.00);
  
    Coctelera coctelera1("Coctelera Mágica", 12.99);
    Coctelera coctelera2("Coctelera Fantástica", 11.99);
    Coctelera coctelera3("Coctelera de Ensueño", 14.99);
    Coctelera coctelera4("Coctelera Especial", 13.99);
    Coctelera coctelera5("Coctelera de Lujo", 16.99);

    Colador colador1("Colador Supremo", 7.99);
    Colador colador2("Colador Mágico", 6.99);
    Colador colador3("Colador Profesional", 9.99);
    Colador colador4("Colador Rápido", 8.99);
    Colador colador5("Colador Deluxe", 10.99);

    // Imprime información si quisiera imprimir un objeto diferente solo cambiar el numero "coctel"+num o coctelera+num
    std::cout << "Coctel: " << coctel2.getNombre() << " - Precio: $" << coctel2.getPrecio() << std::endl;
    std::cout << "Coctelera: " << coctelera2.getNombre() << " - Precio: $" << coctelera2.getPrecio() << std::endl;
    std::cout << "Colador: " << colador2.getNombre() << " - Precio: $" << colador2.getPrecio() << std::endl;

    return 0;
}
