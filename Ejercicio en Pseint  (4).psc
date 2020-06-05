Algoritmo CalcularOperacionAritmetica_FAHC
	Definir a , b Como Entero
	Definir resultado Como real
	Definir signo Como Caracter
	//Datos de entrada 
	Escribir "Digite primer numero : "
	leer a
	Escribir "Digite segundo numero : "
	leer b
	Escribir "Digite Signo (+ - / * ^) : "
	leer signo
	//Proceso
	si signo = '+' Entonces
		resultado<- a + b
		
		Escribir a," + ",b," = ",resultado
	SiNo
		si signo = '-' Entonces
			resultado<- a - b
			
			Escribir a," - ",b," = ",resultado
		SiNo
			si signo = '/' Entonces
				si b = 0 entonces
					Escribir "Imposible dividir entre cero"
				SiNo
					resultado<- a / b
					
					Escribir a," / ",b," = ",resultado
				FinSi
			SiNo
				si signo = '*' Entonces
					resultado<- a * b
					
					Escribir a," x ",b," = ",resultado
				SiNo
					si signo = '^' Entonces
						resultado<- a ^ b
						
						Escribir a," ^ ",b," = ",resultado
					SiNo
						Escribir "Operacion no valida.!!"
					FinSi
				FinSi
			FinSi
		FinSi
	FinSi
	//Salida
FinAlgoritmo 
	