//pedir 3 cantidades, obtener y decidir si aprueba o no 

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

using namespace std;
  
int main()
{
  
    

 float a,b,c, p;
    
    cout<<"*******************************"<<endl;
	cout<<"*****BIENVENIDO AL SISTEMA*****"<<endl;
	cout<<"*******************************"<<endl;
    cout<<"_______________________________"<<endl;
    system("pause");
    system("CLS");
    cout<<"Dame tu primer calificacion 1-100" <<endl;
    cin>>a;
    
	cout<<"Dame tu segunda calificacion 1-100" <<endl;
	cin>>b;
	
	cout<<"Dame tu tercera calificacion 1-100" <<endl;
	cin>>c;
	
	p=((a+b+c)/3);
	cout<<"Tu promedio es de:" <<p<<endl;
	
	
	if(p>=50)
	{
		cout<<"Aprobaste la materia"  <<endl;
	}
	else
	{
		cout<<"Reprobaste la materia" <<endl;
	}
	
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

