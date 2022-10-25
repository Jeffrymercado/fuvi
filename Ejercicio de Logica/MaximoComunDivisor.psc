Algoritmo MaximoComunDivisor 
	
	definir A,B, x Como Real
	Escribir " Ingrese un numero"
	Leer A,B
	
	x= 1
	MCD = 1
	
	Mientras x <=A Hacer
		Si (A mod x = 0) y (B mod x = 0) Entonces
			Si x > MCD Entonces
				mcd = X
			FinSi
		FinSi
		X = X + 1
	Fin Mientras
	
	Escribir   " El maximo comun divisor de " A " y " B " es: " MCD
	
	
FinAlgoritmo
