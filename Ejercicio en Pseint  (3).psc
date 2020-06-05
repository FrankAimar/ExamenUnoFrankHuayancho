Algoritmo TipoDeVacuna_FAHC
	Definir edad Como Entero
	Definir genero Como Caracter
	//Datos de entrada
	Escribir "Digite edad de la persona : "
	leer edad
	Escribir "Digite Genero (F-M) : "
	leer genero
	//Proceso
	si genero = 'F' o genero = 'M' entonces
		si edad >= 70 entonces
			Escribir "Vacuna a aplicar tipo C"
		SiNo
			si edad >=16 y edad <=69 entonces
				si genero = "F" entonces
					Escribir "Vacuna a aplicar tipo B"	
				SiNo
					Escribir "Vacuna a aplicar tipo A"
				FinSi
			SiNo
				Escribir "Vacuna a aplicar tipo A"
			FinSi
		FinSi
	SiNo
		Escribir "Error solo F y M"
	FinSi
	//Salida
FinAlgoritmo 
	