Algoritmo TroncoPiramide 
	
	Definir Al, P, Ap, v como Real 
	
	Escribir " Ingrese el valor del Perimetro base Mayor ( PB ) "
	Leer PB
	Escribir " Ingrese el valor de Perimetro Base menor ( Pb ) "
	Leer Pb 
	Escribir " Ingrese el valor de Apotema Piramide ( Ap ) "
	Leer Ap
	Escribir " Ingrese el valor de Area base mayor ( AB ) "
	Leer AB
	Escribir " Ingrese el valor de Area base menor ( Ab ) "
	Leer Ab 
	Escribir " Ingrese el valor de Altura ( h) "
	Leer h
	
	Al = ( ( PB + Pb ) / 2 ) * Ap 
	At = ( Al + AB + Ab ) 
	V = (0.333 * h)* ( AB + Ab + raiz(AB * Ab) )
	
	Escribir " Al = " AL " cm^2 "
	EScribir " At = " At " cm^2" 
	Escribir " V = " V " cm^3 "
	
FinAlgoritmo
