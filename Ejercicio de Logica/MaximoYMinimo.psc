Algoritmo MaximoYMinimo
	Escribir " Cuantos numeros va a ingresaar: "
	Leer cantNum
	numMayor = 0
	numMenor = 0
	Total = 0
	Para x= 1 Hasta cantNum Hacer
		
		Escribir " Ingrese un numero "
		Leer n
		
		Si n>numMayor Entonces
			numMayor = n
		Fin Si
		
		Si x=1 Entonces
			numMenor = n
		SiNo
			Si numMenor>n Entonces
				numMenor = n
			Fin Si
		Fin Si
		Total = total + n
		
	Fin Para
	
	Escribir " El maximo es: " numMayor
	Escribir " El minimo es: " numMenor
	Escribir " La media Aritmetica es: " Total/cantNum
FinAlgoritmo
