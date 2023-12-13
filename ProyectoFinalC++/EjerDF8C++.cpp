#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int num = 8, multi;
	
	cout <<"Tabla de multiplicacion del 8 que de como valor menor o igual a 500\n\n";
	
	for(int i = 1; i <= 62; i++){
		multi = (num * i);
		cout << num <<" x " << i << " = " << multi <<endl;
	}
	
	getch();
	return 0;
}
