Algoritmo TroncoCono
	
	Definir g, R, A, V, h  como Real 
	 
	
	Escribir " Ingrese el valor de Generatriz ( g ) "
	Leer g
	Escribir " Ingrese el valor de RadioMenor ( rm ) "
	Leer rm
	Escribir " Ingrese el valor de RadioMayor ( RM ) "
	Leer RM
	Escribir " Ingrese el valor de base mayor ( AB ) "
	Leer AB 
	Escribir " Ingrese el valor de Base menor ( Ab) "
	Leer Ab
	Escribir " Ingrese el valor de la Altura ( h) "
	Leer h 
	
	Al =  ( PI * g) * ( RM + rm ) 
	At =  ( Al + AB + Ab ) 
	V = ( (0.333 * PI* h)  * ( R^2 + r^2 + ( R * r) ))
	
	Escribir" Al = " Al " Cm ^2 "
	Escribir " At = " At " cm ^2 " 
	Escribir " V = " V " cm ^3 "
	
FinAlgoritmo
