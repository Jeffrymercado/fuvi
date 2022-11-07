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
double A,a,v,dato,raiz;
int i;

int main () {
	
	datos();
	proceso();
	
	return 0;
}
void datos(){
	cout << "Ingrese el valor de las Aristas: ";
	cin >> a;
	if(a<=0){
		for(i=1 ; i<=2; i++){
			cout << "Numero Equivocado " <<endl;
			cout << "---------------------------------" <<endl;
			cout << "Ingrese el valor de las Aristas: ";
        	cin >> a;	
		}
	cout << " Ya Agoto el Total de Intentos. " <<endl;
	}
}

void proceso(){
	if(a>0){
	A = 5 * pow(a,2) * sqrt(3);
	v = 5.0/12.0 *(3+sqrt(5)) * pow(a,3);
	
	cout << "*******************************" << endl;
	cout << "El Valor del Area es: " << A << endl;
	cout << "El volumen es de: " << v << endl;
	}
}
