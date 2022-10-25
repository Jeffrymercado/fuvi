/*
Nombre del Autor : Jeffry Mercado 
Lugar : ITV
Descripcion : Areas y volumen de un Octaedro 
*/

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main () {
	
	float A,a,v;
	float dato,raiz;
	
	cout << "Ingrese el valor de las Aristas: ";
	cin >> a;
	
	A = 5 * pow(a,2) * sqrt(3);
	v = 5.0/12.0 *(3+sqrt(5)) * pow(a,3);
	
	cout << "*******************************" << endl;
	cout << "El Valor del Area es: " << A << endl;
	cout << "El volumen es de: " << v << endl;
	
	return 0;
}