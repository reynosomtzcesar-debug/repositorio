#ifndef VENTILADOR_H
#define VENTILADOR_H

#include <iostream>
using namespace std;

class Ventilador {
private:
    int velocidad;
    bool encendido;

public:
    Ventilador();          // Constructor
    void encender();
    void apagar();
    void subirVelocidad();
    void bajarVelocidad();
    void mostrarEstado();
};

#endif