#include <iostream>
#include <math.h>
#include <conio.h>

using namespace std;

void operaciones(float, float, float&, float&);

int main(){
	float a, b, suma = 0, resta = 0;
	
	cout << "Entre valor 1: "; cin>> a ; cout<<endl;
	cout << "Entre valor 2: "; cin>> b ; cout<<endl;
	
	//operaciones(val1, val2, suma, resta);
	
	cout <<"La Suma es "<<suma<<endl;
	cout <<"La Resta es "<<resta<<endl;
	
	getch();
	return 0;
}

void operaciones(float val1, float val2, float& suma, float& resta){
	suma = (val1 + val2);
	resta = (val1 - val2);
} 
