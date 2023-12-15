#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	
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
