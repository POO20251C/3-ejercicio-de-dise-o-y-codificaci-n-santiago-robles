// Venta.cpp
#include "Venta.h"

Venta::Venta(Cliente cliente) : cliente(cliente) {}

void Venta::agregarProducto(Producto* producto) {
    productos.push_back(producto);
}

Cliente Venta::getCliente() { return cliente; }
vector<Producto*> Venta::getProductos() { return productos; }