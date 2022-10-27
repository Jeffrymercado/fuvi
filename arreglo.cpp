/*
Nombre del Archivo : arreglos.cpp
Autor : Jeffry Mercado
Lugar : ITV
*/

#include <iostream>

using namespace std;

int main () {
	int cant;
	
	cout << "Ingrese la cantidad de Datos: ";
	cin >> cant;
	
	
	double promedioNotas [cant];
	
	cout << "Ingrese los datos: " << endl;
	for (int i=0;i<cant;i++) {
		cout << "Elemento [" << i << "] = ";
        cin >> promedioNotas[i];
	}
	
	for (int i=0;i<cant;i++) {
		cout << "Elemento [" << i << "] = " << promedioNotas[i] << endl;
		}


	return 0;
}