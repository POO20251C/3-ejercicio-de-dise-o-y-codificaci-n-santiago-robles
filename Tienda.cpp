// Tienda.cpp
#include "Tienda.h"

Tienda::Tienda() {}

void Tienda::registrarCliente(Cliente cliente) {
    clientes.push_back(cliente);
}

void Tienda::agregarProducto(Producto producto) {
    productos.push_back(producto);
}

Producto* Tienda::buscarProducto(string id) {
    for (auto &producto : productos) {
        if (producto.getId() == id) {
            return &producto;
        }
    }
    return nullptr;
}

Cliente* Tienda::buscarCliente(string id) {
    for (auto &cliente : clientes) {
        if (cliente.getId() == id) {
            return &cliente;
        }
    }
    return nullptr;
}

bool Tienda::realizarVenta(string clienteId, vector<string> productosIds) {
    Cliente* cliente = buscarCliente(clienteId);
    if (!cliente) return false;

    Venta venta(*cliente);
    for (string &productoId : productosIds) {
        Producto* producto = buscarProducto(productoId);
        if (!producto || producto->getStock() <= 0) {
            return false;
        }
        producto->disminuirStock(1);
        venta.agregarProducto(producto);
        cliente->registrarCompra(productoId);
    }
    ventas.push_back(venta);
    return true;
}

vector<Producto> Tienda::mostrarProductos() {
    return productos;
}

vector<string> Tienda::consultarComprasCliente(string clienteId) {
    Cliente* cliente = buscarCliente(clienteId);
    if (cliente) {
        return cliente->getCompras();
    }
    return {};
}