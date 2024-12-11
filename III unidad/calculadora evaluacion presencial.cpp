#include <iostream>
using namespace std;

int main() 
{
setlocale(LC_ALL,"");
//declaracion.
    char operador;
    double num1, num2;
    string continuar = "no";
//menu de opciones
    do {
        cout << "Ingrese un operador (+, -, *, /): ";
        cin >> operador;

        cout << "Ingrese dos números: ";
        cin >> num1 >> num2;
//operaciones
        switch(operador) 
		{
		    case '+':
        //suma el n1 mas el n2 el resultado es la suma de n1 y n2. 
		        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;
            
			case '-':
        //resta el n1 menos el n2 el resultado es la resta de n1 y n2.    
			    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;
        //multiplica n1 por n2 el resultado es la multiplicacion de n1 y n2.
            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;
        //divide n1 por n2 el resultado es la division de n1 y n2.    
			case '/':
                if(num2 != 0)
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                else
                    cout << "Error: División por cero!" << endl;
                break;
            default:
                cout << "Error: Operador no válido" << endl;
                break;
        }

        cout << "¿Desea salir del programa? (si/no): ";
        cin >> continuar;
    } while (continuar != "si");

    return 0;
}

