#include<iostream>

using namespace std;

int main(){
	int NotaU1,NotaU2,NotaU3,TrabajoF;
	float promFinal;
	
	NotaU1 = 20;
	NotaU2 = 14;
	NotaU3 = 13;
	TrabajoF = 10;
	
	promFinal = (0.15 * NotaU1)+(0.2 * NotaU2)+(0.25 * NotaU3)+(0.4 * TrabajoF);
	
	cout<<"La nota final del curso fundamentos de programacion es de "<<promFinal<<endl;

	system("pause");
	return 0;
}
