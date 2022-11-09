/*
nombre : Jeffry Mercado
Lugar : ITV
Descripcioon : Maximo Comun Divisor
*/

#include <iostream>

using namespace std;

void datos();
void proceso();
void resultado();
int a,b,res,i,mcd;

int main (){
	
	datos();
	proceso();
	resultado();
	
	return 0;
}

void datos(){
	cout << " ----- DATOS ----- ";
	cout << "\nA= " ;
	cin >> a;
	cout << "\nB= ";
	cin >> b;
	if(a <=0 and b<=0){
		for (i=1; i<=2; i++){
			cout << "----------------- " <<endl;
			cout << " Numero Equivocado " << endl;
			cout << "----------------- " <<endl;
			cout << " ----- DATOS ----- ";
         	cout << "\nA= " ;
	        cin >> a;
	        cout << "\nB= ";
        	cin >> b;
		}
	cout << " Ya Agoto el total de intentos. " <<endl;	
	}
	
}

void proceso(){
	res = 1;
	for (i=1; i<=a; i++){
		if(a%i==0 and b%i==0){
		res=i;
	int	res=mcd;
		}
	}
	}


void resultado(){
	if(a >0 and b>0){
	cout << " El Maximo comun divisor de " << a << " y " << b << " es: " <<res;
}
}