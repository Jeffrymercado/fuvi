/*
Nombre: Jeffry Mercado
Lugar : ITV
Descripcion: Precio de gasolina
*/

#include <iostream>

using namespace std;

void datos();
void proceso();
void despedida();
int litros,tipo,i;
double x;


int main (){
	
	datos();
	proceso();
	despedida();
	
	return 0;
}

void datos (){
	cout << " Cuantos litros de Gasolina desea: ";
	cin >> litros;
	cout << " ---------- TIPOS ---------------" <<endl;
	cout << "\n1-Regular\n2-Super\n3-Diesel " <<endl;
	cin >>tipo;
	if(litros <=0){
		for (i=1; i<=2; i++){
			cout << "---------------------------" <<endl;
			cout << " Numero Equivocado" <<endl;
			cout << " Cuantos litros de Gasolina desea: ";
	        cin >> litros;
		}
	cout << " Ya Agoto el total de intentos. " <<endl;
	}
}

void proceso(){
	if (litros >0){
	
	if(tipo == 1){
		x = litros * 32.85;
		cout << " El Total a Pagar sera de: " << x << " C$ " <<endl;
	}
	
	if(tipo ==2){
		x = litros * 33.48;
		cout << " El Total a Pagar sera de: " << x << " C$ " <<endl;
	}
	
	if(tipo ==3){
		x = litros * 28.45;
		cout << " El Total a Pagar sera de: " << x << " C$ " <<endl;
	}
}
}

void despedida(){
	cout << "---------------------------------------------------" <<endl;
	cout << " Fin de la Aplicacion " <<endl;
	cout << "---------------------------------------------------" <<endl;
}