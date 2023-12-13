#include <iostream>
//#include <cohio.h>

using namespace std;

int main (){
	
	int numero[], n;
	
	cout<<"Entre cantidad de valor: ";
	cin>> n <<endl;
	
	for(int z = 0; z < n; z++){
		cout<<"Entre valor: ";
		cin>> numero[z];
	}
	
	for(int z = 0; z < n; z++){
		cout<<"Los numeros son: ";
		cout<< numero[z];
	}
	
	//getch();
	return 0;
}
