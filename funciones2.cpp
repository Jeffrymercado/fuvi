/*
Nombre : Jeffry Mercado
lugar : ITV
Descripcion: Introduccion a las funciones en c++
*/

#include <iostream>

using namespace std;
//1-Prototipo de Funciones
double sumaNumeros(double a, double b);

int main () {
	//3- LLamada de funciones
	double suma, a = 15 , b = 8.5;
	
	suma = sumaNumeros(a,b);
	cout << "La suma de " << a << " + " << b << " es: " <<suma;
	
	return 0;
}
// 2-Definicion 
double sumaNumeros(double a, double b){
	double resultado;
	resultado = a+b;
	
	return resultado;
}