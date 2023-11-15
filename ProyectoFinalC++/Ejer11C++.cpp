#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int num, up = 0;
	
	cout <<"Ingrese un numero:\n";
	
	
	while(num != 0){
		cin >> num;
		if(num > 0){
		
			up++;
		 }
	}
	cout <<"Fin"; cout<<endl;
	cout<<"Cantidad de numeros ingresados superior a 0: " <<up<<endl;
	
		
	getch();
	return 0;
}
