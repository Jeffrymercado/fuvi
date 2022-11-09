/*
Nombre : Jeffry Mercado
Lugar : ITV
descripcion : Media Aritmetica
*/

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
void  datos();
void proceso();
void despedida ();
int cant,num,i,suma;
double media;

int main (){

	datos();
	proceso();
	despedida();
	
	return 0;
}


void  datos(){
	cout << "Cuantos numeros desea ingresar: ";
	cin >> cant;
}
void proceso(){
	suma=0;
	for (i=1; i<=cant; i++){
		cout << "\nIngrese los numeros: " <<endl;
	cin >> num;	
		suma= suma + i;
	}

   	media= suma/cant;
	cout << "La Media Aritmetica es: " << media <<endl;
}
void despedida (){
	cout << " Fin del Prograna. " <<endl;
}




