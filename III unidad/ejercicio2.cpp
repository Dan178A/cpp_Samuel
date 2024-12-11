/*Ejercicio 2. Programa que permite al usuario ingresar los
montos de la compra de un cliente, se desconoce la cantidad
de datos que cargara, la cual puede cambiar en cada
ejecución, cortando el ingreso de los datos cuando el usuario
ingrese ceros, si ingresa un monto negativo no se debe
procesar y debe pedir que ingrese un monto nuevo, al
finalizar informar el total a pagar teniendo en cuenta que si las
ventas superan el total de 1000, se debe aplicar un 10% de
descuento 10% de descuento. Se debe usar la estructura do
while.*/

#include <iostream>
#include <locale.h>
#include <cmath>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main() 
{
    setlocale(LC_ALL, "");
	
	double monto, total = 0.0;
    
    do 
	{
     cout<<" Ingresa el monto de la compra (0 para terminar): ";
       cin>>monto;
        
        
        if(monto<0) 
		{
         cout<<" Monto no válido. Por favor, ingresa un monto positivo. "<<endl;
        } 
		
		else if (monto > 0) 
		{
         total+=monto; 
        }
        
    } 
	while(monto!=0);

    
    if(total>=1000) 
	{
      total*=0.90; 
    }

    cout<<" El total a pagar es: $ "<<total<<endl;
    Sleep(2000);
    system("CLS");
    
     cout << "**********************************" << endl;
    cout << "***** IUTA-AMPLIACION GUARENAS *****"<< endl;
    cout << "**********************************" << endl;
    cout << "__________________________________" << endl;
    cout << "**********************************" << endl;
    cout << "***** ALUMNO:                *****" << endl;
    cout << "** CEDULA DE IDENTIDAD: V-      **" << endl;
    cout << "**********************************" << endl;

    Sleep(1000);
	   system("CLS");
    
    
    return 0;
}

