#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Ingrese la longitud del lado a en cm: ";
    cin >> a;
    cout << "Ingrese la longitud del lado b en cm: ";
    cin >> b;
    cout << "Ingrese la longitud del lado c en cm: ";
    cin >> c;

    cout << "Lados introducidos: a = " << a << " cm, b = " << b << " cm, c = " << c << " cm" << endl;

    int tipoTriangulo = 0; // 0 para equil�tero, 1 para is�sceles, 2 para escaleno

    if (a == b && b == c) {
        tipoTriangulo = 0;
    } else if (a == b || b == c || a == c) {
        tipoTriangulo = 1;
    } else {
        tipoTriangulo = 2;
    }

    switch (tipoTriangulo) {
        case 0:
            cout << "El tri�ngulo es equil�tero (tiene los tres lados iguales)" << endl;
            break;
        case 1:
            cout << "El tri�ngulo es is�sceles (tiene dos lados iguales)" << endl;
            break;
        case 2:
            cout << "El tri�ngulo es escaleno (tiene los lados desiguales)" << endl;
            break;
    }

    return 0;
}

