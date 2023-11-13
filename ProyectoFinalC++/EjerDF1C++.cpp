#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	//cout <<"Programa que cuente los numeros pares descendentes\ndesde el 1 hasta el 240.\nTomar en cuenta que el 1 no es par pero debe salir\nen la lista\n\n\n";
	
	int a = 240, b = 1;
	
	while(a > 1){
		if(a % 2 == 0){
			cout <<"El numero: "<<a; cout<<" es par"<<endl;
			a--;
		}else{
		a--;
		}

	}
	cout <<"El numero: " <<b<<" es impar" <<endl;
	
	getch();
	return 0;
}
