#include <iostream>
using namespace std;

int main(){
	//int a = 1, b = 3, c = a * b;
	
	//if(a = 12){
		//return 0;
	//}else{
		//a = a + 1;
	//}
	
	//cout <<"Tabla de multiplicacion de " << a <<":" <<endl;
	
	//while(b = 12){
		//cout << a <<" x " << b <<" = " << c <<endl;
		//b = b + 1;
	//}
	//return 0;
	
	int a = 3, b = 0, c = 0;
	

    if(a < 1 || a > 12) {
        cout << "El numero debe estar entre 1 y 12." << endl;
        return 0;
    }else{
    	a = a + 1;
	}

    cout <<"Tabla de multiplicacion de " << a <<":" <<endl;

    for(b = 1; b <= 12; b = b + 1) {
        cout << a << " x " << b << " = " << c << endl;
        c = a * b;
    }

    return 0;
}
