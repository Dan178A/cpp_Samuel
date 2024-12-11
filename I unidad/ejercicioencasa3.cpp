/*Un vendedor quiere calcular su salario neto mensual, para lo cual ingresa su salario
básico mensual y el monto de la venta mensual.
 Para que el sistema determine según los
siguientes criterios cuál es su comisión:

a. Si la venta mensual es mayor de “cero” $ y menor de 5000$, la comisión será del 4%
del monto de la venta.

b. Si la venta mensual es mayor de 5000$ y menor de 20.000$, la comisión será del 8%
del monto de la venta.

c. Si la venta mensual es mayor o igual de 20.000$, la comisión será del 12,75% del
monto de la venta.*/

#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "spanish");
	/*
	VM:VENTA MENSUAL
	SB:SALARIO BASICO
	SN:SALARIO NETO
	C:COMISION
	1P:PRIMER PORCIENTO
	2P:SEGUNDO PORCIENTO
	3P:TERCER PORCIENTO
	*/
	float VM,SB,SN,C, p1 =0.4, p2 =0.8, p3 =0.1275;
	
	cout<<"*******************************"<<endl;
	cout<<"*****BIENVENIDO AL SISTEMA*****"<<endl;
	cout<<"*******************************"<<endl;
	cout<<"_______________________________"<<endl;
	cout<<endl;
	system("pause");
	system("CLS");
	
	cout<<" ingrese el monto de la venta mensual: "<<endl;
	cin>>VM;
	
	cout<<" ingrese el salario basico"<<endl;
	cin>>SB;
	
	{	
	if(VM>0 && VM<5000)
	C=VM * p1;
	}
	
	{
	if(VM> 5000 && VM<20000)
	C=VM * p2;
	}
	
	{
	if(VM>=20000)
	C=VM * p3;	
	}
	
	SN=SB+C;
	
	cout<<" el salario basico mensual del vendedor es $: "<< SB <<endl;
	cout<<" porcentaje de las ventas es $: "<< C <<endl;
	cout<<" ventas mensuales vendidas es $: "<< VM <<endl;
	cout<<" el salario neto del vendedor es $: "<< SN <<endl;	

	system("pause");
	system("CLS");
	
	cout<<"**********************************"<<endl;
	cout<<"*****IUTA-AMPLIACION GUARENAS*****"<<endl;
	cout<<"**********************************"<<endl;
	cout<<"__________________________________"<<endl;
	cout<<"**********************************"<<endl;
	cout<<"*****ALUMNO:                  ****"<<endl;
	cout<<"**CEDULA DE IDENTIDAD: V-       **"<<endl;
	cout<<"**********************************"<<endl;
	system("pause");
	system("CLS");


return 0;
}
