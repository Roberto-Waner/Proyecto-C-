#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

float Suma (float v1, float v2, float v3);
/*float impar (float v1, float v2, float v3);
float par (float v1, float v2, float v3);
float raiz2 (float v1, float v2, float v3);*/

int main(){
	
	float v1, v2, v3, S = 0, par = 0, impar = 0, RZ2 = 0;
	
	cout << "Sacar raiz cuadrada de numeros impares\n\n";
	
	cout << "Ingrese el valor 1: ";
	cin >> v1; cout<<endl;
	
	cout << "Ingrese el valor 2: ";
	cin >> v2; cout<<endl;
	
	cout << "Ingrese el valor 3: ";
	cin >> v3; cout<<endl;
	
	S = Suma(v1, v2, v3);
	RZ2 = pow(S, (1.00/2.00));
	
	while(v1 > )
	
	cout << "Suma de los 3 valores: " << S <<endl;
	cout << "Raiz cuadrada del total de Sumado: " << RZ2 <<endl;
}

float Suma (float v1, float v2, float v3)
{
	float Suma = 0;
	Suma = (v1 + v2 + v3);
	
	return Suma;
}

/*float impar (float v1, float v2, float v3)
{
	float impar = 0;
	impar = (Suma %2 != 0);
	
	return impar;
}

float par (float v1, float v2, float v3)
{
	float par = 0;
	par = (suma %2 == 0);
	
	return par;
}

float raiz2 (float v1, float v2, float v3)
{
	float raiz2 = 0;
	raiz2 = pow(Suma, (1.00/2.00));
	
	return raiz2;
}*/


