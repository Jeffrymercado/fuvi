/*
Nombre : Jeffry Mercado
Lugar : ITV
Descripcion : Menu de restaurante 
*/

#include <iostream>
#include <iomanip>
using namespace std;

void menu();
void total();
int Bocad,refre,cerv;
double x,m,n;


int main () {

	menu();
	total();
	
	return 0;
}

void menu(){
	cout << "Ingrese el numero de Cantidades consumidas: ";
	cout << "\n1-Bocadillo de Jamon\n2-Refresco\n3-Cerveza:" <<endl;
	cout << "****************************************************" <<endl;
    cout << "\nBocadillo de jamon: ";
    cin >> Bocad;
    cout << "\nRefresco: ";
    cin >> refre;
	cout << "\nCerveza: ";
	cin >> cerv;
}

void total(){
	x = Bocad * 1.5;
	m = refre * 1.05;
	n = cerv * 0.75;
	
	cout << " --------------- MENU -----------------" <<endl;
	cout <<  setw(10) << " Bocadillo de Jamon " << setw (10) << "Refresco" << setw (10) << "Cerveza" << endl;
	cout << "------------CANTIDAD CONSUMIDA ----------" << endl;
	cout << setw(10) << Bocad << setw(18) << refre << setw(9) << cerv << endl;
	cout << " ---------------TOTAL -----------------" << endl;
	cout << setw(10) << x << "C$"<< setw(15) << m << "C$" << setw(9) << n << "C$" <<endl;
}


