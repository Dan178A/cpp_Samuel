#include <iostream>
#include <stdlib.h>
#include <locale.h>
using namespace std;

int main() {
setlocale(LC_ALL,"");
    int filas, columnas;
    char opcion;
    bool dimensiones_validas = false;

    while (!dimensiones_validas) 
	{
        cout << "Ingrese el número de filas de las matrices: ";
        cin >> filas;
        cout << "Ingrese el número de columnas de las matrices: ";
        cin >> columnas;

        if(filas>0&&columnas>0) 
		  {
            dimensiones_validas = true;
        } 
		else 
		   {
          cout << "Dimensiones no válidas. Las dimensiones deben ser mayores que cero." << endl;
        }
    }

    int matriz1[filas][columnas], matriz2[filas][columnas], resultado[filas][columnas];
    int escalar;

    // Ingresar valores para la primera matriz
    cout<<"Ingrese los valores de la primera matriz: "<<endl;
    for (int i = 0; i < filas; i++) 
	{
        for (int j = 0; j < columnas; j++) 
		{
         cout<<"Elemento["<<i<<"]["<<j<<"]: ";
            cin>>matriz1[i][j];
        }
    }

    // Ingresar valores para la segunda matriz
    cout<<"Ingrese los valores de la segunda matriz: "<<endl;
    for (int i = 0; i < filas; i++) 
	{
        for (int j = 0; j < columnas; j++) 
		{
         cout<<"Elemento["<<i<<"]["<<j<<"]: ";
            cin >> matriz2[i][j];
        }
    }

    do {
        cout<<"****** MENU DE OPCIONES ******"<<endl;
        cout<<"1.- Suma de matrices"<<endl;
        cout<<"2.- Resta de matrices"<<endl;
        cout<<"3.- Media de una matriz"<<endl;
        cout<<"4.- Multiplicación por un escalar"<<endl;
        cout<<"5.- Salir del programa"<<endl;
        cout<<"Ingrese una opción: ";
        cin>>opcion;

        switch (opcion) 
		{
            case '1':
                // Suma de matrices
                for (int i = 0; i < filas; i++) 
				{
                    for (int j = 0; j < columnas; j++) 
					{
                        resultado[i][j] = matriz1[i][j] + matriz2[i][j];
                    }
                }
                cout<<"Resultado de la suma de matrices:"<<endl;
                for (int i = 0; i < filas; i++) 
				{
                    for (int j = 0; j < columnas; j++) 
					{
                        cout<<resultado[i][j]<<" ";
                    }
                    cout << endl;
                }
                break;
                
            case '2':
                // Resta de matrices
                for (int i = 0; i < filas; i++) 
				{
                    for (int j = 0; j < columnas; j++) 
					{
                        resultado[i][j] = matriz1[i][j] - matriz2[i][j];
                    }
                }
                cout<<"Resultado de la resta de matrices:"<<endl;
                for (int i = 0; i < filas; i++) 
				{
                    for (int j = 0; j < columnas; j++) 
					{
                        cout<<resultado[i][j]<< " ";
                    }
                    cout<<endl;
                }
                break;
                
            case '3':
                // Media de una matriz
                char matriz_opcion;
                cout<<"Seleccione la matriz (1 o 2): ";
                cin>>matriz_opcion;
                if(matriz_opcion=='1'||matriz_opcion=='2') 
				{
                    int suma = 0;
                    int elementos_totales=filas*columnas;
                    int(*matriz)[columnas]=(matriz_opcion=='1')? matriz1:matriz2;
                    
					for (int i = 0; i < filas; i++) 
					{
                        for (int j = 0; j < columnas; j++) 
						{
                            suma +=matriz[i][j];
                        }
                    }
                    float media=float(suma)/elementos_totales;
                    cout<<"La media de los elementos de la matriz "<< matriz_opcion<<" es: "<<media<<endl;
                } 
				else 
				  {
                    cout<<"Opción no válida."<<endl;
                  }
                break;
                
            case '4':
                // Multiplicación por un escalar
                cout<<"Ingrese el escalar: ";
                cin>>escalar;
                char matriz_sel;
                cout<<"Seleccione la matriz para multiplicar (1 o 2): ";
                cin>>matriz_sel;
                if(matriz_sel == '1' || matriz_sel == '2') 
				{
                    int (*matriz)[columnas] = (matriz_sel == '1') ? matriz1 : matriz2;
                    for (int i = 0; i < filas; i++) 
					{
                        for (int j = 0; j < columnas; j++) 
						{
                            resultado[i][j] = matriz[i][j] * escalar;
                        }
                    }
                    cout << "Resultado de la multiplicación por el escalar:" << endl;
                    for (int i = 0; i < filas; i++) 
					{
                        for (int j = 0; j < columnas; j++) 
						{
                            cout << resultado[i][j] << " ";
                        }
                        cout << endl;
                    }
                } 
				else 
				{
                    cout << "Opción no válida." << endl;
                }
                break;
            
			case '5':
                // Salir del programa
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, seleccione una opción del menú." << endl;
                break;
        }

    } while (opcion != '5');

    return 0;
}

