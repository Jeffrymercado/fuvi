/*
Nombre del Autor : Jeffry Mercado 
Lugar : ITV
Descripcion : Areas y volumen de un Octaedro 
*/

#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main () {
	float A,a,v;
	float dato,raiz;
	
	cout << "Ingrese el valor de las Aristas: ";
	cin >> a;
	
	A = 2 * pow(a,2) * sqrt(3);
	v = sqrt(2)/3 * pow(a,3);
	
	cout << "*****************************" << endl;
	cout << "El valor del Area es de: " << A << endl;
	cout << "El volumen es de: " << v << endl;
	return 0;
}