/* 
Nombre : Jeffry Mercado
Lugar : ITV
Descripcion : Valor Mayor
*/

#include <iostream>

using namespace std;
void datos();
void proceso();
void despedida();
int a,b,c;

int main () {

	datos();
	proceso();
	despedida();

	return 0;
}

void datos(){
	cout << "Ingrese un valor numerico: A: ";
	cin >> a;
	cout << "Ingrese un valor numerico: B: ";
	cin >> b;
	cout << "Ingrese un valor numerico: C: ";
	cin >> c;
if(a<=0 and b<=0 and c<=0){
	cout << " Numero Equivocado." <<endl;
	cout << "---------------------------------------" <<endl;
	cout << "Ingrese un valor numerico: A: ";
	cin >> a;
	cout << "Ingrese un valor numerico: B: ";
	cin >> b;
	cout << "Ingrese un valor numerico: C: ";
	cin >> c;
}
cout << "Ya Agoto el total de Intentos. "<<endl;
}

void proceso(){
		
	if (a>b and a>c)
	{
		cout << " El valor " << a << " es el mayor de todos " << endl ;
	}
	
		if (b>a and b>c)
	{
		cout << " El valor " << b << " es el mayor de todos " << endl ;
	}
	
		if (c>a and c>b)
	{
		cout << " El valor " << c << " es el mayor de todos " << endl;
	}
}

void despedida(){
	cout << " Fin del Programa ";
}	