/*
Nombre: Jeffry Mercado
Lugar: ITV
Descripcion: Aplicacion de Electronica Industrial
*/

#include <iostream>

using namespace std;

void cuenta();
void saludar();
void seleccion();
void datos();
void despedida();
int m,r,v,i,selec,I,l,edad;
int resis,r1,r2,Inten,Vo,Res,x;
float Rt,Re,It,P;
string nombre,contra;

int main(){
	
	cuenta();
	saludar();
	seleccion();
	datos();
	despedida();
	
	return 0;
}

void cuenta(){
	cout << " Introduzca su Nombre: ";
	cin >> nombre;
	cout << " Ingrese la Contrasena: ";
	cin >> contra;
	cout << " Introduzca su edad: ";
	cin >> edad;
	if(edad<=0){
		for(i=1; i<=2; i++){
			cout << "Edad Incorrecta " <<endl;
			cout << " Introduzca su edad: ";
        	cin >> edad;
		}
	cout << " Ya Agoto el total de Intentos ";
	}
	
	if (edad<16){
	  cout << " No Cumple la edad requerida. " <<endl;	
	}
}
void saludar(){
	if(edad>16){
    cout << "------------------------------------------" <<endl;
	cout << " --- BIENVENIDO "  << nombre<< " A ELECTROMASTER --- " <<endl;
	cout << "------------------------------------------" <<endl;
	}
}

void seleccion(){
	if(edad>16){
	if(contra == "electronica"){
	cout << "----- MENU ----- " <<endl;
    cout << "\n1-Voltaje:\n2-Resistencia\n3-Intensidad\n4-Potencia: "<<endl;
    cout << "--";
    cin >> selec;
    if(selec<=0){
    	for(i=1; i<=2; i++){
    	cout << "------------------------" <<endl;
    	cout << "Nmero equivocado " <<endl;
				cout << "----- MENU ----- " <<endl;
        cout << "\n1-Voltaje:\n2-Resistencia\n3-Intensidad\n4-Potencia: "<<endl;
        cout << "--";
        cin >> selec;
		}
    cout << " Ya Agoto el Total de Intentos " <<endl;
	}
}
}
}

void datos(){
	if(edad>16){
	if(selec>0){
		if (selec==1){
		cout << "----- VOLTAJE ----- " <<endl;
		cout << " Ingrese el valor de la Resistencia: " <<endl;
		 cout << "--";
		cin >> r;
		cout << " Ingrese el valor de la Intensidad: " <<endl;
		 cout << "--";
		cin >> I;
		if(r<=0 and I<=0){
			for(i=1; i<=2; i++){
    	    cout << "------------------------" <<endl;
         	cout << "Nmero equivocado " <<endl;
         	cout << "----- VOLTAJE ----- " <<endl;
	     	cout << " Ingrese el valor de la Resistencia: ";
		    cin >> r;
		    cout << " Ingrese el valor de la Intensidad: ";
		    cin >> I;
			}
		  cout << " Ya Agoto el Total de Intentos " <<endl;
		}	
	}
	if(r>0 and I>0){
		v= I * r;
		cout << " El Voltaje es de: " << v << " volt " <<endl;
	}
}

   if(selec==2){
		cout << "----- RESISTENCIA ----- " <<endl;
	    cout << "\n1-Resistencia Total\n2-Resistencia Equivalente " <<endl;
	    cout << "--";
	    cin >> resis;
    
    if(resis==1){
    	cout << " Ingrese el valor de la Intensidad: " <<endl;
    	cout << "--";
    	cin >> I;
    	cout << " Ingrese el valor del Voltaje: " <<endl;
    	cout << "--";
    	cin >> v;
    if(I<=0 and v<=0){
    	for (i=1; i<=2; i++){
    	cout << "------------------------" <<endl;
        cout << "Nmero equivocado " <<endl;
        cout << " Ingrese el valor de la Intensidad: "<<endl;
        cout << "--";
    	cin >> I;
    	cout << " Ingrese el valor del Voltaje: "<<endl;
    	 cout << "--";
    	cin >> v;
		}
    cout << " Ya Agoto el Total de Intentos "<<endl;
	}
     if(I>0 and v>0){
     	Rt = v/I;
        cout << " EL valor de la Resistencia es de: " << Rt << " Ohm " <<endl; 
	 }
	}
	if(resis==2){
		cout << "Ingrese el valor de las dos Resistencia " <<endl;
		cout << "\nA= ";
		cin >> r1;
		cout << "\nB= ";
		cin >> r2;
		
	Re = (r1*r2) / (r1+r2);
	cout << " EL valor de la Resistencia Equivalente es de: " << Re << " Ohm " <<endl; 
	}
}

    if(selec==3){
    	cout << "----- INTENSIDAD ----- " <<endl;
	    cout << " Ingrese el valor de la Resistencia: " <<endl;
	    cout << "--";
	    cin >> Res;
	    cout << " Ingrese el valor del Voltaje: " <<endl;
	    cout << "--";
	    cin >> Vo;
	if(Res<=0 and Vo<=0){
		for (i=1; i<=2; i++){
    	cout << "------------------------" <<endl;
        cout << "Nmero equivocado " <<endl;
        cout << " Ingrese el valor de la Resistencia: " <<endl;
	    cout << "--";
	    cin >> Res;
	    cout << " Ingrese el valor del Voltaje: " <<endl;
	    cout << "--";
	    cin >> Vo;
	}
	 cout << " Ya Agoto el Total de Intentos "<<endl;
	}
	if(Res>0 and Vo>0){
	It= (Vo/Res);
   	cout << " EL valor de la Intensidad es de: " << It << " Amp " <<endl;   
	}
	}
	
	if(selec==4){
		cout << "----- POTENCIA ----- " <<endl;
		cout << " Ingrese el valor del Voltaje: "<<endl;
		 cout << "--";
		cin >> x;
		cout << " Ingrese el valor de la Intensidad: "<<endl;
		 cout << "--";
		cin >> m;
		if(x<=0 and m<=0){
			for(i=1; i<=2; i++){
    	    cout << "------------------------" <<endl;
         	cout << "Nmero equivocado " <<endl;
         	cout << "----- POTENCIA ----- " <<endl;
		cout << " Ingrese el valor del Voltaje: " <<endl;
		 cout << "--";
		cin >> x;
		cout << " Ingrese el valor de la Intensidad: " <<endl;
		 cout << "--";
		cin >> m;
			}
		  cout << " Ya Agoto el Total de Intentos " <<endl;
		}	
	}
	if(x>0 and m>0){
		P = (x*m);
		cout << " La Potencia es de: " << P << " Watts " <<endl;
	}

}
   	cout << "------------------------------------------" <<endl;
	cout << " --- GRACIAS POR USAR ELECTROMASTER --- "<<endl;
	cout << "------------------------------------------"<<endl;	
	}
	
void despedida(){
	if(edad<16){
	cout << "------------------------------------------" <<endl;
	cout << " --- GRACIAS POR USAR ELECTROMASTER --- "<<endl;
	cout << "------------------------------------------"<<endl;	
	}
}