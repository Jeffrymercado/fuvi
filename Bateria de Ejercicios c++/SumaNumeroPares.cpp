/*
Nombre : Jeffry Mercado
Lugar : ITV
descripcion : Suma de numeros Pares
*/

#include <iostream>

using namespace std;
void datos();
void proceso();
void despedida();
int n,suma,i;

int main (){

	datos();
	proceso();
	despedida();

	return 0;
}

void datos(){
	cout << "Ingrese un numero: " << endl;
	cin >> n;
	
	if(n<=0){
		for(i=1;i<=3;i++){
			cout << "Ingrese un numero: " << endl;
        	cin >> n;
		}
		 cout << "Ya Agoto el total de Intentos." <<endl;
	}
}

void proceso(){
	if(n>=1){
			for(i=1; i<=n; i++)
	{
		if (i % 2 == 0){
			suma = suma + i;
		}
	}
	cout << "La suma de Numeros pares es: " << suma <<endl;
	}
}

void despedida(){
	cout << " Fin de la Aplicacion ";
}