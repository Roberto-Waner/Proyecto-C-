#include <iostream>
#include <conio.h>

using namespace std;

int main (){
	
	int numero[100], n;
	
	cout<<"Entre cantidad de valor: ";
	cin>> n; cout<<endl;
	
	for(int z = 0; z < n; z++){
		cout<<"Entre valor: ";
		cin>> numero[z];
	}
	
	for(int z = 0; z < n; z++){
		cout<<"Los numeros son: ";
		cout<< numero[z]<<endl;
	}
	
	getch();
	return 0;
}

/*
#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main (){
	
	vector<int> numero;
	int n;
	
	cout<<"Entre cantidad de valor: ";
	cin>> n; cout<<endl;
	
	for(int z = 0; z < n; z++){
		int temp;
		cout<<"Entre valor: ";
		cin>> temp;
		numero.push_back(temp);
	}
	
	for(int z = 0; z < n; z++){
		cout<<"Los numeros son: ";
		cout<< numero[z]<<endl;
	}
	
	getch();
	return 0;
}*/
