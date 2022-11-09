/*
Nombre: Jeffry Mercado
Lugar : ITV
Descripcion: Salario de un empleado
*/

#include <iostream>

using namespace std;

void datos();
void proceso();
void despedida();
int a,b,i;
double x;

int main (){
	
	datos();
	proceso();
	despedida();
	
	return 0;
}

void datos(){
	cout << "Ingrese un numero: ";
	cin >> a;
	cout << "Ingrese un numero: ";
	cin >> b;
	if(a <=0 and b<=0){
		for (i=1; i<=2; i++){
		cout << " Numero Equivocado." <<endl;
		cout << "-------------------" <<endl;
		cout << "Ingrese un numero: ";
	    cin >> a;
     	cout << "Ingrese un numero: ";
     	cin >> b;
		}
	cout << "Ya Agoto el total de intentos. " <<endl;
	}
}


void proceso(){
	x = (a/(a-b))*b;
	cout << " El resultado es: " << x << endl;
}

void despedida(){
	cout << "---------------------------------------------------" <<endl;
	cout << " Fin de la Aplicacion " <<endl;
	cout << "---------------------------------------------------" <<endl;
}