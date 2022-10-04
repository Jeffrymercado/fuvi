/*
Nombre del Archivo: Aleatorios.cpp
Instrucciones. Generar numeros aleatorios 
*/
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){
	//long tiempoTranscurrido = time(0); // 1 enero 1970
	srand(time(0));
	int aleatorio = rand () % 10;
	int num;
	
	cout << "adivine un numero entre 0 y 10 ";
	cin>> num;
	
	if (num == aleatorio) {
		cout<< "Felicidades, acertaste ";
	}   else {
		cout << "Lo siento, no acertaste ";
	}
	return 0;
}