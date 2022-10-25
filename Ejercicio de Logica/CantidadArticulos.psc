Algoritmo CantidadArticulos
	Definir art, cant, cantTotal como ReaL
	
	Escribir " Que articulo desea solicitar. 1- Telefonos, 2-Tablet, 3-Computadoras "
	Leer art
	Escribir " Cuantos articulos desea solicitar "
	Leer cant
	
	Si art = 1 Entonces
		Si cant <10 Entonces
			cantTotal = (100*20)/100
			Escribir " La cantidad total de Produccion es de 100, su cantidad a solicitar es de: " cantTotal
		Fin Si
		
		Si cant =10 o cant<20 Entonces
			cantTotal = (100*15)/100
			Escribir " La cantidad total de Produccion es de 100, su cantidad a solicitar es de: " cantTotal
		Fin Si
		
		Si cant >=20 Entonces
			cantTotal = (100*10)/100
			Escribir " La cantidad total de Produccion es de 100, su cantidad a solicitar es de: " cantTotal
		Fin Si
	Fin Si
	
	Si art=2 Entonces
		Si cant <10 Entonces
			cantTotal = (50*20)/100
			Escribir " La cantidad total de Produccion es de 50, su cantidad a solicitar es de: " cantTotal
		Fin Si
		
		Si cant =10 o cant<20 Entonces
			cantTotal = (50*15)/100
			Escribir " La cantidad total de Produccion es de 50, su cantidad a solicitar es de: " cantTotal
		Fin Si
		
		Si cant >=20 Entonces
			cantTotal = (50*10)/100
			Escribir " La cantidad total de Produccion es de 50, su cantidad a solicitar es de: " cantTotal
		Fin Si
	Fin Si
	
	
	Si art=3 Entonces
		Si cant <10 Entonces
			cantTotal = (30*20)/100
			Escribir " La cantidad total de Produccion es de 30, su cantidad a solicitar es de: " cantTotal
		Fin Si
		
		Si cant =10 o cant<20 Entonces
			cantTotal = (30*15)/100
			Escribir " La cantidad total de Produccion es de 30, su cantidad a solicitar es de: " cantTotal
		Fin Si
		
		Si cant >=20 Entonces
			cantTotal = (30*10)/100
			Escribir " La cantidad total de Produccion es de 30, su cantidad a solicitar es de: " cantTotal
		Fin Si
	FinSi
	
	Escribir " Fin del Algoritmo "
FinAlgoritmo
