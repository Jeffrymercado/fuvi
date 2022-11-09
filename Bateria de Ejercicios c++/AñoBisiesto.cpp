/*
Nombre : Jeffry Mercado
Lugar : ITV
Descripcion : Año Bisisesto
*/

#include <iostream>

using namespace std;

void si();
void calcular();
void despedida ();
int anio,i;

int main() {

	cout << "Ingrese un Anio: " <<endl;
	cin >> anio;
	cout << "________________________________________" <<endl;
	si();
	calcular();
	despedida();
	
	return 0;
}

void si(){
	if(anio <=0){
		cout << "Numero Equivado." <<endl;
		cout << "________________________________________" <<endl;;
	for (i=1 ; i <=3; i++){
		cout << "Ingrese un Anio: " <<endl;
	    cin >> anio;
	}
	cout << "Ya Agoto el total de Intentos." <<endl;
	}
}

void calcular(){
	if (anio>0){
		if( anio%4==0){
		cout << anio << " es bisiesto. " <<endl;
	} else {
		cout << anio << " no es Bisiesto. " <<endl;
    }
	}
}

void despedida (){
	cout << "________________________________________" <<endl;
	cout << " Fin de la Aplicacion.";
}

