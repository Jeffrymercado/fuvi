/*
Nombre del Archivo : actaNotas.cpp
Autor : Jeffry Mercado
Lugar : ITV
*/

#include<iostream>
#include<iomanip>

using namespace std;

int main () {

	
	const string carrera = " TECNICO SUPERIOR en ELECTRONICA INDUSTRIAL ";
	const string inscripcion = " 2022IIS-EI025-01 ";
	const string asignatura = " INTRODUCCION A LA PROGRAMACION ";
	const string codigoAsignatura = " EI025 ";
	const string pensum = "30-EI01";
	string nombreDocente;
	int cantEstudiante;
	string fecha;
	double promedioNotas;
	
	cout << "*********************************************************" << endl;
	cout << " BIENVENIDO AL SISTEMA DE CONTROL Y REGISTRO ACADEMICO " << endl;
	cout << "*********************************************************" << endl;
	
	cout << "Ingrese su Nombre: ";
	getline(cin,nombreDocente);
	cout << "Ingrese la Fecha: (DD,MM,AAAA): ";
	cin >> fecha;
	cout << "Ingrese la cantidad de Estudiante del Curso: ";
	cin >> cantEstudiante;
	
	string codigoCarnet[cantEstudiante];
	string nombreCompleto[cantEstudiante];
	int PrimParcial [cantEstudiante];
	int SegParcial [cantEstudiante];
	int tercParcial [cantEstudiante];
	int acumulado [cantEstudiante];
	int notFinal [cantEstudiante];
    char observacion [cantEstudiante];
	
	cout << "*************************************************" << endl;
	cout << " INGRESE LOS DATOS DEL ESTUDIANTE " << endl;
	cout << "*************************************************" << endl;
	
	
	for (int i=0; i<cantEstudiante; i++) {
		cout << "Estudiante[" << i+1 << "]" << endl;
		cout << "Codigo de Carnet: ";
		cin >> codigoCarnet[i];
		cout << "Nombre Completo: ";
		getline(cin >> ws,nombreCompleto[i]);
		cout << "Nota Primer Parcial: ";
		cin >> PrimParcial[i];
		cout << "Nota Segundo Parcial: ";
		cin >> SegParcial[i];
		cout << "Nota Tercer Parcial: ";
		cin >> tercParcial[i];
		cout << "Nota de Acumulado = ";
		cin >> acumulado[i];
	}
	// Procesamiento
	// Calculo de la Nota Final 
	for ( int i=0; i < cantEstudiante; i++) {
	notFinal[i] = PrimParcial[i] + SegParcial[i] + tercParcial[i] + acumulado[i];
	}
	// Determinar si el estudiante Aprobo y Reprobo
	for ( int i=0; i < cantEstudiante; i++) {
	    if(notFinal[i] <70 ){
	    	observacion[i] = 'R';	
		} else {
			observacion[i] = 'A';
		}
	}
	// Calcular promedio 
	int SumaNotas = 0, PromedioNota;
		for ( int i=0; i < cantEstudiante; i++) {
			SumaNotas = notFinal[i];
	}
		PromedioNota = SumaNotas / cantEstudiante;
		// Presentacion de los Resultados
	cout << "*********************************************************" << endl;
	cout << " ACTA DE CALIFICACIONES" << endl;
	cout << "*********************************************************" << endl;
	cout << "Inscripcion:\t" << inscripcion << endl;
	cout << "Asignatura:\t" << asignatura << endl;
	cout << "Docente:\t" << nombreDocente << endl;
cout << "*********************************************************" << endl;
	cout << left << setw(15) << "CARNET" << setw(40) << "NOMBRE COMPLETO" << setw(10) << "PENSUM" << setw(10) << "NOTA IP" << setw(10) << "NOTA IIP" << setw(10) << "NOTA IIIP" << setw(10) << "NOTA ACU" << setw(10) << "NOTA FINAL" << setw(11) << "OBSERVACION" << endl;
	cout << "*********************************************************" << endl;
	for(int i = 0; i < cantEstudiante; i++){
		cout << left << setw(15) << codigoCarnet[i] << setw(40) << nombreCompleto[i] << setw(10) << pensum << setw(10) << PrimParcial[i] << setw(10) <<  SegParcial[i] << setw(10) << tercParcial[i] << setw(10) << acumulado[i] << setw(10) << notFinal[i] << setw(11) << observacion[i] << endl;
	}
	cout << "*********************************************************" << endl;
	cout << "Promedio del grupo: " << PromedioNota << endl;
	cout << "*********************************************************" << endl;
	return 0;

}