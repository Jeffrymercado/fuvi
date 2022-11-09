/*
Nombre : Jeffry Mercado
Lugar : ITV
Descripcioon : Precio de un Vuelo 
*/

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;
void datos();
void proceso();
void despedida();
int cant,num,i,suma;
double media;

int main () {

	datos();
	proceso();
	despedida();
	
	return 0;
}

void datos(){
	cout << "Cuantos numeros desea ingresar: ";
	cin >> cant;
}

void proceso(){
	suma = 0;
cout << "*********************************************************" <<endl;  
	cout << " Pares: ";
	for (i=1 ; i <=cant; i++) {
	if (i %2 ==0){
		cout << i << ",";	
    } else {
    	suma = suma + i;
    	media = suma / cant;
    	}        
	}
	cout <<endl; 
	cout << "*********************************************************" <<endl;  
	cout << " La media Aritmetica de los numeros impares es: " << media <<endl;
}

void despedida(){
	cout << " Fin de la Aplicacion.";
}