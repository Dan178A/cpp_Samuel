/*Ejercicio 1. Mostrar un menú con tres opciones
1. Comenzar programa
2. Imprimir listado
3. Finalizar programa
Al elegir una de las opciones, deberá mostrar un mensaje
por pantalla, usted decida qué mensaje debe mostrar, si el
usuario elige una opción diferente a las tres mencionadas
debe aparecer el mensaje de error y volver al menú. Se debe
usar la estructura while.*/

#include <iostream>
#include <locale.h>
#include <cmath>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main() 
{
setlocale(LC_ALL,"");
int opcion;

while(true)
{
cout<<" Menú de opciones: "<<endl;
cout<<" 1. Comenzar programa "<<endl;
cout<<" 2. Imprimir listado "<<endl;
cout<<" 3. Finalizar programa "<<endl;
cout<<" Elige una opción: ";
cin >> opcion;
Sleep(1000);
	system("CLS");
   
   if(opcion==1) 
  {
    cout<<" Comenzando programa... "<<endl;
    } 
   
   else if(opcion==2)
  {
    cout<<" Imprimiendo listado... "<<endl;
     
	cout<<"****************************LVPB 24/25*************************************"<<endl;   
	cout<<"\n**************PARTIDOS****GANADOS*****PERDIDOS*****ULTIMOS PARTIDOS***** "<<endl;
	Sleep(1000);
    cout<<"\n1.-TIBURONES_____14_________10___________4__________(G)(G)(P)(G)(G)______"<<endl;
    Sleep(1000);
    cout<<"\n2.-TIGRES________13__________8___________5__________(P)(P)(G)(p)(G)______"<<endl;
    Sleep(1000);
    cout<<"\n3.-CARDENALES____14__________7___________7__________(P)(P)(G)(G)(G)______"<<endl;
    Sleep(1000);
    cout<<"\n4.-CARIBES_______12__________6___________6__________(G)(G)(G)(G)(P)______"<<endl;
    Sleep(1000);
    cout<<"\n5.-NAVEGANTES____14__________7___________7__________(G)(P)(P)(P)(P)______"<<endl;
    Sleep(1000);
    cout<<"\n6.-LEONES________12__________5___________7__________(G)(P)(P)(P)(P)______"<<endl;
    Sleep(1000);
    cout<<"\n7.-BRAVOS________13__________5___________8__________(P)(G)(G)(G)(P)______"<<endl;
    Sleep(1000);
	cout<<"\n8.-AGUILAS_______14__________5___________9__________(G)(P)(P)(P)(P)______"<<endl;
Sleep(8000);
	system("CLS");
	} 
   
   else if(opcion==3) 
   {
    cout<<" Finalizando programa. ¡Hasta luego! "<<endl;
    cout<<"************************************"<<endl;
    cout<<"***** IUTA-AMPLIACION GUARENAS *****"<<endl;
    cout<<"**********************************"<<endl;
    cout<<"__________________________________"<<endl;
    cout<<"**********************************"<<endl;
    cout<<"***** ALUMNO:                *****"<<endl;
    cout<<"** CEDULA DE IDENTIDAD: V-         **"<<endl;
    cout<<"**********************************"<<endl;    
		break; 
        } 
	
	else{
    cout<<" Opción inválida. Por favor, elige una opción válida. "<<endl;
       }

    cout << endl; 
    }
return 0;
}
