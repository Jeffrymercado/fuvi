/*
Nombre del Autor : Jeffry Mercado 
Lugar : ITV
Descripcion : Areas y volumen de un Hexaedro
*/

#include <iostream>
#include <math.h>

using namespace std;

void datos ();
void proceso();
double A,v;
int a,i;

int main () {
	
    datos();
    proceso();
	
	return 0;
}

void datos (){
	cout << "Ingrese el valor de las Aristas: ";
	cin >> a;
	if(a<=0){
		for(i=1; i<=2; i++){
			cout << "Numeroo equivocado" <<endl;
			cout << "Ingrese el valor de las Aristas: ";
        	cin >> a;
		}
	cout << "Ya Agoto el total de Intentos. "<<endl;
	}
}

void proceso(){
	if(a>0){
		
	A = 6 * pow(a,2);
	v = pow(a,3);
	
	cout << "*******************************" << endl;
	cout << "El Valor del Area es: " << A << endl;
	cout << "El volumen es de: " << v << endl;
	}
}