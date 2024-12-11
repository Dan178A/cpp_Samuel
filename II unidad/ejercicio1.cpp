/*Haciendo uso de la estructura If- Else If.
1er Ejercicio
Se desea calcular el salario neto semanal de un trabajador en función de su
número de horas trabajadas y la tasa de impuestos:
- Las primeras 35H = 800 Bs
- Después de 35h = por 1.5 de la tarifa
Las tasas de Impuestos son:
a) Los primeros 60.000 Bs. son libres de impuestos
b) Los siguientes 40.000 Bs tienen un 25% de impuestos
c) Los restantes, un 45% de impuestos
La Tarifa horaria es de 800 Bs
Se desea escribir el nombre, el salario bruto, luego la tasa y luego el salario neto*/

#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main()
{
     setlocale(LC_ALL, "spanish");
	cout<<"*******************************"<<endl;
	cout<<"*****BIENVENIDO AL SISTEMA*****"<<endl;
	cout<<"*******************************"<<endl;
	cout<<"_______________________________"<<endl;
	cout<<endl;

 string nombre;
 
 int horas_trabajadas, tarifa_hora = 800, salario_bruto, salario_neto, impuestos = 0;
 
cout<<"Por favor, introduzca su nombre: ";
cin>>nombre;

cout<<"Por favor, introduzca el número de horas trabajadas: ";
cin>>horas_trabajadas;
	

if (horas_trabajadas <= 35) 
{
salario_bruto = horas_trabajadas * tarifa_hora;
} 
	
else 
{
salario_bruto = (35 * tarifa_hora) + ((horas_trabajadas - 35) * tarifa_hora * 1.5);
}
	
if (salario_bruto > 100000) 
{
impuestos = (salario_bruto - 100000) * 45 / 100 + (40000 * 25 / 100);
} 

else if (salario_bruto > 60000) 
{
impuestos = (salario_bruto - 60000) * 25 / 100;
}	
	
salario_neto = salario_bruto - impuestos;

    cout << "\nNombre: " << nombre << endl;
    cout << "Salario Bruto: " << salario_bruto << " Bs" << endl;
    cout << "Impuestos: " << impuestos << " Bs" << endl;
    cout << "Salario Neto: " << salario_neto << " Bs" << endl;

	system("pause");
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
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	


