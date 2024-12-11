/*Ejercicio 4. El IUTA realizara incremento en la matricula
dependiente del periodo

Académico donde se encuentre el estudiante (el trimestre),
que dando de la siguiente forma:
- Los nuevos ingresos tendrán un incremento del 75% en la
matricula
- Los del 2° Trimestre se incrementara en un 37%.
- Los del 3° Trimestre se incrementara en un 30%.
- Los del 4° Trimestre se incrementara en un 28%.
- Los del 5° Trimestre se incrementara en un 25%.
- Los del 6° Trimestre se incrementara en un 17%.
- Los del 7° Trimestre se incrementara en un 15%.
Premisas.
Debe introducir por teclado el monto de la matricula actual y
reflejar el total a cancelar del alumno según el periodo
académico en el que se esté inscribiendo en ese momento,
de igual manera mostrar el semestre a cursar.*/

#include <iostream>
using namespace std;

int main() 
{
    setlocale(LC_ALL,"");
	double matriculaActual;
    int trimestre;
    double incremento, totalAPagar;

    // Solicitar el monto de la matrícula actual
    cout << "Ingrese el monto de la matrícula actual: ";
    cin >> matriculaActual;

    // Solicitar el trimestre
    cout << "Ingrese el trimestre (1-7): ";
    cin >> trimestre;

    // Determinar el incremento según el trimestre
    switch (trimestre) {
        case 1:
            incremento = 0.75; // 75%
            cout << "Semestre a cursar: Nuevo ingreso" << endl;
            break;
        case 2:
            incremento = 0.37; // 37%
            cout << "Semestre a cursar: 2° Trimestre" << endl;
            break;
        case 3:
            incremento = 0.30; // 30%
            cout << "Semestre a cursar: 3° Trimestre" << endl;
            break;
        case 4:
            incremento = 0.28; // 28%
            cout << "Semestre a cursar: 4° Trimestre" << endl;
            break;
        case 5:
            incremento = 0.25; // 25%
            cout << "Semestre a cursar: 5° Trimestre" << endl;
            break;
        case 6:
            incremento = 0.17; // 17%
            cout << "Semestre a cursar: 6° Trimestre" << endl;
            break;
        case 7:
            incremento = 0.15; // 15%
            cout << "Semestre a cursar: 7° Trimestre" << endl;
            break;
        default:
            cout << "Trimestre no válido. Por favor, ingrese un número entre 1 y 7." << endl;
            return 1; // Salir del programa si el trimestre no es válido
    }

    // Calcular el total a pagar
    totalAPagar = matriculaActual * (1 + incremento);

    // Mostrar el total a pagar
    cout << "El total a cancelar del alumno es: " << totalAPagar << endl;

    return 0;
}
