#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int num, dgit = 0;
	
	cout <<"Ingrese un numero: ";
	cin >> num; cout<<endl;
	
	if(num != 0){
		if(num >= 1 && num < 10){
			dgit++;
			cout <<"El numero "<< num <<" tiene "<< dgit <<" digitos" <<endl;
		
		}else if(num >= 10 && num < 100){
			dgit = dgit + 2;
			cout <<"El numero "<< num <<" tiene "<< dgit <<" digitos" <<endl;
		
		}else if(num >= 100 && num < 1000){
			dgit = dgit + 3;
			cout <<"El numero "<< num <<" tiene "<< dgit <<" digitos" <<endl;
		}else{
			cout <<"El numero no puede ser mayor de 999";
		}
	}
	
	getch();
	return 0;
}
