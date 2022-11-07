/* 
Nombre del Autor : Jeffry Mercado 
Lugar : ITV
Descripcion : Areas y volumen de una Piramide
*/

#include <iostream>

using namespace std;

void datos();
void proceso();
int Pbase,Ap,Abase, h,i;
double Al, At,v;

int main () {
    
    datos();
    proceso();

	return 0;
}

void datos(){
	cout << "Ingrese el valor de Perimetro Base: ";
	cin >> Pbase;
	cout << "Ingrese el valor del Apotema Base: ";
	cin >> Ap;
	cout << "Ingrese el valor del Area Base: ";
	cin >> Abase;
	cout << "Ingrese el valor de la Altura: ";
	cin >> h;
	
if(Pbase <=0 and Ap<=0 and Abase<=0 and h<=0){
	for(i=1; i<=2; i++){
		cout << "------------------------------" <<endl;
		cout << "Numero Equivocado. " <<endl;
		cout << "Ingrese el valor de Perimetro Base: ";
    	cin >> Pbase;
	    cout << "Ingrese el valor del Apotema Base: ";
	    cin >> Ap;
	    cout << "Ingrese el valor del Area Base: ";
	    cin >> Abase;
    	cout << "Ingrese el valor de la Altura: ";
	    cin >> h;
	}
	cout << "Ya Agoto el Total de Intento.";
}
}

void proceso(){
	if(Pbase >0 and Ap>0 and Abase>0 and h>0){
	Al = (Pbase * Ap)/2;
	At = Al + Abase;
	v = Abase * h / 3;
	cout << "*************************************" << endl;
	cout << "El valor del Area Lateral es: " << Al << endl;
	cout << "El valor del Area Total es: " << At << endl;
	cout << "eL volumen es: " << v << endl;
	}
		
}