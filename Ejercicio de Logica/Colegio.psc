Algoritmo Colegio
	
	Definir Num, matri, mens, TotalPagar Como Real
	
	Escribir " El colegio **** Mi Casita **** les da la Bienvenida "
	Escribir " Factura del Mes de Septiembre " 
	
	Escribir " Cuantos hijos tiene estuidando en nuestro centro "
	Leer Num 
	
	Asoci = 400
	matri= 1500
	mens = 700
	
	Si (num = 2)
    Total = ( matri + mens + Asoci)
	TotalPagar = Total*90/100
	FinSi
    
	Si (num = 3)
		Total = ( matri + mens + Asoci )
		TotalPagar = Total*85/100
	FinSi
	
	Si (num > 3)
		Total = ( matri + mens + Asoci)
		TotalPagar = Total*80/100
	FinSi
	
	Escribir " El total a pagar es de: " TotalPagar 
	Escribir " Gracias por Preferirnos" 
	
	Escribir " Fin del Algoritmo"
FinAlgoritmo
