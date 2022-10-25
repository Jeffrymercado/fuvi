/*
Nombre del Archivo :
Nombre : Jeffry Mercado
Lugar : ITV
*/

#include <iostream>

using namespace std;

int main () {
	int edad;
	string nombre;
	cout << "Ingrese su nombre: ";
	getline (cin,nombre);
	cout << "\nIngrese su edad: ";
	cin >> edad;
	
	while (edad <0) {
		cout << "Ingrese su edad";
		cin >> edad;
	}
	
	cout << "Bienvenido, " << nombre << endl;
	cout << "Fin de la Aplicacion";
	
	
	
	return 0;
}