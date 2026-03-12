#include "Estudiante.h"   // Se incluye la clase Estudiante

int main() {

    // Crear un objeto de la clase Estudiante
    // Se envían los datos: nombre, matrícula y promedio
    Estudiante alumno1("Cesar Reynoso", "A12345", 85);

    // Llamar al método para mostrar los datos del estudiante
    alumno1.mostrarDatos();

    // Llamar al método que verifica si aprobó o reprobó
    alumno1.aprobo();

    return 0;   // Indica que el programa terminó correctamente
}