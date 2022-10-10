//código Preg01

#include <iostream>


using namespace std;
int main()
{
    int aux, a, b;
    
    cout <<"Ingrese el valor de a: ";cin>>a;
    cout <<"Ingrese el valor de b: ";cin>>b;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    cout << "Intercambiando los valores" << endl;

    aux = a;
    a = b;
    b = aux;

    cout <<   "Ahora, a es: " << a << endl;
    cout <<   "Ahora, b es: " << b << endl;

    return 0;
}

