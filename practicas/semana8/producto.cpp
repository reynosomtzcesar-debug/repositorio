#include "Producto.h"

// Constructor
Producto::Producto(string n, float p, int c)
{
    nombre = n;
    precio = p;
    cantidad = c;

    cout << ">> Producto creado correctamente.\n";
}

// Destructor
Producto::~Producto()
{
    cout << ">> Producto eliminado de memoria.\n";
}

// Mostrar información
void Producto::mostrar()
{
    cout << "\n--- PRODUCTO ---\n";
    cout << "Nombre: " << nombre << endl;
    cout << "Precio: $" << precio << endl;
    cout << "Cantidad: " << cantidad << endl;
}

// Modificar precio
void Producto::modificarPrecio(float nuevoPrecio)
{
    precio = nuevoPrecio;
    cout << ">> Precio actualizado.\n";
}

// Modificar cantidad
void Producto::modificarCantidad(int nuevaCantidad)
{
    cantidad = nuevaCantidad;
    cout << ">> Cantidad actualizada.\n";
}