#include<iostream>

using namespace std;

int main(){
    float salarioInicial,incremento,salarioAnual;
	
	salarioInicial = 1400;
	salarioAnual = salarioInicial;
	incremento = 0.1;
	
	cout<<"Salario inicial S/"<<salarioInicial<<endl;
	
	for(int c = 1 ; c<=6 ;c++){
		salarioAnual = salarioAnual + (salarioAnual * incremento);
		cout<<"Salario en el anio "<<c<<" es de S/"<<salarioAnual<<endl;
	}
	
	cout<<"El salario en el ultimo anio es de S/"<<salarioAnual<<endl;

	system("pause");
	return 0;
}
