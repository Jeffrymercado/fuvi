/*
nombre : Jeffry Mercado
Lugar : ITV
Descripcioon : Numero a buscar en el Arreglo 
*/

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

void datos();
void proceso();
void resultado();
float  a,b,c,x1,x2,m;

int main (){
	
	datos();
	proceso();
	resultado();
	
	return 0;
}

void datos(){
	cout << " ----- INTRODUZCA LOS VALORES ------ " <<endl;
	cout << "\na= ";
	cin >> a;
	cout << "\nb= ";
	cin >> b;
	cout << "\nc= ";
	cin >> c;
}

void proceso(){
	m = sqrt(pow(b,2) - 4 * a * c);
	x1 = (-b + m) / ( 2 * a);
	x2 = (-b - m) / ( 2 * a);
}

void resultado(){
	cout << " El resultado para X1 es igual a: " << x1 <<endl;
	cout << " El resultado para X2 es igual a: " << x2 <<endl;
}