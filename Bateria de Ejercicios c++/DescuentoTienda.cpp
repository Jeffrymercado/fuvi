/*
Nombre : Jeffry Mercado
Lugar : ITV
Descripcion : Porcentaje niños
*/

#include <iostream>
#include <cmath>

using namespace std;

void saludar ();
void datos ();
void si();
void proceso();
void despedida ();
double mon,mont;
int mes,cant;

int main () {
	int mes,cant;
	
	saludar();
	datos();
	si();
	proceso();
	despedida();

	return 0;
}

void saludar (){
	cout << "############################################################" << endl;
	cout << "BIENVENIDO A TIENDA KD" << endl;
	cout << "############################################################" << endl;
}

void datos (){
	cout << " En que mes realizo su compra: Presione 2 si fue en febrero: ";
	cin >> mes;
	cout << "Ingrese el monto de su compra: ";
	cin >> cant;
}

void si(){
	if (cant <0 )
	{
		cout << " Numero Equivocado ";
		cout << "Ingrese el monto de su compra: ";
	    cin >> cant;
	}
	
}

void proceso(){
	if(mes == 2)
	{
	cout << "***********************************" << endl;
	cout << " Felicidades, ha recibido un descuento del 15% " << endl;
	mon = (cant*85)/100;
	cout << " El total a Pagar sera de: " << mon << "C$" << endl;
	cout << " Lo Esperamos Pronto " << endl;
	}
    else
    {
    mont = cant + 10;
	cout << "La cantidad a pagar sera de: " << mont << "C$" << endl;	
	}
}

void despedida (){
	cout << " Fin del Programa ";
}
