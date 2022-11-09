/*
Nombre : Jeffry Mercado
Lugar : ITV
Descripcion : Contraseña
*/

#include <iostream>
#include <iomanip>

using namespace std;
void saludar();
void desarrolo();
void despedida ();
int i;
string nombre,contra;
 
int main(){
    saludar();
	cout << "Ingrese su nombre: ";
	getline(cin,nombre);
	cout << "Ingrese su contrasena: ";
	cin >> contra;
    desarrolo();
    despedida();
	
	return 0;
}

void saludar(){
	cout << "****************************************" <<endl;
	cout << "BIENVENIDO A LA APLICACION META " <<endl;
	cout << "****************************************" <<endl;	
}

void desalloro(){
		if(contra == "tuani"){
		cout << "Bienvenido a la Aplicacion." <<endl;
	} else {
		for (i=1; i <=3 ; i++){
			cout << "Ingrese su contrasena: ";
	        cin >> contra;
		}
		cout << "Ya agoto el total de intentos. " <<endl;
	}
}

void despedida (){
	cout << " Fin de la Aplicacion ";
}


