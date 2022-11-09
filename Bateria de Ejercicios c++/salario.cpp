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
int salario, horas;
double x,m;

int main (){
	
	datos();
	proceso();
	despedida();
	
	return 0;
}

void datos(){
	cout << " Ingrese su nombre: ";
	getline(cin,nombre),
	cout << "Ingrese su salario Basico: ";
	cin >> salario;
	cout << "Cuantas horas trabaja a la semana: ",
	cin >> horas;
}

void proceso(){
	if(horas>48){
		x = salario * 35/100;
		 m = salario + x;
		cout << nombre << " Su Salario Neto es de: " << m << " C$ " <<endl;
	} else {
		cout << nombre << " Su salario es de: " << salario << " C$ " <<endl;
	}
}

void despedida(){
	cout << "-----------------------------------------------------" <<endl;
	cout << " Fin de la Aplicacion " <<endl;
	cout << "-----------------------------------------------------" <<endl;
}