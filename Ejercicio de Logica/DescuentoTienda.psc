Algoritmo DescuentoTienda
	
	Definir TotalCompras, CantidadFinal Como Entero
	Definir mes como Cadena 
	
	Escribir " Cuanto fue el total de compras que realizo" Sin Saltar
	Leer TotalCompras
	Escribir " En que mes realizo su compra " Sin Saltar
	Leer mes
	mesGanador = febrero
	
	Si ( mes = mesGanador ) Entonces
		CantidadFinal = TotalCompras - 15 
		Escribir " Felicidades, Ha recibido un 15% de descuento "
		Escribir " La cantidad final de pago sera de " CantidadFinal
	SiNo
		Escribir " La cantidad de pago final sera de " TotalCompras
	FinSi
	
	
	Escribir " Fin del Algortimo"
	
	
FinAlgoritmo
