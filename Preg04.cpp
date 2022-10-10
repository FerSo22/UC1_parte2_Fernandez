/* Pregunta 04: Pablito desea entregar un donativo en base a sus ganancias para la construcción de un templo cerca a su casa según la siguiente información:

													  RANGO					PORCENTAJE
												    [0, 1000]			   		5%
												  <1000, 1500]			   		7%
												  <1500, 2000]			  		8%
												  <2000, 5000]			  	   10%
												  <5000, más]			  	   15%
*/
#include<iostream>
#include<locale.h>
#include<iomanip>

using namespace std;

int main(){
	setlocale(LC_CTYPE, "Spanish");
	
	int ganancia, porcentaje, donativo, opcion;
	
	cout<<"\t\t\t\t\tDONATIVO PARA LA CONSTRUCCIÓN DEL TEMPLO\n\n";
	
	do{
		do{
			cout<<"Digite las ganancias de Pablito: "; cin>>ganancia; cout<<endl;
		}while(ganancia < 0);
		
		if(ganancia >= 0 && ganancia <= 1000){
			porcentaje = 5;
		}
		else if(ganancia > 1000 && ganancia <= 1500){
			porcentaje = 7;
		}
		else if(ganancia > 1500 && ganancia <= 2000){
			porcentaje = 8;
		}
		else if(ganancia > 2000 && ganancia <= 5000){
			porcentaje = 10;
		}
		else{
			porcentaje = 15;
		}
		
		cout<<"De acuerdo a la siguiente información: \n\n";
		cout<<"\t\t\t\tRANGO \t\t\t\tPORCENTAJE\n"
			<<"\t\t\t      [0, 1000]	\t\t\t    5%\n"
			<<"\t\t\t    <1000, 1500]	\t\t    7%\n"
			<<"\t\t\t    <1500, 2000]	\t\t    8%\n"
			<<"\t\t\t    <2000, 5000]	\t\t   10%\n"
			<<"\t\t\t    <5000, más]	\t\t\t   15%\n\n";
		cout<<"Para la ganancia de Pablito (S/."<<ganancia<<".00) corresponde un porcentaje del: "<<porcentaje<<"%\n\n";
		
		donativo = ganancia * porcentaje / 100;

		cout<<"Finalmente, el donativo de Pablito será de: S/."<<donativo<<".00\n";
		
		cout<<"¿DESEA CONTINUAR?"<<endl<<"Sí: digite el numero '1'"<<endl<<"No: digite cualquier otro numero\n\n";
		cout<<"Opción: "; cin>>opcion; cout<<endl;
		
	}while(opcion == 1);
	
	if(opcion != 1){
		cout<<"----PROGRAMA FINALIZADO----\n";
	}
	
	return 0;
}
