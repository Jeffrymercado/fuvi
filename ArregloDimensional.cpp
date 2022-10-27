/*
Nombre del Archivo : arreglos.cpp
Autor : Jeffry Mercado
Lugar : ITV
*/

#include <iostream>

using namespace std;

int main () {
	int matrizA[2][2];
	cout << "Ingrese los datos: " << endl;
	for(int i=0; i<2;i++){
		for(int j = 0; j < 2; j++){
			cout << "Elemento [" << i << " , " << j << "] = ";
			cin >> matrizA[i][j];
		}
	}
	return 0;
}