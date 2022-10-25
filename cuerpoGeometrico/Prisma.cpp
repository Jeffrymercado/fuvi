/* 
Nombre del Autor : Jeffry Mercado 
Lugar : ITV
Descripcion : Areas y volumen de un Prisma
*/

#include <iostream>

using namespace std;

int main () {
	int numLado, h, lad, Al, P, Abase, At, v, Ap;
	
	cout << "Ingrese el numero de lados: ";
	cin  >> numLado;
	cout << "Ingrese la altura del Prisma: ";
	cin  >>  h;
	cout << "Cuantos lados tiene el Prima: ";
	cin >> lad;
	cout << "Ingresae el valor del Perimetro: ";
	cin >> P;
	cout << "Ingrese el valor del Apotema Base: ";
	cin >> Ap;
	
	Al = (numLado * lad) * h;
	Abase = (P * Ap)/2;
	At = Al + (2 * Abase);
	v = Abase * h;
	
	
	cout << "El Area Lateral equivale a: " << Al << endl;
	cout << "El Area Total equivale a: " << At << endl;
	cout << "El volumen del Prisma esquivale a: " << v << endl;
	return 0; 
}

