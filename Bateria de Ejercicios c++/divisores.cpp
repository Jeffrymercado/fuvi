/*
Nombre: Jeffry Mercado
Lugar : ITV
Descripcion: Divisores de un numero
*/

#include <iostream>

using namespace std;

void datos();
void proceso();
void despedida();
int cant,i;


int main (){
	
	datos();
	proceso();
	despedida();
	
	return 0;
}

void datos(){
	cout << "Hasta que numero desea ver: ";
	cin >> cant;
	if(cant <=0){
		for (i=1; i<=2; i++){
			cout << "-------------------------------" <<endl;
			cout << " Numero Equivocado." <<endl;
			cout << "Hasta que numero desea ver: ";
        	cin >> cant;	
    	}
    cout << "Ya Agoto el total de Intentos." <<endl;
	}
}

void proceso(){
	if(cant >0 ){
		cout << " Divisores: ";
	for(i=1; i<=cant; i++){
		if(cant % i ==0){
			cout << i << ",";
		}
	}
	
	}
}

void despedida(){
	cout <<endl; 
	cout << "-------------------------------" <<endl;
	cout << " Fin de la Aplicacion. "<<endl;
}