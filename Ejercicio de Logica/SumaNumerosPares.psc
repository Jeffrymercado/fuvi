Algoritmo SumaNumerosPares
	
	Definir x, n , sumaPar como Real
	
	Escribir " Hasta que numero desea sumar " Sin Saltar
	Leer n
	
	sumaPar = 0
	Para x= 1 Hasta  n  Hacer
		Si ( x mod 2 = 0 ) Entonces
			sumaPar = sumaPar + x
		FinSi
	Fin Para
	Escribir " La suma de los numeros pares es: " sumaPar
	
	Escribir " Fin del Algortimo "
	
FinAlgoritmo
