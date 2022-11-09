/*
Nombre : Jeffry Mercado
Lugar : ITV
Descripcioon : Precio de un Vuelo 
*/

#include <iostream>

using namespace std;

void saludo();
void datos ();
void proceso();
void despedida();
int dias,km,i;
double x,m;

int main () {
	
	saludo();
	datos();
	proceso(),
	despedida();
	
	return 0;
} 

void saludo(){
	cout << "*********************************" <<endl;
	cout << "BIENVENIDO A LA LINEA AEREA." <<endl;
	cout << "*********************************" <<endl;
}
void datos (){
	cout << " Cuantos dias estara de viaje: ";
	cin >> dias;
	cout << "De cuantos kilometros es su viaje: ";
	cin >> km;
	
	if (dias <=0 and km <=0){
		for (i=1 ; i<=2; i++){
			cout << "*********************************" <<endl;
			cout << "Numero Equivocado." <<endl;
			cout << "*********************************" <<endl;
			cout << " Cuantos dias estara de viaje: ";
	        cin >> dias;
         	cout << "De cuantos kilometros es su viaje: ";
        	cin >> km;	
		}
		cout << " Ya Agoto el Total de Intentos. " <<endl;
	}
}

void proceso(){
		if (dias >0 and km >0){
		if (dias>=7 and km>1000) {
		cout << " FELICIDADES, A RECIBIDO UN DESCUENTO DEL 30%." <<endl;
		x = (km * 8.50);
		m = (x * 70)/100;
	    cout << " La cantidad total a pagar sera de: " << m << " C$ " <<endl;
	} else {
		x = (km * 8.50);
		 cout << " La cantidad total a pagar sera de: " << x << " C$ " <<endl;
	}
	}
}

void despedida(){
	cout << "*********************************" <<endl;
	cout << " Fin de la Aplicacion.";
}