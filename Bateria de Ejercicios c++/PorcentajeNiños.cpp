/*
Nombre : Jeffry Mercado
Lugar : ITV
Descripcion : Porcentaje niños
*/

#include<iostream>
#include <cmath>

using namespace std;

void datos ();
void si();
void resultado();
void despedida();
int h,m,total,N,M;

int main () {
	
	datos();
	si();
	resultado();
	despedida();

	return 0;
}

void datos (){
	cout << "Cual es el total de estudiantes en el curso: ";
	cin >> total;
	cout << "Ingrese la cantidad de Hombres: ";
	cin >> h;
	cout << "Ingrese la cantidad de mujeres: ";
	cin >> m;
}

void si(){
	if (total<0 and h<0 and m<0)
	{
	cout << "*********************************************" << endl;
	cout << " Numero Equivocado " << endl;
	cout << "Cual es el total de estudiantes en el curso: ";
	cin >> total;
	cout << "Ingrese la cantidads de Hombres: ";
	cin >> h;
	cout << "Ingrese la cantidads de mujeres: ";
	cin >> m;
	}
}

void resultado(){
	N = (h*100)/100;
	M = (m*100)/100;
	
	cout << "************************************" << endl;
	cout << " Porcentaje de Alumnos: " << N << "%" << endl;
	cout << " Porcentaje de Alumnas: " << M << "%" << endl;
}

void despedida(){
	cout << " Fin del Programa ";
}