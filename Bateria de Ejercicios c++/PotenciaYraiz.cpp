/*
Nombre: Jeffry Mercado
Lugar: ITV
Descripcion: Numero Negativo
*/

#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

void datos();
void proceso();
void despedida ();
double a,b,c;

int main () {

	datos();
	proceso();
	despedida();

	return 0;
}


void datos(){
	cout << "Ingrese un numero: ";
	cin >> a;
}

void proceso(){
	if (a<0)
	{
	 cout << " Lo sentimos, numero incorrecto " << endl;
	}
	
	if(a>0)
	{
	b = pow(a,2);
	c = sqrt(a);
	cout << " Del numero " << a << " ,su potencia es " << b << " y su raiz " << c << endl;
	}
	
}

void despedida (){
	cout << " Fin del Programa ";
}