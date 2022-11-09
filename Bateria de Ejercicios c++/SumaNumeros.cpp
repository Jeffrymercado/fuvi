/*
Nombre : Jeffry Mercado
Lugar : ITV
Descripcion: Suma de N numeros Naturales
*/

#include <iostream>

using namespace std;

void datos();
void resultado();
void despedida();
int n,suma,i;

int main() {

	datos();
	resultado();
	despedida();

    return 0;
}

void datos(){
	cout << "Ingrese un numero: " << endl;
	cin >> n;
	if(n <=0){
		cout << " Numero Equivocado " <<endl;
	for(i=1 ; i <=3; i++){
	cout << "Ingrese un numero: " << endl;
	cin >> n;
	}
	cout << "Ya Agoto el total de intentos " <<endl;
	}
	suma=0;
    for (i=1; i<=n; i=i+1)	
		{
		suma = suma + i;
	}
}


void resultado(){
		if (n>0){
		cout << "La suma de los numeros es: " << suma <<endl;
		}

}
void despedida(){
	cout << " Fin de la Aplicacion ";
}