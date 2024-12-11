/*Ejercicio 3. Escriba un programa en Lenguaje C++, con
estructura Switch Case, que solicite el ingreso de un número
del 1 al 9 y que muestre por pantalla el número seleccionado
en letras.*/

#include <iostream>

using namespace std;

int main() {
    int numero;

    // Solicitar el ingreso de un número del 1 al 9
    cout << "Ingrese un número del 1 al 9: ";
    cin >> numero;

    // Usar switch case para mostrar el número en letras
    switch (numero) {
        case 1:
            cout << "Uno" << endl;
            break;
        case 2:
            cout << "Dos" << endl;
            break;
        case 3:
            cout << "Tres" << endl;
            break;
        case 4:
            cout << "Cuatro" << endl;
            break;
        case 5:
            cout << "Cinco" << endl;
            break;
        case 6:
            cout << "Seis" << endl;
            break;
        case 7:
            cout << "Siete" << endl;
            break;
        case 8:
            cout << "Ocho" << endl;
            break;
        case 9:
            cout << "Nueve" << endl;
            break;
        default:
            cout << "Número fuera de rango. Por favor ingrese un número del 1 al 9." << endl;
            break;
    }

    return 0;
}
