/* 
Nombre del Autor : Jeffry Mercado 
Lugar : ITV
Descripcion : Areas y volumen de un Prisma
*/

#include <iostream>
#include <math.h>

using namespace std;

void datos();
void proceso();
int r,h,i;
double Al,At,v;	
	
int main () {
    
    datos();
    proceso();

	return 0;
}

void datos(){
	cout << "Ingrese el valor del Radio Menor: ";
	cin >> r;
	cout << "Ingrese el valor de la Altura: ";
	cin >> h;
	if(r<=0 and h <=0){
	for(i=1 ; i<=3; i++){
	cout << "Numero Equivocado." <<endl;
	cout << "Ingrese el valor del Radio Menor: ";
	cin >> r;
	cout << "Ingrese el valor de la Altura: ";
	cin >> h;
	}
	cout << "Ya Agoto el total de Intentos." <<endl;
}
}

void proceso(){
	if(r>0 and h >0){
	Al = 2*M_PI * r *h ;
	At = 2 * M_PI * r * (h+r);
	v = M_PI * pow(r,2) * h; 
	
	cout << "El Area Lateral del Cilindro es: " << Al << endl;
	cout << "El Area Total es: " << At << endl;
	cout << "El volumen es: " << v << endl;
}
}