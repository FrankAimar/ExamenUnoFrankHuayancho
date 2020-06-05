#include<iostream>

using namespace std;

int main(){
    float salario,bono;
	int puntos;
	
	cout<<"Digite salario minimo : ";
	cin>>salario;
	cout<<"Digite puntos del profesor : ";
	cin>>puntos;
	
	if (puntos>=20 && puntos<=100){
		bono = 0.1 * salario;
	} else{
		if (puntos>=101 && puntos<=200){
	    	bono = 0.5 * salario;
	    } else{
	    	if(puntos>=201){
	    	    bono = 1.0 * salario;	
			}
	    }
	}
		
	cout<<"\nEl monto del bono que percibira el profesor es de S/"<<bono<<endl;

	system("pause");
	return 0;
}
