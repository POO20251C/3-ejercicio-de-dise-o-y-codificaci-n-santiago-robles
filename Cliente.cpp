// Cliente.cpp
#include "Cliente.h"

Cliente::Cliente() : nombre(""), id("") {}
Cliente::Cliente(string nombre, string id) : nombre(nombre), id(id) {}

string Cliente::getNombre() { return nombre; }
string Cliente::getId() { return id; }
vector<string> Cliente::getCompras() { return compras; }

void Cliente::setNombre(string nombre) { this->nombre = nombre; }
void Cliente::setId(string id) { this->id = id; }

void Cliente::registrarCompra(string productoId) {
    compras.push_back(productoId);
}