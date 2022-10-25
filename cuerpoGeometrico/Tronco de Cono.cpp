/*
Nombre del Autor : Jeffry Mercado 
Lugar : ITV
Descripcion : Areas y volumen de un Tronco de Cono 
*/

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main () {
	float R,r,h,g,AB,Ab;
	float Al,At,v;
	
	cout << "Ingrese el valor del Radio Mayor: ";
	cin >> R;
	cout << "Ingrese el valor del Radio Menor: ";
	cin >> r;
	cout << "Ingrese el valor de la Generatriz: ";
	cin >> g;
	cout << "Ingrese el valor de la Altura: ";
	cin >> h;
	cout << "Ingrese el Area de Base Mayor: ";
	cin >> AB;
	cout << "Ingrese el Area de Base Menor: ";
	cin >> Ab;
	
	Al = M_PI * g *(R+r);
	At = Al + AB + Ab;
	v = (1.0/3.0 * M_PI * h)* (pow(R,2) + pow(r,2)  + (R*r) );
	
	cout << "*******************************" << endl;
	cout << "El Valor del Area Lateral es: " << Al << endl;
	cout << "El Valor del Area Total es: " << At << endl;
	cout << "El volumen es de: " << v << endl;
	
	return 0;
}