#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

float Suma (int v1, int v2, int v3);
//float impar (int num);
float raiz2 (int S);

int main(){
	
	int v1, v2, v3, S; 
	float RZ2;
	
	cout << "Sacar raiz cuadrada de numeros impares\n\n";
	
	while(true){
		cout << "Ingrese el valor 1: ";
		cin >> v1; cout<<endl;
	
		cout << "Ingrese el valor 2: ";
		cin >> v2; cout<<endl;
	
		cout << "Ingrese el valor 3: ";
		cin >> v3; cout<<endl;
		
		S = Suma(v1, v2, v3);
		RZ2 = raiz2(S);
		
		if(S %2 != 0){
			cout<<"Suma de los 3 valores es "<<S<<" es impar"<<endl;
			cout<<"Sacando la raiz cuadrada del total de suma impar "<<RZ2<<endl<<endl;
			break; // para finalizar el bucle while(true) en caso de que la condicion sea impar
			
		}else {
			cout<<"Suma de los 3 valores es "<<S<<" es par"<<endl<<endl;
			cout<<"Mientras el resultado sea par no se detendra el programa. Intenta calcular numeros que te den como resultado un # impar."<<endl<<endl;
		}
	}
		
	getch();
	return 0;
}
	

float Suma (int v1, int v2, int v3){
	float Suma = 0;
	Suma = (v1 + v2 + v3);
	
	return Suma;
}

/*float impar (int num){
	float impar = 0;
	impar = (num %2 != 0);
	
	return impar;
}*/

float raiz2 (int S){
	//int impar_s = (v1 + v2 + v3);
	
	float RZ2 = 0;
	RZ2 = sqrt(S);
	
	return RZ2;
}
