/*
Nombre del Archivo: Aleatorios.cpp
Instrucciones. Generar numeros aleatorios 
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main (){
	srand (time());
	int valorMax = 1, valor Max= 6;
	
    short dado1 =(rand() % (valorMax - valorMin + 1)) + valorMin;
     short dado2 =(rand() % (valorMax - valorMin + 1)) + valorMin;	
     
     cout << dado1 << " , " << dado2;
     
     return 0;
}



