#include <iostream>
#include <conio.h>
#include<math.h>
#include <string.h>
using namespace std;

int main() {
	
	int numero1=0, numero2=0;
	char cadena[10]="",letra, cadena2[10];
	bool aprobado=false;
	cout<<"\n\t    Ingreso de distintos tipos de variables- TP N1\n\n";
	cout<<"Enteros:\n Ingrese 2 numeros enteros\n Numero 1: ";
	cin >> numero1;
	cout<<" Numero 2: ";
	cin>> numero2;
	cout<<"\nResultados: \n- Suma: ";
	cout<<(numero1+numero2);
	cout<<"\n- Resta: ";
	cout<<(numero1-numero2);
	cout<<"\n- Division: ";
	cout<<(numero1/numero2);
	cout<<"\n- Potencia (numero 1 elevado al numero 2): ";
	cout<<pow(numero1, numero2);
	cout<<"\n----------------------";
	cout<<"\n\nCadenas de caracteres:\n Ingrese dos cadenas no superior a los 10 caracteres: ";
	cout<<"\n\n- Cadena 1: ";
	cin>>cadena;
	cout<<"- Cadena 2: ";
    cin>>cadena2;
	cout<< "- Que letra desea buscar en la cadena1? ";
	cin>>letra;
    if(strchr(cadena, letra)!=""){
          cout<<"\nSe encontro la letra\n";  
    }
    else{cout<<"\nNo se encontro la letra.\n";}
    
    switch(strcmp(cadena, cadena2)){
        case 0:
             cout<<"Las 2 cadenas ingresadas son iguales";
             break;
        case (-1):
             cout<<" La cadena 2 es mas grande que la primera";
             break;
        case 1:
             cout<<"La cadena 1 es mayor a la cadena 2";
             break;                 
    }
	while( !aprobado ){
		cout<<"\n----------------------\n\nBooleanos\n Responda la siguiente pregunta: \n- Voy a aprobar este TP? 1. Si 2.No\n ";
		cin>>numero1;
		if(numero1==1){
			aprobado=true;
		}
		else{
			cout<< "Respuesta equivocada.\n";
		}
	}
	getch();
	
}
