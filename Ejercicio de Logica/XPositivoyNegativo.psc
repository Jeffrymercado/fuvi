Algoritmo XPositivoyNegativo 
	
	Definir x Como Real
	
	Escribir " Ingrese un numero "
	Leer x
	
	Si ( x >=1 ) Entonces
		A = ((x-2)^2/2) + ((x-4)^4/4) + ((x-6)^6/6)
		Escribir A
	FinSi
	
	Si ( x<0 )Entonces
		B = ((x+2)^2/2) + ((x+4)^4/4) + ((x+6)^6/6)
		Escribir B
	Fin Si
	
	EScribir " Fin del Algoritmo"
	
FinAlgoritmo
