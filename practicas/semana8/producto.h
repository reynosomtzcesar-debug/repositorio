#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
using namespace std;

class Producto
{
private:
    string nombre;
    float precio;
    int cantidad;

public:
    // Constructor
    Producto(string n, float p, int c);

    // Destructor
    ~Producto();

    // Métodos
    void mostrar();
    void modificarPrecio(float nuevoPrecio);
    void modificarCantidad(int nuevaCantidad);
};

#endif