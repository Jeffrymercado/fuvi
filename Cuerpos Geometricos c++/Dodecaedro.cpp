/*
Nombre del Autor : Jeffry Mercado 
Lugar : ITV
Descripcion : Areas y volumen de un Octaedro 
*/

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

void datos();
void proceso();
int i;
double A,a,v,dato,raiz;
	
int main () {
	
	datos();
	proceso();

	return 0;
}

void datos(){
	cout << "Ingrese el valor de las Aristas: ";
	cin >> a;
	if(a<=0){
	for(i=1; i<=2; i++){
	cout << "--------------------------------" <<endl;
	cout <<" Numero Equivocado " <<endl;
	cout << "Ingrese el valor de las Aristas: ";
	cin >> a;
	}
	}
}

void proceso(){
	if(a>0){
	A = 3 * pow(a,2) * sqrt(35) * sqrt(5);
	v = (1.0/4.0)* (15 + 7 )* sqrt(5)* pow(a,3);
	
	cout << "*******************************" << endl;
	cout << "El Valor del Area es: " << A << endl;
	cout << "El volumen es de: " << v << endl;
}
}