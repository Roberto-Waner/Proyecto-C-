#include <iostream>
using namespace std;

int main () {
	
	int num = 54;
	
	if(num > 0) {
		if(num %2 == 0){
			cout << "El numero es positivo y par" << endl;
		}else{
			cout << "El numero es positivo e impar" << endl;
		}
	}else if(num < 0){
		cout << "El numero es negativo" << endl;
	}else{
		cout << "El numero es cero" << endl;
	}
	return 0;
}
