/*
Nombre del Autor : Jeffry Mercado 
Lugar : ITV
Descripcion : Areas y volumen de una Esfera
*/

#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main () {
	float A,a,v;
	float dato,raiz;
	
	cout << "Ingrese el vslor de las Aristas: ";
	cin  >> a;
	
	A = pow(a,2) * sqrt(3);
	v= sqrt(2)/12 * pow(a,3);
	
	cout << "*****************************" << endl;
	cout << "El Area de un Tetaedro es: " << A << endl;
	cout << "El volumen es: " << v << endl;
	
	return 0;
}