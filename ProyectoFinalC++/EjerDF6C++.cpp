#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int a = 0, b, c = 0;
	
	//cout << "Ingrese el numero ";
	//cin >> a; cout << endl;
	
	
	for(int i = 1; i <= 12; i++){
		cout<<endl; cout <<"Tabla de multiplicar" <<endl <<endl;
		a++;
	
		if(a >= 1 && a <= 12){
			for(b = 1; b <= 12; b += 1){
				c = (a * b);
				cout << a <<" x "<< b <<" = " << c <<endl;
			}
		}else {
			cout << "El numero es invalido. Debe de ser entre 1 a 12\n";
		}
	}
	getch();
	return 0;
}
