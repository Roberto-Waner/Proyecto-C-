#include <iostream>
#include <cmath>

using namespace std;

float suma(float v1, float v2, float v3);
float impar(float S);
float par(float S);
float raiz2(float RZ2);

int main(){
	
	float v1, v2, v3, S, RZ2 = 0;
	
	cout << "Sacar raiz cuadrada de numeros impares\n\n";
	
	while(true){
		cout << "Ingrese el valor 1: ";
		cin >> v1; cout<<endl;
	
		cout << "Ingrese el valor 2: ";
		cin >> v2; cout<<endl;
	
		cout << "Ingrese el valor 3: ";
		cin >> v3; cout<<endl;
	
		S = suma(v1, v2, v3);
		
		if(S %2 == 0){
			cout << "Suma de los 3 valores: " << S <<" es par"<<endl;
			RZ2 = raiz2(S);
			cout << "Raiz cuadrada del resultado par de la summa es " << RZ2 <<endl;
		}else{
			cout << "Suma de los 3 valores: " << S <<" es impar"<<endl;
			RZ2 = impar(S);
			cout << "Raiz cuadrada del resultado impar de la summa es " << RZ2 <<endl;
		}
		cout << "\nPresione 'Enter' para calcular de nuevo, o cierre la ventana para salir.";
		cin.ignore();
		cin.get();
	}
	return 0;
}

float suma(float v1, float v2, float v3)
{
	float Suma = 0;
	Suma = (v1 + v2 + v3);
	
	return Suma;
}

float impar(float S)
{
	float RZ2 = 0;
	RZ2 = pow(S, (1.00/2.00));
	return RZ2;
}

float par(float S)
{
	float RZ2 = 0;
	RZ2 = pow(S, (1.00/2.00));
	return RZ2;
}

float raiz2(float RZ2)
{
	float result = 0;
	result = pow(RZ2, 2);
	return result;
}
