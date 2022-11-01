/*
Nombre : Jeffry Mercado
lugar : ITV
Descripcion: Introduccion a las funciones en c++
*/

#include <iostream>

using namespace std;

//1- Prototipo de funcion
void saludar();
void otroSaludo(string nombre);

int main() {
	 //3-Llamada de la(s) funciones 
	 string nombre;
	 
	//saludar();
	cout << "Ingrese su Nombre: ";
	cin >> nombre;
	otroSaludo(nombre);
	
	return 0;
}
//2- Definicion de funciones
void saludar(){
	cout << "Bienvenido a esta App, desde la funcion saludar()";
}
void otroSaludo(string nombre){
	cout << "Bienvenido a esta App, " << nombre <<endl;
	saludar();
}
