/*Haciendo uso de la estructura Swich.
3er Ejercicio
Realice un programa que simule una cajero electr�nico, este cajero utiliza
moneda extranjera ($), el usuario posee en su cuenta un saldo a su favor de
$1.250., al inicio muestra un mensaje de bienvenida y un men� de opciones para
consulta de saldo, retiro de fondo, deposito en efectivo, y la opci�n de salir del
sistema.
Premisas.
*Si el usuario realiza consulta, debe reflejar por pantalla el saldo en $.

*Si el usuario realiza un retiro de fondo, debe reflejar el monto retirado y el saldo
disponible en cuenta. Pero si el monto excede debe mostrar un mensaje de saldo
insuficiente
*Si el usuario realiza un dep�sito, se debe reflejar el monto depositado m�s el
monto actual donde se suma dicho dep�sito.
*si el usuario introduce una opci�n incorrecta, debe emitir un mensaje de error,
volviendo al men� de opciones.
*El usuario solo podr� salir del sistema cuando pulse la opci�n de salir, mostrando
un mensaje donde se agradece por uso del cajero electr�nico. De lo contrario,
debe volver al men� de opciones.*/

#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main() 
{
 setlocale(LC_ALL, "spanish");
double saldo = 1250.0;
int opcion;
double monto;

    while (true) 
{
cout<<"*******************************"<<endl;
cout<<"***** BIENVENIDO AL CAJERO *****"<<endl;
cout<<"*******************************"<<endl;
cout<<"1. Consultar saldo"<<endl;
cout<<"2. Retirar fondos"<<endl;
cout<<"3. Depositar efectivo"<<endl;
cout<<"4. Salir del sistema"<<endl;
cout<<"Seleccione una opci�n: ";
cin>>opcion;
system("CLS");
switch (opcion) 
{
case 1:
cout<<"Su saldo actual es: $"<<saldo<<endl;
break;
            
case 2:
cout<<"Ingrese el monto a retirar: $";
cin >> monto;
if (monto > saldo) 
{
cout << "Saldo insuficiente." << endl;
} 
else 
{
saldo-= monto;
cout << "Monto retirado: $" << monto << endl;
cout << "Saldo disponible: $" << saldo << endl;
}
break;
        
case 3:
cout << "Ingrese el monto a depositar: $";
cin >> monto;
saldo += monto;
cout << "Monto depositado: $" << monto << endl;
cout << "Saldo disponible: $" << saldo << endl;
break;
            
case 4:
cout << "Gracias por usar el cajero electr�nico. �Hasta luego!" << endl;
	
	system("CLS");
	cout<<"**********************************"<<endl;
	cout<<"*****IUTA-AMPLIACION GUARENAS*****"<<endl;
	cout<<"**********************************"<<endl;
	cout<<"__________________________________"<<endl;
	cout<<"**********************************"<<endl;
	cout<<"*****ALUMNO: SEBASTIAN TERRAZA****"<<endl;
	cout<<"**CEDULA DE IDENTIDAD: V-31.759.027**"<<endl;
	cout<<"**********************************"<<endl;
	system("pause");
	system("CLS");
return 0;
 default:
cout << "Opci�n incorrecta. Intente nuevamente." << endl;
        }
    }
}
	

