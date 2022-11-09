/*
Nombre : Jeffry Mercado
Lugar : ITV
Descripcion : Escalera Invertida de Asterisco
*/

#include <iostream>
#include <stdio.h>

using namespace std;
void datos();
void proceso();
void despedida();
int n,i,r,j;


int main () {
    datos();
    proceso();
	despedida();
	
	return 0;
}


void datos(){
	cout << " Ingrese un numero: ";
	cin >> n;
}

void proceso(){
	 for ( int k = 1; k <= n; k++ )
    {
        for (int j = 1; j <= k; j++)
            cout << " ";
        cout << "*" ;
 
        for ( int j = 1; j <= n-k; j++)
            cout << " *";
 
        cout << endl;
    }
}

void despedida(){
    cout << " Fin de la Aplicacion ";	
}

