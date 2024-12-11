/*Crear  un  programa  con  el  cual  podamos  guardar  los  títulos  y  los  autores de diferentes
libros  sin  perder  ninguno  de  ellos.  El  usuario  es  el  encargado  de suministrar la información
de cada libro. Vamos a suponer que el usuario solo podrá ingresar un máximo de 5 libros, para así
tener un tamaño de vector fijo. 
NOTA: los datos deben ser almacenados en una matriz.*/
#include<iostream>
#include<string>
#include<locale.h>
using namespace std;

int main() 
{
setlocale(LC_ALL," ");
    const int MAX_LIBROS = 5;
    string libros[MAX_LIBROS][2]; // Matriz para almacenar títulos y autores
    int cantidad = 0;

    for(int i=0;i<MAX_LIBROS; i++) 
	{
     cout<<" Ingrese el título del libro "<<i+1<<": ";
         getline(cin,libros[i][0]);

     cout<<" Ingrese el autor del libro "<<i+1<<": ";
         getline(cin,libros[i][1]);

        cantidad++;
         }

    cout<<"\nLibros ingresados: \n";
    for(int i = 0; i < cantidad; i++) 
	{
         cout<<" Libro "<<i+1<<": "<<libros[i][0]<<" - Autor: "<<libros[i][1]<<endl;
         }

    return 0;
}

