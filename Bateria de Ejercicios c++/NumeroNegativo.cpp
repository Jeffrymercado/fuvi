/*
Nombre: Jeffry Mercado
Lugar: ITV
Descripcion: Numero Negativo
*/

#include <iostream>
#include <math.h>

using namespace std;
void datos();
void proceso();
void despedida ();
int a,b,c,M;

int main () {

    datos();
    proceso();
    despedida();
	
    return 0;
}


void datos(){
	cout <<"Ingrese un un numero, A: ";
	cin >> a;
	cout <<"Ingrese un un numero, B: ";
	cin >> b;
	cout <<"Ingrese un un numero, C: ";
	cin >> c;
	cout << "******************************" << endl;
}

void proceso(){
		if(a<0)
	{
		M = a*b*c;
		cout << "El Producto de los numeros es: " << M << endl;
	}
	
	if(a>0)
	{
		M = a+b+c;
		cout << "La suma de los numeros es: " << M << endl;
    }
}

void despedida (){
	cout << " Fin del Programa ";
}
