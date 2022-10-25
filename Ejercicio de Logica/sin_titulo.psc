Algoritmo ImpriI
	Definir n,i Como Entero
	
	Escribir " Ingrese un numero "
	Leer n
	
	i= 0
	Mientras (n>1) Hacer
		Si ((n/2)==0)  Entonces
			n=n/2
		SiNo
			n = n*3+1
			i = i+1
		Fin Si
		Escribir i
	Fin Mientras
FinAlgoritmo
