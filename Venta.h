// Venta.h
#ifndef VENTA_H
#define VENTA_H
#include "Producto.h"
#include "Cliente.h"
#include <vector>
using namespace std;

class Venta {
private:
    Cliente cliente;
    vector<Producto*> productos;

public:
    Venta(Cliente cliente);

    // Métodos
    void agregarProducto(Producto* producto);
    Cliente getCliente();
    vector<Producto*> getProductos();
};

#endif // VENTA_H