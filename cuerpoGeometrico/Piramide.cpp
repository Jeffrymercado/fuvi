/* 
Nombre del Autor : Jeffry Mercado 
Lugar : ITV
Descripcion : Areas y volumen de una Piramide
*/

#include <iostream>

using namespace std;

int main () {
	int Al,Pbase,Ap,Abase, v, h, At;
	
	cout << "Ingrese el valor de Perimetro Base: ";
	cin >> Pbase;
	cout << "Ingrese el valor del Apotema Base: ";
	cin >> Ap;
	cout << "Ingrese el valor del Area Base: ";
	cin >> Abase;
	cout << "Ingrese el valor de la Altura: ";
	cin >> h;
	
	Al = (Pbase * Ap)/2;
	At = Al + Abase;
	v = Abase * h / 3;
	cout << "*************************************" << endl;
	cout << "El valor del Area Lateral es: " << Al << endl;
	cout << "El valor del Area Total es: " << At << endl;
	cout << "eL volumen es: " << v << endl;
	return 0;
}