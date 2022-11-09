/*
Nombre: Jeffry Mercado
Lugar: ITV
Descripcion: Peso ideal
*/

#include <iostream>
#include <cmath>
#include <math.h>


using namespace std;

void datos();
void proceso();
int peso,otro,i,cant,pesoIdeal,x;
double h;
string nomb;

int main (){
	
	datos();
	proceso();
	
	return 0;
}

void datos(){
	cout << " Cuantos datos de Pacientes desea Agregar: ";
	cin >> cant;
	for(i=1; i<=cant; i++){
	cout << "----- DATOS ----- " <<endl;
	cout << " Ingrese su Nombre: ";
    getline(cin >> ws,nomb);
	cout << " Ingrese su Peso: ";
	cin >> peso;
	cout << "Ingrese su Altura: ";
	cin >> h;	
	}
}

void proceso(){
	for(i=1; i<=cant; i++){
	pesoIdeal= peso / pow(h,2);
}
for(i=1; i<=cant; i++){
	if(pesoIdeal>26){
  	cout << nomb << " contactenos para programar su cita "<<endl;
}
}
}