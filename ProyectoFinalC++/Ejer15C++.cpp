#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

float Seguro_Social (int SB);

int main(){
	int suerdo; float descuento;
	
	cout<<"Seguro Social\n\n";
	
	cout<<"Ingrese su sueldo bruto: ";
	cin >> suerdo;
	
	descuento = Seguro_Social(suerdo);
	
	int Sneto;
	Sneto = (suerdo - descuento);
	
	cout<<"Descuento del Seguro Social(3.04%): " <<descuento<<endl;
	cout<<"Suedo Neto " <<Sneto;
	
	getch();
	return 0;
}

float Seguro_Social (int SB){
	float Seguro_Social = 0;
	Seguro_Social = ((SB * 3.04)/100);
	
	return Seguro_Social;
}
