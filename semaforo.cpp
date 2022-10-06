/*
nombre del archivo: semaforo.cpp
Autor: Jeffry Mercado
*/

#include<iostream>

using namespace std;

int main(){
	int edad;
	char color;
	
	cout << "Ingrese su edad: ";
	cin >> edad;
	
	if(edad < 17){
		cout << "usted no tiene la edad suficiente para conducir" << endl;
		} else {
			cout << "Color del semaforo; r=rojo, A=Amarillo,v=verde) ";
			cin >> color;
			
			if(color == 'r'){
				cout << "baje la velocidad hasta detenerse suavemente." << endl;
			} else if (color == 'a') { 
			cout << "Tenga precaucion.No puede avanzar" << endl;
			} else if ( color == 'v') {
			cout << "Siga adelante" << endl;
			} else {
				cout << "Color incorrecto" << endl;
			}	
		}
	    cout << "Fin del Programa" << endl;
	
	return 0;
}
	
	