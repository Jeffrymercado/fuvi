/*
Nombre : Jeffry Mercado
Lugar : ITV
descripcion: Cuerpos Geometricos en c++
*/

#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;


void saludar();
void prisma(int numLado, int h, int lad, int P, int Abase, int v, int Ap);
void Prisma (double Al, double At, double v);
void Cilindro (double Al, double At, double v, int r, int h);
void Piramide (int Al, int Pbase, int Ap, int Abase, int v, int h, int At);
void cono (int r, int g, int h, int Al, int At, int v);
void Esfera (int r, int A, int v);
void Menu2();
void troncoCono(double R, double r, double h, double g, double AB, double Ab,double Al, double At, double v);
void troncoPiramide ( double Ap, double PB, double Pb, double h, double AB, double Ab, double Al, double At, double v);
void tetraedro(double A, double a, double v,double dato, double raiz);
void hexaedro(double A, double a, double v);
void octaedro(double A, double a, double v,double dato, double raiz);
void dodecaedro (double A, double a, double v,double dato, double raiz);
void icosaedro (double A, double a, double v,double dato, double raiz);
void finalizar();

int num;
int numLado, h, lad, Al, P, Abase, At, v, Ap,r, Pbase;
int g,x,A,y,R,m,AB,Ab,PB,Pb,a,dato,raiz;


int main () {
	
	saludar();
	cout << " _______________________________ " <<endl;
	cout << "Desea ver los otros cuerpos Geometricos: ";
	cout << "\n1-Si\n2-No. " <<endl;
	cin >> x;
	Menu2();
   finalizar(); 
	 
	return 0;
}



void saludar (){
	string nombre;

	cout << "Ingrese su nombre: ";
	cin >> nombre;
	cout << nombre <<", Ingrese el Cuerpo Geometrico que desea calcular: " <<endl;
	cout << "\n1-Prisma:\n2-Cilindro:\n3-Piramide:\n4-Cono:\n5-Esfera: " <<endl;
	cout << "-";
	cin >> num;
	
	if(num==1){
void prisma(int numLado, int h, int lad, int P, int Abase, int v, int Ap);
void Prisma (double Al, double At, double v);
    cout << " ______________ PRISMA ________________ " <<endl;
    cout << "Ingrese el numero de lados: ";
	cin  >> numLado;
	cout << "Ingrese la altura del Prisma: ";
	cin  >>  h;
	cout << "Cuantos lados tiene el Prima: ";
	cin >> lad;
	cout << "Ingresar el valor del Perimetro: ";
	cin >> P;
	cout << "Ingrese el valor del Apotema Base: ";
	cin >> Ap;
	
	Al = (numLado * lad) * h;
	Abase = (P * Ap)/2;
	At = Al + (2 * Abase);
	v = Abase * h;
	
    cout << " __________________________________ " <<endl;
	cout << "El Area Lateral equivale a: " << Al << endl;
	cout << "El Area Total equivale a: " << At << endl;
	cout << "El volumen del Prisma esquivale a: " << v << endl;
	}
	
	if (num==2){
	void Cilindro (double Al, double At, double v, int r, int h);
	cout << " ______________ CILINDRO ________________ " <<endl;
	cout << "Ingrese el valor del Radio Menor: ";
	cin >> r;
	cout << "Ingrese el valor de la Altura: ";
	cin >> h;
	
	Al = 2*M_PI * r *h ;
	At = 2 * M_PI * r * (h+r);
	v = M_PI * pow(r,2) * h; 
	
	cout << " _______________________________ " <<endl;
	cout << "El Area Lateral del Cilindro es: " << Al << endl;
	cout << "El Area Total es: " << At << endl;
	cout << "El volumen es: " << v << endl;
	}
	
	if (num==3){
	void Piramide (int Al, int Pbase, int Ap, int Abase, int v, int h, int At);
	cout << " ______________ PIRAMIDE ________________ " <<endl;
	cout << "Ingrese el valor de Perimetro Base: ";
	cin >> Pbase;
	cout << "Ingrese el valor del Apotema Base: ";
	cin >> Ap;
	cout << "Ingrese el valor del Area Base: ";
	cin >> Abase;
	cout << "Ingrese el valor de la Altura: ";
	cin >> h;
	
	Al = (Pbase * Ap)/2;
	At = Al + Abase;
	v = Abase * h / 3;
	
	cout << " _______________________________ " <<endl;
	cout << "El valor del Area Lateral es: " << Al << endl;
	cout << "El valor del Area Total es: " << At << endl;
	cout << "eL volumen es: " << v << endl;	
	}
	
	if (num==4){
	void cono (int r, int g, int h, int Al, int At, int v);
		
	cout << " ______________ CONO ________________ " <<endl;
	cout << "Ingrese el valor del Radio Menor: ";
	cin >> r;
	cout << "Ingrese el valor de la generatriz: ";
	cin >> g;
	cout << "Ingrese el valor de la Altura: ";
	cin >> h;
	
	Al = M_PI * r * g;
	At = M_PI * r * (g+r);
	v = M_PI * pow(r,2)*h/3;
	
	cout << " _______________________________ " <<endl;
	cout << "El Area Lateral es de: " << Al << endl;
	cout << "El Area Total es de: " << At << endl;
	cout << "El volumen es de: " << v << endl;
	}
	
	if (num==5){
	void Esfera (int r, int A, int v);
	cout << " ______________ ESFERA ________________ " <<endl;
	cout << "Ingrese el valor del Radio Menor: ";
    cin >> r;

A = 4 * M_PI * pow(r,2);
v = 1.33 * M_PI * pow(r,3);

cout << " _______________________________ " <<endl;
cout << "El Area de una Esfera es: " << A << endl;
cout << "El Volumen de una esfera es: " << v << endl;
cout << " _______________________________ " <<endl;
	}

     
}

void Menu2(){
	if (x==1){
		cout << "\n1-Tronco de cono\n2-Tronco de Piramide\n3-tetraedro\n4-Hexaedro\n5-Octaedro\n6-Dodecaedro\n7-Icosaedro." <<endl;
		cout << " - ";
		cin >> y;
	}
	if (y==1){
void troncoCono(double R, double r, double h, double g, double AB, double Ab,double Al, double At, double v);

    cout << " ______________ Tronco de Cono ________________ " <<endl;
	cout << "Ingrese el valor del Radio Mayor: ";
	cin >> R;
	cout << "Ingrese el valor del Radio Menor: ";
	cin >> m;
	cout << "Ingrese el valor de la Generatriz: ";
	cin >> g;
	cout << "Ingrese el valor de la Altura: ";
	cin >> h;
	cout << "Ingrese el Area de Base Mayor: ";
	cin >> AB;
	cout << "Ingrese el Area de Base Menor: ";
	cin >> Ab;
	
	Al = M_PI * g *(R+r);
	At = Al + AB + Ab;
	v = (1.0/3.0 * M_PI * h)* (pow(R,2) + pow(r,2)  + (R*r) );
	
    cout << " _______________________________ " <<endl;
	cout << "El Valor del Area Lateral es: " << Al << endl;
	cout << "El Valor del Area Total es: " << At << endl;
	cout << "El volumen es de: " << v << endl;
	}
	
	if(y==2){
		void troncoPiramide ( double Ap, double PB, double Pb, double h, double AB, double Ab, double Al, double At, double v);
	cout << " ______________ Tronco de Piramide ________________ " <<endl;
    cout << "Ingrese el valor del Apotema de la Piramide: ";
	cin >> Ap;
	cout << "Ingrese el valor del Perimetro de Base Mayor: ";
	cin >> PB;
	cout << "Ingrese el valor del Perimetro de Base Menor: ";
	cin >> Pb;
	cout << "Ingrese el valor del Area de Base Mayor: ";
	cin >> AB;
	cout << "Ingrese el valor del Area de Base Menor: ";
	cin >> Ab;
	cout << "Ingrese el valor de la Altura: ";
	cin >> h;
	
	Al = ((PB + Pb)/2) * Ap;
	At = Al + AB + Ab;
    v = (((1.0/3.0)*h) *(AB + Ab + sqrt(AB*Ab)));
	
	 cout << " _______________________________ " <<endl;
	cout << "El Area Lateral equivale a: " << Al << endl;
	cout << "El Area Total es de: " << At << endl;
	cout << "El Volumen es de: " << v << endl;
	}
	
	if(y==3){
		void tetraedro(double A, double a, double v,double dato, double raiz);
		cout << " ______________ TETRAEDRO ________________ " <<endl;
		cout << "Ingrese el vAlor de las Aristas: ";
	cin  >> a;
	
	A = pow(a,2) * sqrt(3);
	v= sqrt(2)/12 * pow(a,3);
	
    cout << " _______________________________ " <<endl;
	cout << "El Area de un Tetaedro es: " << A << endl;
	cout << "El volumen es: " << v << endl;
	}
	
	if(y==4){
	   void hexaedro(double A, double a, double v); 
	cout << " ______________ HEXAEDRO ________________ " <<endl;
	cout << "Ingrese el valor de las Aristas: ";
	cin >> a;
	
	A = 6 * pow(a,2);
	v = pow(a,3);
	
	cout << " _______________________________ " <<endl;
	cout << "El Valor del Area es: " << A << endl;
	cout << "El volumen es de: " << v << endl; 
	}
	
	if(y==5){
		void octaedro(double A, double a, double v,double dato, double raiz);
		cout << " ______________ OCTAEDRO ________________ " <<endl;
		cout << "Ingrese el valor de las Aristas: ";
	cin >> a;
	
	A = 2 * pow(a,2) * sqrt(3);
	v = sqrt(2)/3 * pow(a,3);
	
	cout << " _______________________________ " <<endl;
	cout << "El valor del Area es de: " << A << endl;
	cout << "El volumen es de: " << v << endl;
	}
	
	if(y==6){
		void dodecaedro (double A, double a, double v,double dato, double raiz);
	cout << " ______________ DODECAEDRO ________________ " <<endl;
	cout << "Ingrese el valor de las Aristas: ";
	cin >> a;
	
	A = 3 * pow(a,2) * sqrt(35) * sqrt(5);
	v = (1.0/4.0)* (15 + 7 )* sqrt(5)* pow(a,3);
	
	cout << " _______________________________ " <<endl;
	cout << "El Valor del Area es: " << A << endl;
	cout << "El volumen es de: " << v << endl;
	}
	
	if(y==7){
		void icosaedro (double A, double a, double v,double dato, double raiz);
		cout << " ______________ ICOSAEDRO ________________ " <<endl;
		cout << "Ingrese el valor de las Aristas: ";
	cin >> a;
	
	A = 5 * pow(a,2) * sqrt(3);
	v = 5.0/12.0 *(3+sqrt(5)) * pow(a,3);
	
     cout << " _______________________________ " <<endl;
	cout << "El Valor del Area es: " << A << endl;
	cout << "El volumen es de: " << v << endl;
	}
	
}

void finalizar(){
	cout << " Fin de la Aplicacion. ";
}
