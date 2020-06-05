Algoritmo SalarioDeProfesor_FAHC
	Definir salarioInicial,incremento,salarioAnual Como Real
	
	salarioInicial<- 1400
	salarioAnual<- salarioInicial
	incremento<- 0.1
	//Datos de entrada
	Escribir "Salario inicial S/",salarioInicial
	//Proceso
	Para c<- 1 hasta 6 con paso 1 hacer
		salarioAnual<- salarioAnual + (salarioAnual * incremento)
		Escribir "Salario en el año ",c," es de S/",salarioAnual
	FinPara
	//Datos de Salida
	Escribir "El salario en el ultimo año es de S/",salarioAnual
FinAlgoritmo 
	