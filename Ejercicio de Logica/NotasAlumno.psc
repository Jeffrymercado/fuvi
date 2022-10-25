Algoritmo NotasAlumno
	
	Definir NombreAlumno como Cadena
	definir Notas, TotalNotas, contador, acumulador  como Real
	
	Escribir " Ingrese el nombre del Alumno " 
	Leer NombreAlumno 
	Si ( NombreAlumno=  " ") Entonces
		Escribir " Nombre equivocado"
		Escribir " Ingrese el nombre del Alumno " 
		Leer NombreAlumno 
	FinSi
	
	contador= 1
	Escribir " Ingrese las notas" contador
	Leer Notas
	
	Repetir
		contador = contador + 1
		Escribir " Ingrese las notas" contador
		Leer Notas
	Hasta Que contador =3
	
	
	contador = 0
	Si ( Notas <=0 o notas>10) Entonces
		Repetir
			contador = contador + 1
			Escribir " *************************** "
			Escribir " Ingrese las notas" contador
			Leer Notas 
		Hasta Que (contador =3 )
	FinSi
	
	SumaNotas= Notas + Notas + Notas
	NotaFinal = SumaNotas / 3 
	
	Escribir " La Notas final es : " NotaFinal
	
	
	
	Repetir 
		Escribir " ******************************************* "
	 
	Escribir " Ingrese el nombre del Alumno " Sin Saltar
	Leer NombreAlumno 
	Si ( NombreAlumno=  " ") Entonces
		Escribir " Nombre equivocado"
		Escribir " Ingrese el nombre del Alumno " 
		Leer NombreAlumno 
	FinSi
	
	contador= 1
	Escribir " Ingrese las notas" contador
	Leer Notas
	
	Repetir
		contador = contador + 1
		Escribir " Ingrese las notas" contador
		Leer Notas
	Hasta Que contador =3
	
	
	contador = 0
	Si ( Notas <=0 o notas>10) Entonces
		Repetir
			contador = contador + 1
			Escribir " *************************** "
			Escribir " Ingrese las notas" contador
			Leer Notas 
		Hasta Que (contador =3 )
	FinSi
	
	SumaNotas= Notas + Notas + Notas
	NotaFinal = SumaNotas / 3 
	
	Escribir " La Notas final es : " NotaFinal
	Hasta Que ( NombreAlumno= " " ) 
FinAlgoritmo
