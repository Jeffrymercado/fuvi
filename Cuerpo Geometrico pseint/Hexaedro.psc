Algoritmo Hexaedro 
	
	Definir a, contador  como Real
	contador = 1
	
	Escribir " Ingrese el valor del Area ( a ) - intento # " contador
	Leer a
	
	Mientras ( a <=0 Y contador <=2 ) Hacer
		contador = contador + 1
		Escribir " Ingrese el valor del Area ( a ) - intento # " contador 
		Leer a 
	FinMientras
	
	Si ( a <=0 ) Entonces
       Escribir " Ya agoto el  total de intentos "
	SiNo  
		Escribir " Los valores son "
		a = (6 * a^2)
		V = a^3
		D = a* raiz(3)
		
		Escribir " a = " a " cm^2 "
		Escribir " v = " v " cm^3 "
		Escribir " D = " D " "
	FinSi
	Escribir " Fin del Algoritmo "
	
	
FinAlgoritmo
