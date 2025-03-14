// Producto.cpp
#include "Producto.h"

Producto::Producto() : nombre(""), id(""), stock(0) {}
Producto::Producto(string nombre, string id, int stock) : nombre(nombre), id(id), stock(stock) {}

string Producto::getNombre() { return nombre; }
string Producto::getId() { return id; }
int Producto::getStock() { return stock; }

void Producto::setNombre(string nombre) { this->nombre = nombre; }
void Producto::setId(string id) { this->id = id; }
void Producto::setStock(int stock) { this->stock = stock; }

void Producto::agregarStock(int cantidad) { stock += cantidad; }
bool Producto::disminuirStock(int cantidad) {
    if (stock >= cantidad) {
        stock -= cantidad;
        return true;
    }
    return false;
}
