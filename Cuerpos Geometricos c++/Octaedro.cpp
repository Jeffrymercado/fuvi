/*
Nombre del Autor : Jeffry Mercado 
Lugar : ITV
Descripcion : Areas y volumen de un Octaedro 
*/

#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

void datos();
void proceso();
double A,a,v, dato,raiz;
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
		for (i=1; i<=2; i++){
		cout << "Ingrese el valor de las Aristas: ";
    	cin >> a;
		}
	cout << " Ya Agoto el Total de intentos. ";
	}
}

void proceso(){
	if(a>0){
	A = 2 * pow(a,2) * sqrt(3);
	v = sqrt(2)/3 * pow(a,3);
	
	cout << "*****************************" << endl;
	cout << "El valor del Area es de: " << A << endl;
	cout << "El volumen es de: " << v << endl;
	}
}