/*
nombre : Jeffry Mercado
Lugar : ITV
Descripcioon : Suma de Numeros si es igual 
*/

#include <iostream>

using namespace std;

void datos();
void proceso();
void despedida();
int a,b,c,i;

int main () {
    
    datos();
    proceso();
    despedida();
	
	return 0;
}

void datos(){
	cout << "Ingrese 3 numeros: ";
	cout << "\nA-";
	cin >> a;
	cout << "\nB-";
	cin >> b;
	cout << "\nc-";
	cin >> c;
	
	if (a <=0 and b<=0 and c<=0){
		for (i=1; i <=2; i++){
		cout << "Numero Equivocado." <<endl;
		cout << "\nA-";
	    cin >> a;
     	cout << "\nB-";
	    cin >> b;
     	cout << "\nc-";
    	cin >> c;
		}
	cout << " Ya Agoto el total de intentos." <<endl;
	}
}

void proceso(){
	if (a >0 and b>0 and c>0){
	if (a+b == c){
		cout << " Son Iguales." <<endl;
	} else {
	    cout << " Son Distintos." <<endl;	
	}
	}
}

void despedida(){
	cout << " Fin de la Aplicacion.";
}






