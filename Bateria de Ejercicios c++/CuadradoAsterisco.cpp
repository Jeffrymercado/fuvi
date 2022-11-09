/*
Nombre : Jeffry Mercado
Lugar : ITV
Descripcion : cuadrado de Asterisco
*/

#include <iostream>

using namespace std;



void si();
void proceso ();
void despedida();
int n,i,r;
int main (){
	
	
	cout << " Ingrese un numero: ";
	cin >> n;
	si();
	proceso();
	despedida();

	return 0;
}

void si(){
		if (n <=0){
		cout << " Numero Equivocado." <<endl;
		cout << "*************************************" <<endl;
	for (i=1 ; i <=3; i++){
		cout << " Ingrese un numero: ";
	    cin >> n;
     	}
        cout << " Ya Agoto el total de Intentos." <<endl;
    	cout << "**************************************" <<endl;
	}
}

void proceso(){
   	for ( r=1 ; r<=n; r++){
		for ( i=1 ; i<=n; i++){
			cout << " * ";
		}
		cout << "\n";
	}
}
void despedida (){
    cout << " Fin de la Aplicacion ";
}


