#include <iostream>
#include<locale.h>
#include<cstdlib>
#include<windows.h>
#include<stdio.h>

#define color SetConsoleTextAttribute

using namespace std;
int main()
{
	int A[100][100],B[100][100],C[100][100];
	int f1,f2,c1,c2;
	
	
	
	setlocale(LC_ALL,"");
	
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    color (hConsole, 2);
    
    
    cout<<"*************************************"<<endl;
	cout<<"******* BIENVENIDO AL SISTEMA *******"<<endl;
	cout<<"*************************************\n"<<endl;
	system("pause");
	system("CLS");
	
	cout<<"Por favor ingrese el numero de filas para la primera matriz"<<endl;
	cin>>f1;
	cout<<"Por favor ingrese el numero de columnas para la primera matriz"<<endl;
	cin>>c1;
	cout<<"Por favor ingrese el numero de filas para la segunda matriz"<<endl;
	cin>>f2;
	cout<<"Por favor ingrese el numero de columnas para la segunda matriz"<<endl;
	cin>>c2;
	system("pause");
	system("cls");
	
	if(c1==f2)
	{
		/*Se ingresan las matrices*/
		for(int i=0;i<f1;i++)
		{
		 for(int j=0;j<c1;j++)
		   {
		 	cout<<"Por favor ingrese el elemento("<<i<<","<<j<<") de la primera matriz"<<endl;
		 	cin>>A[i][j];
		 	
		   }
		}
		
		system("CLS");
		
	    for(int i=0;i<f2;i++)
    	{
            for(int j=0;j<c2;j++)
           {
	        cout<<"Por favor ingrese el elemento("<<i<<","<<j<<") de la segunda matriz"<<endl;
	        cin>>B[i][j];
           }
        }
		        /*Se imprimen las matrices*/
		            for(int i=0;i<f1;i++)
	                	{
		                for(int j=0;j<c1;j++)
		                    {
		 	                cout<<A[i][j]<<"\t";
		                    }
		                    cout<<endl;
		                }
		                cout<<endl;
	    	                for(int i=0;i<f2;i++)
	        	                {
		                        for(int j=0;j<c2;j++)
		                            {
		 	                        cout<<B[i][j]<<"\t";
		                            }
		                            cout<<endl;
		                        }
	    for(int i=0;i<f1;i++)
	    
		for(int j=0;j<c2;j++)
		
		C[i][j]=0;
		
		for(int i=0;i<f1;i++)
	    for(int j=0;j<c2;j++)
    	for(int z=0;z<c1;z++)
		C[i][j]=C[i][j]+A[i][z]*B[z][j];
		
		cout<<endl;
		for(int i=0;i<f1;i++)
	        {
		       for(int j=0;j<c2;j++)
	           {
		        cout<<C[i][j]<<"\t";
		       }
		       cout<<endl;
	        }
    }
	else
	{
		cout<<"No se pueden multiplicar las matrices"<<endl;
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
