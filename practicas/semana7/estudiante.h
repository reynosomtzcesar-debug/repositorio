#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>
using namespace std;

class Estudiante {
private:
    string nombre;
    string matricula;
    float calificacion;

public:
    // Constructor
    Estudiante();

    // Métodos
    void registrarDatos(string n, string m, float c);
    void modificarCalificacion(float nuevaCal);
    void mostrarDatos();
    string calcularEstado();
};

#endif