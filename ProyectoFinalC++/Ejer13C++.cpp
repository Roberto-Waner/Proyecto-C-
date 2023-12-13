#include <iostream>
#include <conio.h>
using namespace std;

long long int factorial (int N);

int main(){
	int num; //fact; 
	
	cout<<"Numeros Factoriales\n\n";
	
	cout << "Ingrese un numero: ";
	cin >> num;
	
	//fact = factorial(num);
	
	if(num > 0){
		cout <<"El factorial de " << num <<"! es "<< factorial(num) <<endl;
	
	}else{
		cout<<"numero invalido. Los numeros factoriales no pueden tener numeros negativos" <<endl;
	}
	getch();
	return 0;
}

long long int factorial (int N){
	
	long long int factorial = 1;
	for(int i = 1; i <= N; i++){
		factorial *= i;
	}
	
	return factorial;
}
