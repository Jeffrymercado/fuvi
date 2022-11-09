/*
Nombre: Jeffry Mercado
Lugar : ITV
Descripcion: Matricula Colegio
*/

#include <iostream>

using namespace std;

void saludar();
void datos();
void proceso();
void despedida();
int cant,i;
double x,m;

int main (){
	
	saludar();
	datos();
	proceso();
	despedida();
	
	return 0;
}

void saludar(){
	cout << "------------------------------------------" <<endl;
	cout << "   Bienvenidos a colegio - MI CASITA -   " <<endl;
	cout << "------------------------------------------" <<endl;
}

void datos(){
	cout << "Cuantos hijos tiene en nuestro centro escolar: ";
	cin >> cant;
	if(cant<=0){
		for (i=1; i<=2; i++){
			cout <<" Numero Equivocado " <<endl;
				cout << "Cuantos hijos tiene en nuestro centro escolar: ";
	            cin >> cant;
		}
	cout << " Ya Agoto el total de Intentos. ";
	}
}

void proceso(){
	if(cant >0){
	if(cant==2){
	    x= 1500+700;
    	m= (x*90)/100;
   	cout << " Matricula es: C$1500." <<endl;
	cout << " Mensualidad es: C$700." <<endl;
	cout << "------------------------------------------" <<endl;
	cout << "La cantidad total a pagar sera de: " << m << " C$ " <<endl;
	cout << "------------------------------------------" <<endl;	
	}
	if(cant==3){
	   x= 1500+700;
	   m= (x*85)/100;
	cout << " Matricula es: C$1500." <<endl;
	cout << " Mensualidad es: C$700." <<endl;
	cout << "------------------------------------------" <<endl;
	cout << "La cantidad total a pagar sera de: " << m << " C$ " <<endl;
	cout << "------------------------------------------" <<endl;	
	}
	if(cant>3){
		x= 1500+700;
		m= (x*80)/100;
	cout << " Matricula es: C$1500." <<endl;
	cout << " Mensualidad es: C$700." <<endl;
	cout << "------------------------------------------" <<endl;
	cout << "La cantidad total a pagar sera de: " << m << " C$ " <<endl; 	
	cout << "------------------------------------------" <<endl;
	}
}
}

void despedida(){
	cout << " MI CASITA, gracias por preferirnos." <<endl;
	cout << "---------------------------------------------" ;
}