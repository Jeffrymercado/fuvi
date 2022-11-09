/*
nombre : Jeffry Mercado
Lugar : ITV
Descripcioon : Producto de numeros
*/

#include <iostream>

using namespace std;

void datos();
void resultado();
int n,i;

int main (){
	
	datos();
	resultado();
	
	return 0;
}

void datos(){
	cout << " Ingrese un numero: ";
	cin >> n;
	
	i=0;
	
	if(n > 1){
	   if ((n%2==0)){
	   	n = n/2;
	   } else {
	   	n = n * 3 + 1;
	   }	
	i = i + 1;
	}
}

void resultado(){
	cout << " i : " << i <<endl;
}
