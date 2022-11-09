/*
Nombre : Jeffry Mercado
Lugar : ITV
Descripcion : Maximo, MInimo, Media Aritmetica.
*/

#include <iostream>


using namespace std;
void datos ();
void proceso();
void resultado();
void despedida();
int cant,i;
int maxi=0,mini=100;
float sum=0,n;

int main() {

	datos();
	resultado();
	despedida();
	
	return 0;
}


void datos (){
	cout << "Cuantos numeros desea ingresar: ";
	cin >> cant;
	
	cout << "Ingrese los numeros: " <<endl;

	for (i=0; i<cant; i++) {
	    cin >> n;
	
	 if (n <= mini)
    	mini = n;
	 if (n >= maxi) 
		maxi = n;
		
	sum += n;
	}
}

void resultado(){

	cout << "\nMinimo: " << mini;
	cout << "\nMaximo: " << maxi;
	cout << "\nLa Media Aritmetica es: " << sum/cant <<endl;
}

void despedida(){
	cout << " Fin del Programa. " <<endl;
}
