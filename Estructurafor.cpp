/*
Nombre del Archivo : Adivinanza.cpp
Nombre : Jeffry Mercado
Lugar : ITV
*/

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
int tabla;

int main () {
	
	cout << "Que tabla de multiplicar desea ver: ";
	cin >> tabla;
	
	for(int i = 1; i <13;i++) {
		cout << tabla << " x " << i << " = " <<  tabla*i <<endl;
	}
	
	return 0;
}