Algoritmo BonoPorDesenpeño_FAHC
	Definir salario,bono Como Real
	Definir puntos Como Entero
	//Datos de entrada
	Escribir "Digite salario minimo : "
	leer salario
	Escribir "Digite puntos del profesor : "
	leer puntos
	//Proceso
	si puntos>=20 y puntos<=100 entonces
		bono<- 0.1 * salario
	SiNo
		si puntos>=101 y puntos<=200 entonces
			bono<- 0.5 * salario
		SiNo
			si puntos>=201 entonces
				bono<- 1.0 * salario
			FinSi
		FinSi
	FinSi
	//Datos de Sslida 
	Escribir "El monto del bono que percibira el profesor es de S/",bono
	
FinAlgoritmo 
	