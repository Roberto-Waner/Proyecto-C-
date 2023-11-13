#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int a, b, c = 0;
	
	cout << "Ingrese el numero ";
	cin >> a; cout << endl;
	
	cout <<"Tabla de multiplicar de: " << a <<endl;
	
	if(a >= 1 && a <= 12){
		for(b = 1; b <= 12; b += 1){
			c = (a * b);
			cout << a <<" x "<< b <<" = " << c <<endl;
		}
	}else {
		cout << "El numero es invalido. Debe de ser entre 1 a 12\n";
	}
	
	getch();
	return 0;
}
