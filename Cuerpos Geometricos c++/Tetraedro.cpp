/*
Nombre del Autor : Jeffry Mercado 
Lugar : ITV
Descripcion : Areas y volumen de una Esfera
*/

#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

void datos();
void proceso();
double A,a,v,dato,raiz;
int i;

int main () {

	datos();
	proceso();

	return 0;
}

void datos(){
	cout << "Ingrese el vslor de las Aristas: ";
	cin  >> a;
if(a<=0){
	for (i=1; i<=2; i++){
	cout << "Ingrese el vslor de las Aristas: ";
	cin  >> a;
	}
	cout << "Ya Agoto el total de Intentos.";
}
}

void proceso(){
	if(a>0){
	A = pow(a,2) * sqrt(3);
	v= sqrt(2)/12 * pow(a,3);
	
	cout << "*****************************" << endl;
	cout << "El Area de un Tetaedro es: " << A << endl;
	cout << "El volumen es: " << v << endl;
	}
}