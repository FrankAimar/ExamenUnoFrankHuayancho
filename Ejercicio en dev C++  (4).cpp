#include<iostream>
#include<string.h>
#include<math.h>
#include<conio.h>

using namespace std;

int main(){
    int a , b;
	float resultado;
	char signo[5];
	
	cout<<"Digite primer numero : ";
	cin>>a;
	
	cout<<"Digite segundo numero : ";
	cin>>b;

	cout<<"Digite Signo (+ - / * ^) : ";
	cin>>signo;

	if (strcmp(signo, "+") == 0) {
		resultado = a+b;
		cout<<a<<" + " <<b<<" = "<<resultado<<endl;
	} else {
		if (strcmp(signo, "-") == 0) {
			resultado = a-b;
			cout<<a<< " - " <<b<<" = "<<resultado<<endl;
		} else {
			if (strcmp(signo, "/") == 0) {
				if (b==0) {
					cout<<"Imposible dividir entre cero"<<endl;
				} else {
					resultado = a/b;
					cout<<a<<" / "<<b <<" = "<<resultado<<endl;
				}
			} else {
				if (strcmp(signo, "*") == 0) {
					resultado = a*b;
					cout<<a<<" x "<<b<<" = "<<resultado<<endl;
				} else {
					if (strcmp(signo, "^") == 0) {
						resultado = pow(a,b);
						cout<<a<<" ^ "<<b<<" = "<<resultado<<endl;
					} else {
						cout<<"Operacion no valida.!!"<<endl;
					}
				}
			}
		}
	}

	system("pause");
	return 0;
}
