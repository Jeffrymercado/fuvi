/*
Nombre : Jeffry Mercado
Lugar : ITV
Descripcioon : Conversion de Temperatura
*/

#include <iostream>

using namespace std;

void datos();
void proceso();
void despedida();


int temp,f,c,i,m;
double x;

int main () {
	
    datos();
    proceso();
    despedida();
	
	return 0;
}

void datos(){
	cout << "De que Temperatura desea convertir: ";
	cout << "\n1- F a C\n2- C a F " << endl;
	cin >> temp;
	cout << "*******************************************" <<endl;
}

void proceso(){
		if (temp ==1){
		cout << "Ingrese el valor de la Temperatura fahrenheit: ";
		cin >> f;
		x = (f-32)/1.8;
		cout << "La Temeratura celsius es de: " << x << " grados." <<endl;
	}
	
	if (temp ==2){
		cout << "Ingrese el valor de la Temperatura Celsius: ";
		cin >> c;
		x = (c*1.8)+32;
		cout << "La Temeratura Fahrenheit es de: " << x << " grados." <<endl;
	}
}
void despedida(){
	cout << "*******************************************" <<endl;
	cout << " Fin de la Aplicacion. ";
}