// Producto.h
#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
using namespace std;

class Producto {
private:
    string nombre;
    string id;
    int stock;

public:
    Producto();
    Producto(string nombre, string id, int stock);

    // Getters
    string getNombre();
    string getId();
    int getStock();

    // Setters
    void setNombre(string nombre);
    void setId(string id);
    void setStock(int stock);

    // Métodos
    void agregarStock(int cantidad);
    bool disminuirStock(int cantidad);
};

#endif // PRODUCTO_H