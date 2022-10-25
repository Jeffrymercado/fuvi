Algoritmo Fecha 
	
	Definir d,m,a Como Entero
	
	Escribir " Ingrese un dia " 
	Leer d
	Escribir " Ingrese un mes "
	Leer m
	Escribir " Ingrese un año " 
	Leer a 
	
	Si (d<1 o d>31) Entonces
		Repetir
			Escribir " dia incorrecta "
			Escribir " Ingrese un dia"
			Leer d
		Hasta Que ( d>=1 y d <32)
		
		Si ( m<1 o m>12) Entonces
			Repetir
			Escribir " Mes incorrecto"
			Escribir " Ingrese un mes "
			Leer m
			Hasta Que ( m >=1 y m <13 ) 
		FinSi
		Si ( a <=0) Entonces
			Repetir
				Escribir " Año Incorrecto"
				Escribir " Ingrese un año " 
				Leer a 
			Hasta Que ( a >0) 
		FinSi
	FinSi
	Segun m Hacer
		caso 1:nombremes = " Enero" 
		caso 2 :nombremes = " Febrero"
		caso 3 :nombremes = " Marzo"
		caso 4  :nombremes = " Abril"
		caso 5 :nombremes = " Mayo"
		caso 6 :nombremes = " Junio"
		caso 7 :nombremes = " Julio"
		caso 8 :nombremes = " Agosto "
		caso 0 :nombremes = " Septiembre"
		caso 10 :nombremes = " Octubre"
		caso 11 :nombremes = " Noviembre"
		caso 12 :nombremes = " Diciembre" 
	Fin Segun
	Escribir " ************************ " 
	Escribir d " de " nombremes " de " a 
FinAlgoritmo
