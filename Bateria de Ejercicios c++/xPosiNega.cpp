/*
Nombre: Jeffry Mercado
Lugar : ITV
Descripcion: Articulos
*/

#include <iostream>
#include <cmath>
#include  <math.h>

using namespace std;

void datos();
void proceso();
void despedida();
int a;
double x;

int main(){
	
	datos();
	proceso();
	despedida();
	
   return 0;	
}

void datos(){
	
	cout << "Ingrese un numero: ";
	cin >> a;
}

void proceso(){
	if(a>0){
		x = pow((a-2/2),2) + pow((a-4/4),4) + pow((a-6/6),6) ;
		cout << a << " es igual a " << x <<endl;
	}
	if(a<0){
		x = pow((a+2/2),2) + pow((a+4/4),4) + pow((a+6/6),6) ;
		cout << a << " es igual a " << x <<endl;
	}
}

void despedida(){
	cout << "------------------------------------------" <<endl;
	cout << " Fin de la Aplicacion " <<endl;
	cout << "------------------------------------------" <<endl;
}