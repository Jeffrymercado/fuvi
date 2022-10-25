Algoritmo CantidadBilletes
	
	Escribir " Ingrese su nombre " 
	leer nombre 
	
	Escribir sin saltar "Ingresa el valor de cantidad de cordobas: C$ - intneto # " contador 
	Leer v
	
	contador = 1
	Si v <=0 Entonces
		Repetir
			contador = contador + 1
			Escribir " Numero Equivocado "
			Escribir "Ingresa el valor de cantidad de cordobas: C$ - intneto # " contador 
			Leer v
		Hasta Que contador =3
		Si contador = 3 Entonces
			Escribir " Ya agoto el total de Intentos "
			Escribir " Fin del Algoritmo "
		Fin Si
	Fin Si
	
	
	Si v >=1 Entonces
		v1 = trunc (v/20) 
		v2 = v - (v1 * 200)
		v3 = trunc (v/50)
		v4 = (v3*50)
		v5 = trunc (v/100)
		v6 = (v5*100)
		v7 = trunc (v/200)
		v8 = (v7*200)
		v9 = trunc (v/500)
		v10 =  (v9*500)
		v11 = trunc (v/1000)
		v12 = (v11*1000)
		v13 = trunc (v/10)
		v14 = (v13*10)
		
		Escribir " ******", nombre, "******* "
		Escribir " ******* RESULTADOS ******* "
		Escribir "Valor de billetes de 10:", v13
		Escribir "Valor de billetes de 20:", v1
		Escribir "Valor de billetes de 50:", v3
		Escribir "Valor de billetes de 100:", v5
		Escribir "Valor de billetes de 200:", v7
		Escribir "Valor de billetes de 500:", v9
		Escribir "Valor de billetes de 1000:", v11
	Fin Si
	
	Escribir " Fin del Algoritmo "
	
FinAlgoritmo
