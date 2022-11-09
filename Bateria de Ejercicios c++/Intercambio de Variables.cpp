/* 
Nombre : Jeffry Mercado
Lugar : ITV
Descripcion : Intercamnbio de Variables
*/

#include <iostream>

using namespace std;
void datos();
void proceso();
void resultado();
void despedida();
int a,b,c;

int main() {
	
	datos();
	proceso();
	resultado();
	despedida();
	
	return 0;
}

void datos(){
	cout << "Ingrese un valor numerico, A: ";
	cin >> a;
	cout << "Ingrese un valor numerico, B: ";
	cin >> b;
}
void proceso(){
	c == a;
	a == b;
	b == a;
}
void resultado(){
	cout << "************************************" << endl;
	cout << "Los valores se han intercambiado" << endl;
	cout << "El valor de A es: " << b << endl;
	cout << "El valor de B es: " << a << endl;
}
void despedida(){
	cout << " Fin del Programa ";
}
