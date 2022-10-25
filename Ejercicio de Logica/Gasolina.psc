Algoritmo Gasolina
	
	Definir Litros,GasRegular,GasSuper,Diesel, tipo Como Real
	
	
	Escribir " Cuantos litros de Combustible desea? "
	Leer litros
	Escribir " Seleccione el tipo de Gasolina que desea comprar: 1.GasRegular, 2.GasSuper,3.Diesel"
	Leer tipo
	
	Si (litros <=0 )  Entonces
		Escribir "Numero incorrecto "
		Escribir " Cuantos litros de Combustible desea? "
		Leer litros
	Fin Si
	
	GasRegular = 32.85
	GasSuper = 33.48
	Diesel = 28.45
	
	Si (tipo = 1) Entonces
		Total = litros * GasRegular
	    Escribir " La cantidad a pagar sera de: C$ " Total
	Fin Si
	
	Si (tipo = 2 ) Entonces
		Total = litros * GasSuper
	    Escribir " La cantidad a pagar sera de: C$ " Total
	Fin Si
	
	Si (tipo = 3 ) Entonces
		Total = litros * Diesel
	    Escribir " La cantidad a pagar sera de: C$ " Total
	Fin Si
	
	Escribir " Fin del Algoritmo"
FinAlgoritmo
