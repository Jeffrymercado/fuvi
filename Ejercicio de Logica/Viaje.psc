Algoritmo Viaje
	
	Definir A,Km como Real
	Definir Des como Cadena
	
	Escribir " Cuantos kilometros va a recorrer en su viaje"
	Leer Km
	Escribir " Cual es su destino de viaje " 
	Leer Des
	Escribir " Cuantos dias estara de viaje " 
	Leer A
	
	Si Km >=1000 y  A>=7 Entonces
		Precio= ( 8.50 * Km ) 
		Descuento = (Precio * 70/100)
		Escribir " El precio de los voletos para ida y vuelta es C$ " Descuento
	SiNo
		Precio= ( 8.50* Km) 
		Escribir " El precio de los voletos para ida y vuelta es C$ " Precio
	Fin Si
	
	EScribir " Fin del Algoritmo"
	
	
	
FinAlgoritmo
