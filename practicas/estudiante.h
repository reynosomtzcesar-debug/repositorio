#ifndef ESTUDIANTE_H   // Evita que el archivo se incluya más de una vez
#define ESTUDIANTE_H

#include <iostream>    // Librería para usar entrada y salida (cout, cin)
using namespace std;   // Permite usar cout, string, etc. sin escribir std::

class Estudiante {     // Declaración de la clase Estudiante

private:
    // Atributos privados del estudiante
    string nombre;     
    string matricula;  
    float promedio;    

public:
    // Constructor de la clase que recibe nombre, matrícula y promedio
    Estudiante(string nombre, string matricula, float promedio);

    // Método para mostrar los datos del estudiante
    void mostrarDatos();

    // Método para verificar si el estudiante aprobó o reprobó
    void aprobo();

};

#endif   // Fin de la protección del archivo