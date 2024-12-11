/* crea un programa que lea dos numeros e indicar cual es el mayor de los dos*/
#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "spanish");
	
	int N1,N2;
	
	cout<<"*******************************"<<endl;
	cout<<"*****BIENVENIDO AL SISTEMA*****"<<endl;
	cout<<"*******************************"<<endl;
	cout<<"_______________________________"<<endl;
	cout<<endl;
	
	cout<<"introduzca el valor de N1"<<endl;
	 cin>>N1;
	 
	cout<<"introduzca el valor de N2"<<endl;
	 cin>>N2;
	 
	if(N1>N2)
	{
	cout<<"el numero ("<<N1<<") es mayor que el numero ("<<N2<<")"<<endl;
    }
	else
	{
	cout<<"el numero ("<<N1<<") es menor que el numero ("<<N2<<")"<<endl;	
	}
	
	system("pause");
	
	cout<<"**********************************"<<endl;
	cout<<"*****IUTA-AMPLIACION GUARENAS*****"<<endl;
	cout<<"**********************************"<<endl;
	cout<<"__________________________________"<<endl;
	cout<<"**********************************"<<endl;
	cout<<"*****ALUMNO: SEBASTIAN TERRAZA****"<<endl;
	cout<<"**CEDULA DE IDENTIDAD: V-31.759.027**"<<endl;
	cout<<"**********************************"<<endl;



return 0;
}
