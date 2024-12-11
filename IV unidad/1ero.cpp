/*un  programa  que  pida  al  usuario  los  datos  de  dos  matrices  de  3x3  y  Luego muestre su
suma.*/
#include <iostream>
#include<locale.h>
using namespace std;

int main() 
{
setlocale(LC_ALL,"")l	
int matriz1[3][3], matriz2[3][3], suma[3][3];

    // Ingresar datos de la primera matriz
    cout << "Ingrese los datos de la primera matriz 3x3" << endl;
    for(int i=0;i<3; i++) 
	 {
         for(int j=0;j<3;j++) 
		 {
         cout<<"Elemento [" <<i<< "] [" <<j<< "]: ";
             cin>>matriz1[i][j];
             }
         }

    // Ingresar datos de la segunda matriz
    cout<<" Ingrese los datos de la segunda matriz 3x3 "<<endl;
    for(int i=0;i<3;i++) 
	 {
         for(int j=0;j<3; j++) 
		 {
         cout<<" Elemento [" <<i<< "] [" <<j<< "]: ";
             cin>>matriz2[i][j];
             }
         }

    // Calcular la suma de las matrices
    for(int i=0;i<3;i++) 
	 {
         for(int j=0;j<3; j++) 
	     {
         suma[i][j]=matriz1[i][j]+matriz2[i][j];
             }
         }
 
    // Mostrar la matriz resultante de la suma
    cout<<" La suma de las matrices es: "<<endl;
    for(int i=0;i<3;i++) 
	{
        for(int j=0;j<3;++j) 
		{
          cout<<suma[i][j]<<" ";
             }
        cout<<endl;
    }

    return 0;
}

