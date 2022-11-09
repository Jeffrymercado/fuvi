/*
Nombre : Jeffry Mercado
Lugar : ITV
Descripcion : Notas de los alumnos
*/

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
void datos();
void resultado();
void despedida();
string nombre;
int prac,prob,teoria,suma,i;
double Notafinal;

int main () {
	
    datos();
    resultado();
    despedida();

	return 0;
}

void datos(){
	cout << "Ingrese su Nombre: ";
    getline(cin,nombre);
	
	cout << "Ingrese sus notas: " <<endl;
	cout << " Las Notas deberan ser Mayores a 0 y Menores que 10 " <<endl;
	cout << "**************************************************" <<endl;
	cout << "Practica: " <<endl;
	cin >> prac;
	cout << "Resolucion de Problemas: " <<endl;
	cin >> prob;
	cout << "Teoria: " <<endl;
	cin >> teoria;
}

void resultado(){
	suma= prac + prob + teoria;
	Notafinal = suma/3;
	
	cout << "**************************************************" <<endl;
	cout << nombre << " su nota final es: " << Notafinal << " pts "<<endl;
	cout << "**************************************************" <<endl;
}
void despedida(){
	cout << " Fin de la Aplicacion ";
}


