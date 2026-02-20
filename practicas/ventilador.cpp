#include "Ventilador.h"

Ventilador::Ventilador() {
    velocidad = 0;
    encendido = false;
}

void Ventilador::encender() {
    encendido = true;
    velocidad = 1;
}

void Ventilador::apagar() {
    encendido = false;
    velocidad = 0;
}

void Ventilador::subirVelocidad() {
    if (encendido && velocidad < 3) {
        velocidad++;
    }
}

void Ventilador::bajarVelocidad() {
    if (encendido && velocidad > 1) {
        velocidad--;
    }
}

void Ventilador::mostrarEstado() {
    cout << "Encendido: " << (encendido ? "Sí" : "No") << endl;
    cout << "Velocidad: " << velocidad << endl;
}