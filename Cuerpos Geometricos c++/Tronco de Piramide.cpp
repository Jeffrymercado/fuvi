/* 
Nombre del Autor : Jeffry Mercado 
Lugar : ITV
Descripcion : Areas y volumen de un Tronco de Piramide
*/

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

void datos();
void proceso();
double Ap,PB,Pb,h,AB,Ab,Al,At,v;

int main () {

	datos();
	proceso();

	return 0;
}

void datos(){
	cout << "Ingrese el valor del Apotema de la Piramide: ";
	cin >> Ap;
	cout << "Ingrese el valor del Perimetro de Base Mayor: ";
	cin >> PB;
	cout << "Ingrese el valor del Perimetro de Base Menor: ";
	cin >> Pb;
	cout << "Ingrese el valor del Area de Base Mayor: ";
	cin >> AB;
	cout << "Ingrese el valor del Area de Base Menor: ";
	cin >> Ab;
	cout << "Ingrese el valor de la Altura: ";
	cin >> h;
}

void proceso(){
	Al = ((PB + Pb)/2) * Ap;
	At = Al + AB + Ab;
    v = (((1.0/3.0)*h) *(AB + Ab + sqrt(AB*Ab)));
	
	cout << "***************************************" << endl;
	cout << "El Area Lateral equivale a: " << Al << endl;
	cout << "El Area Total es de: " << At << endl;
	cout << "El Volumen es de: " << v << endl;
}