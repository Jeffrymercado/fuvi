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
string nombre;
int salario,i;

int main (){
	
	datos();
	proceso();
	despedida();
	
	return 0;
}

void datos(){
	cout << "Ingrese su nombre: ";
	getline (cin,nombre);
	cout << " Ingrese su salario: ";
	cin >> salario;
	if(salario <=0){
		for (i=1; i<=2; i++){
			cout << " Numero Equivocado." <<endl;
			cout << "-------------------" <<endl;
			cout << " Ingrese su salario: ";
         	cin >> salario;
		}
	cout << "Ya Agoto el total de intentos. " <<endl;
	}
}

void proceso(){
	if(salario >0){
	
	if(salario <20000){
		cout << nombre << " Lo Sentimos, no tiene un salario suficiente para optar por un credito." <<endl;
	}
	if(salario >20000 and salario <50000){
		cout << nombre << " Usted tiene derecho a un credito de: C$ 500,000 " <<endl;
	}
	if(salario >50000 and salario <1000000){
		cout << nombre << " Usted tiene derecho a un credito de: C$ 2,000,000 " <<endl;
	}
}
}

void despedida(){
	cout << "---------------------------------------------------" <<endl;
	cout << " Fin de la Aplicacion " <<endl;
	cout << "---------------------------------------------------" <<endl;
}