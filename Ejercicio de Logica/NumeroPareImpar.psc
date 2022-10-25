Algoritmo NumeroPareImpar
	
	Definir A,contador Como Entero
	
	Escribir " Ingrese un valor numerico - intento # " contador 
	Leer A
	contador = 1 
	Si ( A<=0) Entonces
	Repetir
		contador = contador + 1 
		EScribir " Ingrese nuevamente su valor  " 
		Escribir " Ingrese un valor numerico - intento # " contador 
		Leer A
	Hasta Que ( A>0 )
	FinSi 
	
	Si ( A MOD 2 = 0 ) Entonces
		Escribir " El numero ingresado es Par " 
	SiNo
		Escribir " El numero ingresado es Impar "
	FinSi
	
	Escribir " Fin del Algoritmo" 
FinAlgoritmo
