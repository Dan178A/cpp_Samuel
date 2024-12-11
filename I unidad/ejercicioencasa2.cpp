#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, " ");
	
	int N1, N2;
	
	cout<<"*******************************"<<endl;
	cout<<"*****BIENVENIDO AL SISTEMA*****"<<endl;
	cout<<"*******************************"<<endl;
	cout<<"_______________________________"<<endl;
	cout<<endl;
	system("pause");
	system("CLS"); 
	
	cout<<"introduzca el valor de N1"<<endl;
	 cin>>N1;
	 
	cout<<"introduzca el valor de N2"<<endl;
	 cin>>N2;
	
	
	if(N1>N2)
	{
	cout<<"el numero ("<<N1<<") es mayor que el numero ("<<N2<<")"<<endl;
    }
    
    else if(N1<N2)
	{
	cout<<"el numero ("<<N1<<") es menor que el numero ("<<N2<<")"<<endl;
    }
    
    else if(N1==N2)
	{
	cout<<"el numero ("<<N1<<") es igual que el numero ("<<N2<<")"<<endl;
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
