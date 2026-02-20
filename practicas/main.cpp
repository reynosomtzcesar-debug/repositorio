#include <iostream>
#include "Ventilador.h"

using namespace std;

int main() {
    Ventilador v;

    v.encender();
    v.subirVelocidad();
    v.subirVelocidad();
    v.mostrarEstado();

    v.bajarVelocidad();
    v.mostrarEstado();

    v.apagar();
    v.mostrarEstado();

    return 0;
}