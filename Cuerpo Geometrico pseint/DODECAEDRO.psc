Algoritmo DODECAEDRO 
	
	Definir a, v, D , contador  como Real
	contador = 1
	
	Escribir " Ingrese el valor del Area ( a ) - intento # " contador 
	Leer a
	
	Mientras ( a <=0 Y contador <=2 ) Hacer
		contador = contador + 1
		Escribir " Ingrese el valor del Area ( a ) - intento # " contador 
		Leer a 
	FinMientras
	
	Si ( a <=0 ) Entonces
		Escribir " Ya agoto el total de intentos "
	SiNo  
		Escribir " Los valores son "
	a = 3 * a^2 * raiz(25 + 10* raiz(5) )
	V = 0.25 * ( 15 + 7 * raiz(5) * a^3) 
	
	Escribir " a = " a " cm^2 "
	Escribir " v = " v " cm^3 "
    Finsi

	Escribir "·Fin del Algortimo "
FinAlgoritmo
