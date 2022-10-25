/* 
Nombre del Autor : Jeffry Mercado 
Lugar : ITV
Descripcion : Areas y volumen de un Cono 
*/

#include <iostream>
#include <math.h>

using namespace std;

int main () {
	int r,g,h,Al,At,v;
	
	cout << "Ingrese el valor del Radio Menor: ";
	cin >> r;
	cout << "Ingrese el valor de la generatriz: ";
	cin >> g;
	cout << "Ingrese el valor de la Altura: ";
	cin >> h;
	
	Al = M_PI * r * g;
	At = M_PI * r * (g+r);
	v = M_PI * pow(r,2)*h/3;
	
	cout << "******************************" << endl;
	cout << "El Area Lateral es de: " << Al << endl;
	cout << "El Area Total es de: " << At << endl;
	cout << "El volumen es de: " << v << endl;
	
	return 0;
}