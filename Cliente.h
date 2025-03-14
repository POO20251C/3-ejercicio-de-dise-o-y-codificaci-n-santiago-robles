// Cliente.h
#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include <vector>
using namespace std;

class Cliente {
private:
    string nombre;
    string id;
    vector<string> compras;

public:
    Cliente();
    Cliente(string nombre, string id);

    // Getters
    string getNombre();
    string getId();
    vector<string> getCompras();

    // Setters
    void setNombre(string nombre);
    void setId(string id);

    // Métodos
    void registrarCompra(string productoId);
};

#endif // CLIENTE_H