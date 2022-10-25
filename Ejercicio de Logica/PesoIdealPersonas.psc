Algoritmo PesoIdealPersonas
	
	Definir nombre como Cadena
	Definir contador, peso, estatura, pesoIdeal Como Real
	
	contador = 1
	Escribir " BIENVENIDO A CLINICA SAN JOSE "
	eSCRIBIR "***********************************"
	Escribir " Ingrese su nombre "
	Leer nombre 
	Escribir " Ingrese su peso:- intrento # " contador
	Leer peso
	Escribir " Ingrese su estatuta: - intento # " contador 
	Leer estatura
	
	Si (peso <=0 y estatura <=0 )Entonces
		Repetir
			contador = contador + 1
		Escribir " Ingrese su peso: - intetno # " contador 
		Leer peso
		Escribir " Ingrese su estatuta: intento #  " contador 
		Leer estatura
	Hasta Que ( peso >=1 y estatura >=1 o contador =3)
	Escribir " Ya agoto el total de intentos "
SiNo
	pesoIdeal = ( peso/ estatura^2)
	
	Si (pesoIdeal =20) Entonces
		Escribir " " nombre " Usted es una persona delgada "
	Fin Si
	
	Si (pesoIdeal >20 y pesoIdeal<23) Entonces
		Escribir " " nombre " Usted es una persona con peso normal "
	Fin Si
	
	Si (pesoIdeal >23 y pesoIdeal<26) Entonces
		Escribir " " nombre " Usted es una persona con sobrepeso "
		Escribir " LO LLAMAREMOS PARA CONFIRMAR SU CITA "
	Fin Si
	Si (pesoIdeal >26) Entonces
		Escribir " " nombre " Usted es una persona obesa "
		Escribir " LO LLAMAREMOS PARA CONFIRMAR SU CITA "
	Fin Si
Fin Si

	Escribir " Fin del Algoritmo "
FinAlgoritmo
