/*
Nombre : Jeffry Mercado
Lugar : ITV
Descripcion : Accer a un curso
*/

#include <iostream>

using namespace std;

void saludar();
void si();
void certificado(int titulo);
void despedida ();
string nombre;
int i,edad,titulo;

int main() {
    string nombre;
    
    saludar();
   	cout << "Ingrese su nombre: ";
	getline(cin,nombre);
	cout << "\nIngrese su edad: ";
	cin >> edad;
	si();
    certificado(titulo);
    despedida ();

	return 0;
}

void saludar(){
	cout << "______________________________________________________"  << endl;
	cout << "     INSTITUTO TECNOLOGICO VICTORIA " << endl;
	cout << "______________________________________________________"  << endl;
}

void si(){
	if(edad <=0){
   	for(i=1; i<=3;i++){
   			cout << "\nIngrese su edad: ";
        	cin >> edad;
	   }
   }
if(edad <16){
   	cout << " No cumple con la edad Establescida "<<endl;
   	cout << " La edad necesaria es de 16 " <<endl;
   }
}

void certificado(int titulo){
	cout << "Posee un titulo de Baciller: " << endl;
   cout << "\n1-Si\n2-no" << endl;
   cin >> titulo;
   
   if (titulo==1){
   	cout << nombre <<  " Felicidades, puede acceder a nuestro Instituto " << endl;
   } else {
   	cout << " Puedes Acceder mediante el Proceso de Pruebas Basicas." << endl ;
   }
}

void despedida(){
	cout << "______________________________________________________"  << endl;
    cout << " ORGULLOSOS DE EDUCAR PARA TRANSFORMAR NUESTRO FUTURO " << endl;
   	cout << "______________________________________________________"  << endl;
	cout << " Fin de la aplicacion. ";
}


