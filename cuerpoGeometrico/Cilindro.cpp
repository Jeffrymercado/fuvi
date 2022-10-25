/* 
Nombre del Autor : Jeffry Mercado 
Lugar : ITV
Descripcion : Areas y volumen de un Prisma
*/

#include <iostream>
#include <math.h>

using namespace std;

int main () {
	int r,h,Al,At,v;
	
	cout << "Ingrese el valor del Radio Menor: ";
	cin >> r;
	cout << "Ingrese el valor de la Altura: ";
	cin >> h;
	
	Al = 2*M_PI * r *h ;
	At = 2 * M_PI * r * (h+r);
	v = M_PI * pow(r,2) * h; 
	
	cout << "El Area Lateral del Cilindro es: " << Al << endl;
	cout << "El Area Total es: " << At << endl;
	cout << "El volumen es: " << v << endl;
	
	return 0;
}