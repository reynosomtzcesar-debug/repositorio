#include "Estudiante.h"

// Constructor
Estudiante::Estudiante() {
    nombre = "";
    matricula = "";
    calificacion = 0;
}

// Registrar datos
void Estudiante::registrarDatos(string n, string m, float c) {
    nombre = n;
    matricula = m;
    calificacion = c;
}

// Modificar calificación
void Estudiante::modificarCalificacion(float nuevaCal) {
    calificacion = nuevaCal;
}

// Mostrar datos
void Estudiante::mostrarDatos() {
    cout << "\n--- Datos del estudiante ---" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Matricula: " << matricula << endl;
    cout << "Calificacion: " << calificacion << endl;
}

// Calcular estado (retorno)
string Estudiante::calcularEstado() {
    if (calificacion >= 70) {
        return "Aprobado";
    } else {
        return "Reprobado";
    }
}