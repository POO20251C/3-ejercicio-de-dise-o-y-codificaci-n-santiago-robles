// Tienda.h
#ifndef TIENDA_H
#define TIENDA_H
#include "Cliente.h"
#include "Producto.h"
#include "Venta.h"
#include <vector>
using namespace std;

class Tienda {
private:
    vector<Cliente> clientes;
    vector<Producto> productos;
    vector<Venta> ventas;

public:
    Tienda();

    // Métodos
    void registrarCliente(Cliente cliente);
    void agregarProducto(Producto producto);
    Producto* buscarProducto(string id);
    Cliente* buscarCliente(string id);
    bool realizarVenta(string clienteId, vector<string> productosIds);
    vector<Producto> mostrarProductos();
    vector<string> consultarComprasCliente(string clienteId);
};

#endif // TIENDA_H
