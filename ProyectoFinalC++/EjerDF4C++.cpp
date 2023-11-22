#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int num, i = 1, R;
	
	cout<<"Ingresar un numero: ";
	cin >> num; cout<<endl;
	
	cout <<"Tabla de multiplicar de " << num <<endl;
	
	R = (num * i);
	
	if(num < 1 || num > 12){
		cout <<"Numero invalido. Debe de ser entre 1 a 12.";
	}else {
		
		while(i <= 12) {
			cout << num << " x " << i << " = " << R << endl;
			i++;
		}
	}
	getch();
	return 0;
}
