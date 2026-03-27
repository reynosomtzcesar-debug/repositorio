#include "Producto.h"

int main()
{
    string nombre;
    float precio;
    int cantidad;

    cout << "Ingrese el nombre del producto: ";
    cin >> nombre;

    cout << "Ingrese el precio: ";
    cin >> precio;

    cout << "Ingrese la cantidad: ";
    cin >> cantidad;

    // Se crea el objeto (constructor)
    Producto producto(nombre, precio, cantidad);

    int opcion;

    do
    {
        cout << "\n===== MENU =====\n";
        cout << "1. Mostrar producto\n";
        cout << "2. Modificar precio\n";
        cout << "3. Modificar cantidad\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion)
        {
            case 1:
                producto.mostrar();
                break;

            case 2:
            {
                float nuevoPrecio;
                cout << "Nuevo precio: ";
                cin >> nuevoPrecio;
                producto.modificarPrecio(nuevoPrecio);
                break;
            }

            case 3:
            {
                int nuevaCantidad;
                cout << "Nueva cantidad: ";
                cin >> nuevaCantidad;
                producto.modificarCantidad(nuevaCantidad);
                break;
            }

            case 4:
                cout << "Saliendo...\n";
                break;

            default:
                cout << "Opcion invalida\n";
        }

    } while(opcion != 4);

    return 0;
}