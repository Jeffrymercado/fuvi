/* 
Nombre del Autor : Jeffry Mercado 
Lugar : ITV
Descripcion : Areas y volumen de un Cono 
*/

#include <iostream>
#include <math.h>

using namespace std;

void datos();
void proceso();
int r,g,h,i;
double Al,At,v;

int main () {

    datos();
    proceso();
    
	return 0;
}

void datos(){
   	cout << "Ingrese el valor del Radio Menor: ";
	cin >> r;
	cout << "Ingrese el valor de la generatriz: ";
	cin >> g;
	cout << "Ingrese el valor de la Altura: ";
	cin >> h;
	
	if(r <=0 and g<=0 and h<=0){
	for(i=1; i<=3; i++){
	cout << "----------------------------------" <<endl;
	cout << "Numero Equivocado." <<endl;
	cout << "Ingrese el valor del Radio Menor: ";
	cin >> r;
	cout << "Ingrese el valor de la generatriz: ";
	cin >> g;
	cout << "Ingrese el valor de la Altura: ";
	cin >> h;
	}
	cout << "Ya Agoto el total de intentos. "<<endl;
	}	
}

void proceso(){
	if(r >0 and g>0 and h>0){
	Al = M_PI * r * g;
	At = M_PI * r * (g+r);
	v = M_PI * pow(r,2)*h/3;
	
	cout << "******************************" << endl;
	cout << "El Area Lateral es de: " << Al << endl;
	cout << "El Area Total es de: " << At << endl;
	cout << "El volumen es de: " << v << endl;
}
}