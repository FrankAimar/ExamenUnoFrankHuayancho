#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;

int main(){
    int edad;
	char genero[1];
	
	cout<<"Digite edad de la persona : ";
	cin>>edad;
	cout<<"Digite Genero (F-M) : ";
	cin>>genero;
	
	strupr(genero); // Convierte la letra en mayuscula
	
	if((strcmp(genero, "F") == 0) || (strcmp(genero, "M") == 0)){
		if(edad>=70){
			cout<<"\nVacuna a aplicar tipo C\n" ;
		}else{
			if(edad>=70){
				cout<<"\nVacuna a aplicar tipo C\n" ;
			}else{
				if(edad>=16 && edad<=69){
					if((strcmp(genero, "F") == 0) ){
						cout<<"\nVacuna a aplicar tipo B\n" ;
					}else{
						cout<<"\nVacuna a aplicar tipo A\n" ;
					}
				}else{
					cout<<"\nVacuna a aplicar tipo A\n" ;
				}
			}
		}
	}else{
		cout<<"\nError solo F y M\n";
	}

	system("pause");
	return 0;
}
