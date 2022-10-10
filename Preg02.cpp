//código Preg02
#include <iostream>
using namespace std;

int main (){
	
	int i,n, suma=0;
	cout <<"Ingrese el valor de n: ";cin>>n;
	for(i=1; i<n;i++){
		suma=suma+i;
	}
	cout <<"El valor de la suma es: "<<suma;
	return 0;
}

