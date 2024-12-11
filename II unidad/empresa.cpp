/*utilizando switch case 
la empresa "UTEI" dara un incremento en el salario de sus empleados 
dependiendo de la edad de los mismos, el sueldo es de 145$ mensuales 

premisas:

*entre 18 y 24 años, el aumento es del 8% de su sueldo mensual
 
*entre 25 y 30 años, el aumento es del 10%

*entre 31 y 33 años, el aumento es del 12,5%

*entre 33 a 40 años,el aumento es del 15%

*entre 41 a 47 años, el aumento es del 16,25%

*mas de 48 años, el aumento es del 20%

salida:
nombre del empleado 
edad
salario mensual
porcentaje 
monto del incremento
salario bruto*/

#include<iostream>
#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<stdlib.h>
#include<windows.h>
using namespace std;
 
int main()
{

setlocale(LC_ALL, "spanish");
  
  
    cout<<"*******************************"<<endl;
	cout<<"*****BIENVENIDO AL SISTEMA*****"<<endl;
	cout<<"*******************************"<<endl;
	cout<<"_______________________________"<<endl;
	cout<<endl;
	system("CLS");
 
    string nombre
    int edad;
    const double salario_mensual=145.0;
    double incremento, salario_bruto;
    double aumento;
	
	cout<<" Por favor introduce tu edad "<<endl;
	cin>>edad;
	cout<<" Por favor dame tu edad "<<endl;
	cin>>edad;
	
	 switch(edad/10)
   {
	
	 case 1:
	{
    if(edad>=18&&24=<edad)
	aumento=0.8;
      }
	  Sleep(1000);
	   system("CLS");
	  return main();	
       break;
						
	 case 2:
	{
	if(edad>= 25&&30 =<edad)
	aumento=0.10;
     }
	  Sleep(1000);
	   system("CLS");
	  return main();	
	   break;		
				
	case 3: 
    {
	if (edad >= 31 && edad <= 33) 
    aumento= 0.125;
     } 
	{
	else if (edad > 33 && edad <= 40)
    aumento= 0.15;
     }
  	  Sleep(1000);
	   system("CLS");
	  return main();	
	   break;		
					
	case 4:
    {
	if (edad>=41&&edad<= 47) 
    aumento= 0.1625;
     }
     Sleep(1000);
	   system("CLS");
	  return main();	
	   break;	      
        
	default: 
    {
	if(edad > 47) 
    aumento= 0.20;
     } 
	else 
	{
    aumento= 0.0;
     }
    }	
	
	incremento=salario_base*aumento;
    salario_bruto=salario_base+aumento;

    cout<<" Nombre del empleado: "<<nombre<<endl;
    cout<<" Edad: " <<edad<<" años"<<endl;
    cout<<" Salario mensual: $"<<salario_base<<endl;
    cout<<" Porcentaje de incremento: "<<(porcentaje * 100)<<" % "<< endl;
    cout<<" Monto del aumento: $ "<<aumento<<endl;
    cout<<" Salario bruto: $ "<<salario_bruto<<endl;
	
	
	
	
	
	
	
	
	
	
				
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
