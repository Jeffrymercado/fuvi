/* 
Nombre del Autor : Jeffry Mercado 
Lugar : ITV
Descripcion : Areas y volumen de una Esfera
*/

#include <iostream>
# include <math.h>
using namespace std;

int main () {
    int r,A,v;

    cout << "Ingrese el valor del Radio Menor: ";
    cin >> r;

A = 4 * M_PI * pow(r,2);
v = 1.33 * M_PI * pow(r,3);

cout << "**************************************"<< endl;
cout << "El Area de una Esfera es: " << A << endl;
cout << "El Volumen de una esfera es: " << v << endl;
return 0;	
}

