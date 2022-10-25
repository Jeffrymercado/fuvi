/*
Nombre : Jeffry Mercado
Lugar : ITV
Descripcion : Estructura Switch
*/

#include <iostream>

using namespace std;

int main(){
	
int op;
cout << "Menu de Opciones: " << endl;
cout << "1-Computadoras\n2-Smartphone\n3-Tablets\n4-Salir " << endl;
cout << "Seleccione una opcion: ";
cin >> op;
	
	switch(op) {
		case 1:
			cout << "Ud ha seleccionado: Computadoras " << endl;
			break;
		case 2:
		cout << "Ud ha seleccionado: Smartphones " << endl;
			break;	
		case 3:
		cout << "Ud ha seleccionado: Tablets " << endl;
			break;
			case 4:
		cout << "Ud ha salido correctamente de la aplicacion. " << endl;
			break;
		default:
			cout << "Opcion Incorrecta " << endl;
	}
	
	cout << "Fin de la Aplicacion " << endl;
	
	return 0;
}