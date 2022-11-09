/*
Nombre : Jeffry Mercado
Lugar : ITV
Descripcion : Numero Par
*/

#include <iostream>
#include <cmath>

using namespace std;

void  datos();
void proceso ();
void despedida();
int a;

int main () {
	
	datos();
	proceso();
	despedida();
	
	return 0;
}

void  datos(){
	cout << "Ingrese un numero: ";
	cin >> a;
}

void proceso (){
	if ( a%2 ==0)
	{
	cout << " El numero " << a << " es Par " << endl;
	}
	else
	{
		cout << "El numero " << a << " es impar " << endl;
	}
	
	if (a==0)
	{
	cout << " El Numero " << a << " no es par ni impar" << endl;
	}
	
}

void despedida(){
	cout << " Fin del Programa ";
}
