Algoritmo SalarioTrabajador
	
	Definir nombre como Cadena
	Definir Salario,dias,horas,SalarioNeto,Salario1 Como Real
	
	Escribir " Ingrese su nombre "
	Leer nombre
	Escribir " Cuanto es su Salario Bàsico "
	leer Salario
	
	
	Inss= (Salario * 7/100)
	SalarioNeto = Salario - Inss
	
	Escribir " " nombre " su salario Neto es: C$" SalarioNeto
FinAlgoritmo
