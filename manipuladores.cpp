/* 
Autor : Jeffry Mercado
Lugar: ITV
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main() {
	
	cout << left;
	cout << setw(20) << "Asignatura" << setw(20) <<  "Estudiantes" << endl
	     << setw(20) << "Programacion" << setw(10) << right << 12 << endl
         << left << setw(20) << "Redes" << setw(10) << right << 9 << right << endl;
	
	     return 0;
 }