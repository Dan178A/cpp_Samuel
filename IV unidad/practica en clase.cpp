#include <iostream>
#include <locale.h>


using namespace std;

int main()
{
	
int nro1=5,nro2=3; 
int A[100][100],B[100][100],suma[100][100],filas=0,columnas=0,op1[100][100],op2[100][100];

cout<<"INgrese el numero de filas"<<endl;
cin>>filas;

cout<<"ingrese el numero de columnas"<<endl;
cin>>columnas;
system("cls");

//Pedir los elementos de la matriz A
for(int i=0;i<filas;i++)
{
	for(int j=0;j<columnas;j++)
	{
		cout<<"ingrese los elementos de la matriz A["<<i<<"]["<<j<<"]:"<<endl;
		cin>>A[i][j];
	}
}
system("cls");
//Pedir los elementos de la matriz B
for(int i=0;i<filas;i++)
{
	for(int j=0;j<columnas;j++)
	{
		cout<<"ingrese los elementos de la matriz B["<<i<<"]["<<j<<"]:"<<endl;
		cin>>B[i][j];
	}
}
system("cls");

//mostrar la matriz A
cout<<"\n los elementos de la matriz A son :\n";
for(int i=0;i<filas;i++)
{
	for(int j=0;j<columnas;j++)
	{
		cout<<"\t["<<A[i][j]<<"]";
		
	}
	cout<<endl;
}
cout<<"\n los elementos de la matriz B son :\n";

//mostrar la matriz B

for(int i=0;i<filas;i++)
{
	for(int j=0;j<columnas;j++)
	{
	cout<<"\t["<<B[i][j]<<"]";	
		
	}
	cout<<endl;
}

// multiplicar 5*A

for(int i=0;i<filas;i++)
{
	for(int j=0;j<columnas;j++)
	{
	  op1[i][j]= nro1*A[i][j];
		
	}
   
}
cout<<"\n los elementos de la matriz 5A son :\n";
// mostrar operacion 1
for(int i=0;i<filas;i++)
{
	for(int j=0;j<columnas;j++)
	{
	  cout<<"\t["<<op1[i][j]<<"]";
		
	}
   cout<<"\n";
}

// multiplicar 3*B


for(int i=0;i<filas;i++)
{
	for(int j=0;j<columnas;j++)
	{
	  op2[i][j]= nro2*B[i][j];
		
	}
   
}
cout<<"\n los elementos de la matriz 3B son :\n";
// mostrar operacion 2
for(int i=0;i<filas;i++)
{
	for(int j=0;j<columnas;j++)
	{
	  cout<<"\t["<<op2[i][j]<<"]";
		
	}
   cout<<"\n";
}
	
	// suma 5(A)+3(B)


for(int i=0;i<filas;i++)
{
	for(int j=0;j<columnas;j++)
	{
	  suma[i][j]= op1[i][j]+op2[i][j];
		
	}
   
}
cout<<"\n La suma de 5(A)+3(B) :\n";
// mostrar operacion 2
for(int i=0;i<filas;i++)
{
	for(int j=0;j<columnas;j++)
	{
	  cout<<"\t["<<suma[i][j]<<"]";
		
	}
   cout<<"\n";
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}

