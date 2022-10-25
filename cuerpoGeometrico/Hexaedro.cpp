/*
Nombre del Autor : Jeffry Mercado 
Lugar : ITV
Descripcion : Areas y volumen de un Hexaedro
*/

#include <iostream>
#include <math.h>

using namespace std;

int main () {
	float A,a,v;
	
	cout << "Ingrese erl valor de las Aristas: ";
	cin >> a;
	
	A = 6 * pow(a,2);
	v = pow(a,3);
	
	cout << "*******************************" << endl;
	cout << "El Valor del Area es: " << A << endl;
	cout << "El volumen es de: " << v << endl;
	return 0;
}