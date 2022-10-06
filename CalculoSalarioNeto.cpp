/*
Nombre del Archivo : CalculoSalarioNeto
Nombre : Jeffry Mercado 
*/

#include <iostream>
#include<string>
#include <iomanip>

// VAriables globales - constantes
using namespace std;
const double TASA_ANTIGUEDAD = 15;
const double TASA_SINDICATO = 1;
const double TASA_INSS = 7;
const double TASA_IR = 15.6;
const double TASA_INSS_PATRONAL = 22.5;
int main () {
	// Declaracion de Variables
    double salarioBruto, IngresoNeto, IngresoTotal, deduccionesTotales;
    double ingresoAntiguedad, montoSindicato, montoINSS,montoIR, montoINSSPATRONAL;
    string nombre;
    
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout <<  " Hola " << nombre << ", Ingrese su Salario Basico: C$ ";
    cin >> salarioBruto;
    // Ingresos
    ingresoAntiguedad = salarioBruto * (TASA_ANTIGUEDAD/100);
    IngresoTotal = salarioBruto + ingresoAntiguedad;
    // Deducciones empleado
    montoSindicato = salarioBruto * (TASA_SINDICATO/100);
    montoINSS = IngresoTotal * (TASA_INSS/100);
    montoIR = IngresoTotal * (TASA_IR/100);
    deduccionesTotales = montoSindicato + montoINSS + montoIR;
    // Calcular Ingreso
    IngresoNeto = IngresoTotal - deduccionesTotales;
    // Deducciones de la Empresa 
    montoINSSPATRONAL = IngresoTotal * (TASA_INSS_PATRONAL/100);
    
    // Mostrar Resultados
    cout << left;
    cout  << setw(20) <<  "Nombre del Empleado: "             << setw (20)  << right << nombre << endl;
    cout  << setw (20) << "Salario Basico es de:"             << setw (20)  << right <<  salarioBruto << endl;
    cout  << setw (20) << "******Ingreso Totales********"     << endl;
    cout  << setw(20) <<  "MontoAntiguedad :C$"               << setw(20) << right << ingresoAntiguedad << endl;
    cout  << setw(10)<<"Monto ingresosTotales:C$"             << setw(17) << right << IngresoTotal << endl;
    cout  << "*******Deducciones Totales********* "           << endl;
    cout  << setw(20) << "Monto por Sindicato:C$"             << setw(17) << right << montoSindicato << endl;
    cout  << setw(20) << "Monto por INSS:C$"                  << setw(20) << right << montoINSS << endl;
    cout  << setw(20) << "Monto por IR:C$"                    << setw(20) << right << montoIR << endl;
    cout  << setw(20)<< "Deducciones Totales:C$"              << setw (19)<< right << deduccionesTotales << endl;
    cout  << "******** Ingreso TotalNeto ********"            << endl;
    cout  << setw(20) << "Ingreso o salario Neto:C$ "         << setw(15)<< right << IngresoNeto << endl;
    cout << "********Deducciones del Empleador**********"     << endl;;
    cout  << setw(20) << "Deducciones del Empleador:C$ "      <<setw(12) << right << montoINSSPATRONAL << endl;
    
	return 0;

}