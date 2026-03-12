#include "estudiante.h"   // Se incluye el archivo de cabecera de la clase

// Constructor: inicializa los atributos con los valores recibidos
Estudiante::Estudiante(string nombre, string matricula, float promedio) {
    this->nombre = nombre;        // Asigna el nombre recibido al atributo
    this->matricula = matricula;  // Asigna la matrícula recibida
    this->promedio = promedio;    // Asigna el promedio recibido
}

// Método que muestra los datos del estudiante en pantalla
void Estudiante::mostrarDatos() {
    cout << "Nombre: " << nombre << endl;
    cout << "Matricula: " << matricula << endl;
    cout << "Promedio: " << promedio << endl;
}

// Método que determina si el estudiante aprobó o reprobó
void Estudiante::aprobo() {

    // Si el promedio es mayor o igual a 70 el estudiante aprueba
    if(promedio >= 70) {
        cout << "Estado: Aprobo" << endl;
    } 
    // Si el promedio es menor a 70 el estudiante reprueba
    else {
        cout << "Estado: Reprobo" << endl;
    }

}