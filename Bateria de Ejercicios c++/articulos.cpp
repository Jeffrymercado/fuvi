/*
Nombre: Jeffry Mercado
Lugar : ITV
Descripcion: Articulos
*/

#include <iostream>

using namespace std;
void menu();
void proceso();
void si();
void despedida();
int cant,x,art;

int main (){
	
	menu();
	proceso();
	si();
	despedida();
	
	return 0;
}

void menu(){
	cout << " ----------- Articulos ----------------" <<endl;
	cout << "\n1-Telefonos\n2-Computadoras\n3-Tablet " <<endl;
	cin >> art;
	cout << "Cuantos articulos desea: ";
	cin >> cant;
}

void proceso(){
	if(art==1){
		if(cant<10){
		cout << "La cantidad de existencia es de 50 Articulos.";
		x = 50*20/100;
		cout << " La cantidad total de su pedido es de: " << x << " Articulos " <<endl;
		}
		if( cant>10 and cant <20){
		cout << "La cantidad de existencia es de 50 Articulos.";
		x = 50*15/100;
		cout << " La cantidad total de su pedido es de: " << x << " Articulos " <<endl;
		}
		if(cant >=20){
		cout << "La cantidad de existencia es de 50 Articulos.";
		x = 50*10/100;
		cout << " La cantidad total de su pedido es de: " << x << " Articulos " <<endl;
	}
   }
}
   
void si(){
	if(art==2){
		if(cant<10){
		cout << "La cantidad de existencia es de 80 Articulos.";
		x = 80*20/100;
		cout << " La cantidad total de su pedido es de: " << x << " Articulos " <<endl;
		}
		if( cant>10 and cant <20){
		cout << "La cantidad de existencia es de 80 Articulos.";
		x = 80*15/100;
		cout << " La cantidad total de su pedido es de: " << x << " Articulos " <<endl;
		}
		if(cant >=20){
		cout << "La cantidad de existencia es de 80 Articulos.";
		x = 80*10/100;
		cout << " La cantidad total de su pedido es de: " << x << " Articulos " <<endl;
	}
   }	
if(art==3){
		if(cant<10){
		cout << "La cantidad de existencia es de 100 Articulos.";
		x = 100*20/100;
		cout << " La cantidad total de su pedido es de: " << x << " Articulos " <<endl;
		}
		if( cant>10 and cant <20){
		cout << "La cantidad de existencia es de 100 Articulos.";
		x = 100*15/100;
		cout << " La cantidad total de su pedido es de: " << x << " Articulos " <<endl;
		}
		if(cant >=20){
		cout << "La cantidad de existencia es de 100 Articulos.";
		x = 100*10/100;
		cout << " La cantidad total de su pedido es de: " << x << " Articulos " <<endl;
	}
   }
}   
void despedida(){
	cout << "------------------------------------------" <<endl;
	cout << " Fin de la Aplicacion " <<endl;
	cout << "------------------------------------------" <<endl;
}