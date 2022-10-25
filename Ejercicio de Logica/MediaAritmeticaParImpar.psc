Algoritmo MediaAritmeticaParImpar
	Definir num, x, A, acumulador Como Real
	
	Escribir " Hasta que numero desea ver  "
	Leer num
	
	Escribir " Estos numeros son pares "
	
	Para x=1 Hasta num Con Paso 1 Hacer
		Si(x mod 2 = 0) Entonces
			Escribir  x
		Fin Si
	Fin Para
	
	
	acumulador = 0
	Para m=1 Hasta num Con Paso 1 Hacer
		Si (m mod 2 = 1) Entonces
			acumulador = acumulador + m
		Fin Si
	Fin Para
	
	A = acumulador/num
	Escribir " La media Aritmetica de los numeros impares es: " A
	
    Escribir " Fin del Algoritmo"
FinAlgoritmo

