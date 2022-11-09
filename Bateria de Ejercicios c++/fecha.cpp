/*
Nombre: Jeffry Mercado
Lugar: ITV
Descripcion : Fecha
*/


#include <iostream>

using namespace std;

void datos();
void proceso();
void despedida();
int dia,mes,anio,i;

int main(){
	
	datos();
	proceso();
	despedida();
	
	return 0;
}

void datos(){
	cout << "----- DATOS ----- " <<endl;
	cout << "Ingrese un dia: ";
	cin >> dia;
	if(dia <=0){
		for( i=1; i<=2; i++){
		cout << "---------------------" <<endl;
		cout << " Numero Incorrecto " <<endl;
		cout << "Ingrese un dia: ";
	    cin >> dia;	
		}
	}
	cout << " Ingrese un mes: ";
	cin >> mes;
	cout << "Ingrese un anio: ";
	cin >> anio;
}

void proceso(){
	 
	 if(mes==1){
	 	cout << " Fecha: " << dia << " de Enero del " << anio <<endl;
	 }
	 
	  if(mes==2){
	 	cout << " Fecha: " << dia << " de Febrero del " << anio <<endl;
	 }
	 
	  if(mes==3){
	 	cout << " Fecha: " << dia << " de Marzo del " << anio <<endl;
	 }
	 
	  if(mes==4){
	 	cout << " Fecha: " << dia << " de Abril del " << anio <<endl;
	 }
	 
	  if(mes==5){
	 	cout << " Fecha: " << dia << " de Mayo del " << anio <<endl;
	 }
	 
	  if(mes==6){
	 	cout << " Fecha: " << dia << " de Junio del " << anio <<endl;
	 }
	 
	  if(mes==7){
	 	cout << " Fecha: " << dia << " de Julio del " << anio <<endl;
	 }
	 
	  if(mes==8){
	 	cout << " Fecha: " << dia << " de Agosto del " << anio <<endl;
	 }
	 
	  if(mes==9){
	 	cout << " Fecha: " << dia << " de Septiembre del " << anio <<endl;
	 }
	 
	  if(mes==10){
	 	cout << " Fecha: " << dia << " de Octubre del " << anio <<endl;
	 }
	 
	  if(mes==11){
	 	cout << " Fecha: " << dia << " de Noviembre del " << anio <<endl;
	 }
	 
	  if(mes==12){
	 	cout << " Fecha: " << dia << " de Diciembre del " << anio <<endl;
	 }
	 
	 if (mes>12){
	 	cout << " Ese mes no existe " <<endl ;
	 }
}

void despedida(){
	cout << "------------------------------" <<endl;
	cout << " Fin de la Aplicacion " <<endl;
	cout << "------------------------------" <<endl;
}


