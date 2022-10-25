Algoritmo BuscarNumeroEnArreglo
	Definir n,c,vector como Entero 
	
	Dimension vector[10]
	Para x=1 Hasta 10 Con Paso 1 Hacer
		Escribir " Ingrese un numero "
		Leer vector(x)
	Fin Para
	
	Escribir " Ingrese el numero a buscar "
	Leer n
	c=0
	Para x=1 Hasta 10 Con Paso 1 Hacer
		Si n == vector(x)  Entonces
			Escribir " El numero ", n ," se encuentra en la posicion ",x 
			c=1
		Fin Si
	Fin Para
	
	Si c==0 Entonces
		Escribir " El numero ", n ," no se encuentra en el arreglo "
	Fin Si
	
FinAlgoritmo
