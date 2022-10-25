Algoritmo Tetraedro 
	
	Definir a, h, v, contador como Real 
	contador = 1 
	Escribir " Ingrese el Valor del Area ( a ) - intento # " contador
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
	A = ( a^2 * raiz(3) ) 
	h = ( a * ( raiz(6) / 3 ) ) 
	V = (raiz(2) / 12 * a^3)
	
	Escribir " A = " A " cm^2"
	Escribir " h = " h " cm^2"
	Escribir " V = " v " cm^3"
FinSi

Escribir " Fin del Algoritmo " 
	
	
	
FinAlgoritmo
