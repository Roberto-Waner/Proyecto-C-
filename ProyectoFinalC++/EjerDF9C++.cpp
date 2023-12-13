#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int val1, val2, val3, suma = 0, multi = 0;
	
	cout <<"Ingrese el primer valor: ";
	cin >> val1; cout << endl;
	
	cout <<"Ingrese el segundo valor: ";
	cin >> val2; cout << endl;
	
	cout <<"Ingrese el tercer valor: ";
	cin >> val3; cout << endl;
	
	if(val1 == val2 && val1 == val3){
		suma = (val1 + val2);
		multi = (suma * val3);
	}
	
	cout << "Suma del primer y segundo valor = " << suma <<endl <<endl;
	cout << "Multiplicacion del resultado de la Suma por el tercer valor = " << multi <<endl;
	
	getch();
	return 0;
}
