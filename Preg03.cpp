// Pregunta 03: En la playa de estacionamiento "Mi Cochera", el costo por las primeras 4 horas es de S/.6.00, luego por cada hora adicional tiene un costo de 2 soles. Diseñe
// un programa en c++ que permita el ingreso de un número de horas (valor entero) y te muestre el importe a pagar.
#include<iostream>
#include<locale.h>

using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	int cantHoras = 0, importe, opcion;
	
	cout<<"\t\t\t\t\tPLAYA DE ESTACIONAMIENTO 'MI COCHERA'\n\n";
	
	do{
		do{
			cout<<"Digite la cantidad de horas que estuvo estacionado: "; cin>>cantHoras; cout<<endl;
		}while(cantHoras <= 0);
		
		if(cantHoras <= 4){
			importe = 6;
		}
		else{
			importe = 6 + 2 * (cantHoras - 4);
		}
		
		cout<<"El importe a pagar es de: S/."<<importe<<".00\n\n";
		
		cout<<"¿DESEA CONTINUAR?"<<endl<<"Sí: digite el numero '1'"<<endl<<"No: digite cualquier otro numero\n\n";
		cout<<"Opción: "; cin>>opcion; cout<<endl;
			
	}while(opcion == 1);
	
	if(opcion != 1){
		cout<<"----PROGRAMA FINALIZADO----\n";
	}
	
	return 0;
}
