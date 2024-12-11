/*cree un programa en c++ que lea la altura de n personas y calcular la altura media. Calcular
cuantas personas tiene altura superior a la media y cuantas personas tiene una altura inferior a la
media. El valor de N se pide por teclado y debe ser entero positivo. 
NOTA: los datos deben ser almacenados en un arreglo vector.*/
#include<locale.h>
#include <iostream>
using namespace std;

int main() 
{
setlocale(LC_ALL," ");
int n;
cout<<"Ingrese el número de personas: ";
     cin>>n;

    if(n<=0) 
	{
     cout << "El número de personas debe ser un entero positivo." << endl;
          return 1;
             }

    double*alturas=new double[n];
    double suma = 0.0;

    for(int i=0;i<n; i++) 
	{
     cout<<"Ingrese la altura de la persona "<<i+1<<": ";
         cin>>alturas[i];
             suma+=alturas[i];
    }

    double altura_media =suma/n;
    int superiores=0, inferiores=0;

    for (int i=0;i<n; i++) 
	{
        if (alturas[i]>altura_media) 
		{
         ++superiores;
        } 
		else if(alturas[i]<altura_media) 
		{
         ++inferiores;
        }
    }

    cout<<" Altura media: "<<altura_media<<endl;
    cout<<" Personas con altura superior a la media: "<<superiores<<endl;
    cout<<" Personas con altura inferior a la media: "<<inferiores<<endl;

    delete[]alturas;
    return 0;
}

