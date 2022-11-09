/*
Nombre : Jeffry Mercado
Lugar : ITV
Descripcion : Accer a un curso
*/

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
void desarrollo();
void despedida ();
int x,num;

int main() {
	
	cout << "Hasta que numero desea ver: ";
	cin >> num;
    desarrollo();
    despedida();
	
	return 0;
}

void desarrollo(){
	for (int i=1; i<num; i++){
		x = pow(i,2);
		cout << i << " x " << 2 <<  " = " << x <<endl;
	}
}

void despedida (){
	cout << " Fin de la Aplicacion. ";
}