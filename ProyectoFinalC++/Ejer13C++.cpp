#include <iostream>
#include <conio.h>
using namespace std;

long factorial (int N);

int main(){
	int num; 
	//long f = 0;
	
	cout << "Ingrese un numero: ";
	cin >> num;
	
	if(num > 0){
		cout <<"El factorial de " << num <<"! es "<< factorial(num) <<endl;
	
	}else{
		cout<<"numero invalido. Los numeros factoriales no pueden tener numeros negativos" <<endl;
	}
	
	return 0;
}

long factorial (int N){
	long factorial = 1;
	for(int i = 1; i <= N; i++){
		factorial *= i;
	}
	getch();
	return factorial;
}
