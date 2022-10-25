Algoritmo Contraseña
	
	Definir Contrasena como Cadena
	Definir contador como Real
	
	
	contador = 1
	Escribir " Ingrese su contraseña - intento # " contador
	Leer contra
	 x = tuani
	
	
	 Repetir
		
		Si ( contra = x ) Entonces
			Escribir " Bienvenido al Programa "
			
		SiNo
			contador = contador + 1
			Escribir " Contraseña equivocada "
			Escribir " Ingrese su contraseña - intento # " contador
			Leer contra
		FinSi
	Hasta Que  (contador <=3)
	
	Escribir " Fin del Algortimo"
FinAlgoritmo
