#include "Tienda.h"
#include <iostream>
using namespace std;

int main() {
    Tienda tienda;

    // Agregar productos
    tienda.agregarProducto(Producto("P001", "Balón de fútbol", 20));
    tienda.agregarProducto(Producto("P002", "Raqueta de tenis", 15));
    tienda.agregarProducto(Producto("P003", "Pesas 10kg", 10));

    // Registrar clientes
    tienda.registrarCliente(Cliente("C001", "Juan Pérez"));
    tienda.registrarCliente(Cliente("C002", "María López"));

    // Mostrar productos
    cout << "Lista de productos:" << endl;
    tienda.mostrarProductos();

    // Realizar ventas
    tienda.registrarVenta("C001", "P001", 2); 
    tienda.registrarVenta("C001", "P002", 1); 
    tienda.registrarVenta("C002", "P003", 5); 

    // Consultar compras de un cliente
    cout << "\nCompras de Juan Pérez:" << endl;
    tienda.mostrarComprasCliente("C001");

    cout << "\nCompras de María López:" << endl;
    tienda.mostrarComprasCliente("C002");

    // Mostrar productos después de las ventas
    cout << "\nProductos después de las ventas:" << endl;
    tienda.mostrarProductos();

    return 0;
}
