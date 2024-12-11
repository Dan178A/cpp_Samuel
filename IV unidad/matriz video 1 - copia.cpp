/*Hacer un programa donde una matriz de 3x3 
se le soliciten los valores, muestre la diagonal de la matriz*/

#include<iostream>
#include<locale.h>
#include<cstdlib>
#include<windows.h>
#include<stdio.h>

#define color SetConsoleTextAttribute

using namespace std;

int main()
{
	int A[3][3],fila,columna;
	
	
	
	setlocale(LC_ALL,"");
	
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    color (hConsole, 2);
    
    
    cout<<"*************************************"<<endl;
	cout<<"******* BIENVENIDO AL SISTEMA *******"<<endl;
	cout<<"*************************************\n"<<endl;
	system("pause");
	system("CLS");
	
	for(fila=0;fila<=2;fila++)
	{
		for(columna=0;columna<=2;columna++)
		{
			printf("Por favor, escriba el valor de la posicion [%d][%d] :",fila,columna);
			scanf("%d", &A[fila][columna]);
		}
	}
	system("CLS");
	printf("\n");
	
	for(fila=0;fila<=2;fila++)
	{
		for(columna=0;columna<=2;columna++)
		{
			printf("\t[%d]",A[fila][columna]);
			
		}
		printf("\n");
	}
	system("pause");
	printf("\n");
	system("CLS");

	for(fila=0;fila<=2;fila++)
	{
		for(columna=0;columna<=2;columna++)
		{
			if(fila==columna)
			printf("\nLa diagonal es: [%d][%d] :[%d] ",fila,columna,A[fila][columna]);
			
		}
		printf("\n");
	}
	
		system ("pause");
    system("CLS");
		    cout<<"\n******************************************"<<endl;
	        cout<<"******* HASTA LUEGO, VUELVA PRONTO *******"<<endl;
	        cout<<"******************************************"<<endl;
	
        	cout<<"\n******************************************"<<endl;
	        cout<<"******** IUTA AMPLIACION GUARENAS ********"<<endl;
	        cout<<"******************************************"<<endl;
	
        	cout<<"\n******************************************"<<endl;
	        cout<<"************* ELABORADO POR **************"<<endl;
	        cout<<"******************************************"<<endl;
	
	        cout<<"\n******************************************"<<endl;
	        cout<<"******* RICARDO RANGEL CI 31604203 *******"<<endl;
	        cout<<"******************************************"<<endl;
	
	return 0;
}
