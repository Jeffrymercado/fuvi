/*
nombre : Jeffry Mercado
Lugar : ITV
Descripcioon : Numero a buscar en el Arreglo 
*/

#include <iostream>

using namespace std;

int n,j,i,c=0,x,num[10];
void buscar();
void desarrollo();
void despedida();

int main () {
	
	cout << "Ingrese un numero: ";
	for (i=0 ; i<10; i++){
		cout << " ";
		cin >> num[i];
	}
	
	buscar();
	desarrollo();
	despedida();
	
	return 0;
}

void buscar(){
	cout << "Ingrese el numero a buscar: ";
	cin >> n;
	if(n<=0){
		for(i=1; i<=2; i++){
		cout << "---------------------------" <<endl;
		cout << " Numero equivocado " <<endl;
		cout << "Ingrese el numero a buscar: ";
	    cin >> n;
		}
	cout << " Ya Agoto el total de Intentos " <<endl;
	}
}

void desarrollo (){
	if(n>0){
		for (i = 0 ; i < 10; i++) {
		if( n == num[i]){
			j = i;
			c++;	
		}
	}
		if (c > 0){
			cout << " El numero " << n << " esta en la posicion: " << j+1 <<endl;		
		} else {
			cout << "El Numero no se encuentra en el Arreglo " <<endl;	
		}
	}
	
}
void despedida(){
	cout << "__________________________________________" <<endl;
	cout << " Fin de la Aplicacion ";
}
