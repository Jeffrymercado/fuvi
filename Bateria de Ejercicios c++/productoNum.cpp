/*
nombre : Jeffry Mercado
Lugar : ITV
Descripcioon : Producto de numeros
*/

#include <iostream>

using namespace std;

void datos();
void  proceso();
void despedida();
int a,b,i,x;


int main (){
	
	datos();
	proceso();
	despedida();
	
	return 0;
}

void datos(){
	cout << " ----- DATOS ----- ";
	cout << "\nA= " ;
	cin >> a;
	cout << "\nB= ";
	cin >> b;
	if(a <=0 and b<=0){
		for (i=1; i<=2; i++){
			cout << "----------------- " <<endl;
			cout << " Numero Equivocado " << endl;
			cout << "----------------- " <<endl;
			cout << " ----- DATOS ----- ";
         	cout << "\nA= " ;
	        cin >> a;
	        cout << "\nB= ";
        	cin >> b;
		}
	cout << " Ya Agoto el total de intentos. " <<endl;	
	}
}

void proceso(){
	if (a>0 and b>0){
		x = a * b;
	cout << " El Producto de " << a << " y " << b << " es: " <<x <<endl;
	}
}

void despedida(){
	cout << "--------------------------------------" <<endl;
	cout << " Fin del Programa " <<endl;
	cout << "--------------------------------------" <<endl;
}