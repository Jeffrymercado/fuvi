/* 
Nombre del Autor : Jeffry Mercado 
Lugar : ITV
Descripcion : Areas y volumen de un Prisma
*/

#include <iostream>

using namespace std;
void datos();
void proceso();
int numLado, h, lad, P, Abase, Ap,i;
double Al,At,v;

int main () {

	datos();
	proceso();

	return 0; 
}

void datos(){
	cout << "Ingrese el numero de lados: ";
	cin  >> numLado;
	cout << "Ingrese la altura del Prisma: ";
	cin  >>  h;
	cout << "Cuantos lados tiene el Prima: ";
	cin >> lad;
	cout << "Ingresae el valor del Perimetro: ";
	cin >> P;
	cout << "Ingrese el valor del Apotema Base: ";
	cin >> Ap;
if(numLado <=0 and h<=0 and lad<=0 and P<=0 and Ap <=0){
	for (i=1; i<=2; i++){
		cout << "Numero Equivocado "<<endl;
		cout << "-------------------------------" <<endl;
	cout << "Ingrese el numero de lados: ";
	cin  >> numLado;
	cout << "Ingrese la altura del Prisma: ";
	cin  >>  h;
	cout << "Cuantos lados tiene el Prima: ";
	cin >> lad;
	cout << "Ingresae el valor del Perimetro: ";
	cin >> P;
	cout << "Ingrese el valor del Apotema Base: ";
	cin >> Ap;
	}
	cout << "Ya Agoto el total de Intentos. ";
}
}

void proceso(){
	if(numLado >0 and h>0 and lad>0 and P>0 and Ap >0){
	Al = (numLado * lad) * h;
	Abase = (P * Ap)/2;
	At = Al + (2 * Abase);
	v = Abase * h;
	
	
	cout << "El Area Lateral equivale a: " << Al << endl;
	cout << "El Area Total equivale a: " << At << endl;
	cout << "El volumen del Prisma esquivale a: " << v << endl;
	}
}