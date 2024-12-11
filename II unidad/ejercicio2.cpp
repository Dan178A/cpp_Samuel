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

    int tipoTriangulo = 0; // 0 para equilátero, 1 para isósceles, 2 para escaleno

    if (a == b && b == c) {
        tipoTriangulo = 0;
    } else if (a == b || b == c || a == c) {
        tipoTriangulo = 1;
    } else {
        tipoTriangulo = 2;
    }

    switch (tipoTriangulo) {
        case 0:
            cout << "El triángulo es equilátero (tiene los tres lados iguales)" << endl;
            break;
        case 1:
            cout << "El triángulo es isósceles (tiene dos lados iguales)" << endl;
            break;
        case 2:
            cout << "El triángulo es escaleno (tiene los lados desiguales)" << endl;
            break;
    }

    return 0;
}

