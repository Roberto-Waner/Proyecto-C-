#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int val1, val2, val3;
	
	cout <<"Ingrese el 1ro valor: ";
	cin >> val1; cout <<endl;
	
	cout <<"Ingrese el 2do valor: ";
	cin >> val2; cout <<endl;
	
	cout <<"Ingrese el 3ro valor: ";
	cin >> val3; cout <<endl;
	
	if(val1 > val2 && val1 > val3){
		cout << "El numero " << val1; cout <<" Es mayor" <<endl;
		
		if(val2 > val3) {
			cout <<"El numero " << val2; cout <<" Es el de medio" <<endl;
			cout << "EL numero " << val3; cout <<" Es menor" <<endl;
			
		}else {
			cout <<"El numero " << val3; cout <<" Es el de medio" <<endl;
			cout << "EL numero " << val2; cout <<" Es menor" <<endl;
			}
			
	}else if(val2 > val1 && val2 > val3) {
		cout << "El numero " << val2; cout <<" Es mayor" <<endl;
		
		if(val1 > val3) {
			cout <<"El numero " << val1; cout <<" Es el de medio" <<endl;
			cout << "EL numero " << val3; cout <<" Es menor" <<endl;
		
		}else {
			cout <<"El numero " << val3; cout <<" Es el de medio" <<endl;
			cout << "EL numero " << val1; cout <<" Es menor" <<endl;
		}
	}else {
		cout << "El numero " << val3; cout <<" Es mayor" <<endl;
		
		if(val1 > val2) {
			cout <<"El numero " << val1; cout <<" Es el de medio" <<endl;
			cout << "EL numero " << val2; cout <<" Es menor" <<endl;
		
		}else {
			cout <<"El numero " << val2; cout <<" Es el de medio" <<endl;
			cout << "EL numero " << val1; cout <<" Es menor" <<endl;
			
			}
		}
		
	getch();	
	return 0;
}
