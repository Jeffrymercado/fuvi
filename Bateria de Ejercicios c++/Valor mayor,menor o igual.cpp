/* 
Nombre : Jeffry Mercado
Lugar : ITV
Descripcion : Valor Mayor, menor o igual
*/

#include <iostream>

using namespace std;

void datos();
void proceso();
void despedida();
int a,b;

int main () {
    
    datos();
    proceso();
    despedida();
	
	return 0;
}

void datos(){
	cout << "Ingrese un valor Numerico: ";
	cin >> a;
    cout << "Ingrese un valor Numerico: ";
	cin >> b;
	
if (a<=0 and b<=0){
	cout << "Numero equivocado." <<endl;
	cout << "-------------------------------------" <<endl;
	cout << "Ingrese un valor Numerico: ";
	cin >> a;
    cout << "Ingrese un valor Numerico: ";
	cin >> b;
}
cout << "Ya Agoto el total de Intentos." <<endl;
}

void proceso(){
	if (a>0 and b>0){
	if (a>b)
	{
		cout << " El Valor "<< a << " es Mayor que " << b << endl;
	}
	
	if (b>a)
	{
		cout << " El Valor "<< b << " es Mayor que " << a << endl;
	}
	
	if (a==b)
	{
		cout << " El Valor "<< a << " es igual que " << b << endl;
	}
}
}

void despedida(){
	cout << " Fin del Algoritmo ";
}