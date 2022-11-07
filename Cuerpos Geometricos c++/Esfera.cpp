/* 
Nombre del Autor : Jeffry Mercado 
Lugar : ITV
Descripcion : Areas y volumen de una Esfera
*/

#include <iostream>
# include <math.h>

using namespace std;

void datos();
void proceso();
int r,i;
double A,v;

int main () {
   
    datos();
    proceso();
  
   return 0;	
}

void datos(){
	cout << "Ingrese el valor del Radio Menor: ";
    cin >> r;
if(r<=0){
	for (i=1; i<=2; i++){
		cout << "Numero Equivocado " <<endl;
		cout << "Ingrese el valor del Radio Menor: ";
        cin >> r;
	}
	cout << "Ya Agoto el total de Intentos. " <<endl;
}
}

void proceso(){
  if(r>0){
  	A = 4 * M_PI * pow(r,2);
    v = 1.33 * M_PI * pow(r,3);

cout << "**************************************"<< endl;
cout << "El Area de una Esfera es: " << A << endl;
cout << "El Volumen de una esfera es: " << v << endl;
  }	
}