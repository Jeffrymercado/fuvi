/*
Nombre : Jeffry Mercado
Lugar : ITV
Descripcion : Multiplos de un numero.
*/

#include <iostream>

using namespace std;
void datos ();
void proceso();
void despedida ();
int n,i,x,m;

int main() {
	
	datos();
	proceso();
	despedida();
	
	return 0;
}

void datos (){
	cout << "Que tabla de Multiplicar desea ver: ";
	cin >> n;
	cout << "Hasta que numero desea ver: ";
	cin >> m;
}

void proceso(){
	for (i=1 ; i <=m; i++){
	 x=	i*n;
	cout<< n <<"x"<< i <<"="<< x <<endl;
	}
}
void despedida (){
	cout << " Fin del Programa. " <<endl;
}