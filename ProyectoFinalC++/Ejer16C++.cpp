#include <iostream>
#include <conio.h>
using namespace std;

float AFP (int num);

int main(){
	int sueldo;
	float descuento;
	
	cout<<"Calculo de la Administradora de Fondos de Pensiones (AFP)\n";
	
	cout<<"Ingrese su sueldo: "; cin>>sueldo; cout<<endl;
	
	descuento = AFP(sueldo);
	cout<<"Descuento de la AFP (2.87%): " <<descuento<<endl<<endl;
	
	int Sneto;
	Sneto = (sueldo - descuento);
	
	cout<<"Sueldo neto "<<Sneto<<endl;
	
	getch();
	return 0;
}

float AFP (int num){
	float AFP = 0;
	AFP = ((num * 2.87)/100);
	
	return AFP;
}
