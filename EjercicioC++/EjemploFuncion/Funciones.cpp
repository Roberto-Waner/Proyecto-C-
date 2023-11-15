#include <iostream>
#include <conio.h>

using namespace std;

float suma (float val1, float val2);
float resta (float val1, float val2);

int main(){
	
	float a, b, s = 0, r = 0;
	
	cout <<"Entre valor 1: "; cin >> a; cout<<endl;
	cout <<"Entre valor 2: "; cin >> b; cout<<endl;
	
	s = suma(a,b);
	r = resta(a,b);
	
	cout<<"La suma es "<<s<<endl;
	cout<<"La resta es "<<r<<endl;
	
	getch();
	return 0;
}

float suma (float val1, float val2){
	float suma = 0;
	suma = (val1 + val2);
	
	return suma;
}

float resta (float val1, float val2){
	float resta = 0;
	resta = (val1 - val2);
	
	return resta;
}
