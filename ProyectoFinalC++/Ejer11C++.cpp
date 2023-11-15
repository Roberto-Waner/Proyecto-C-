#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int num;
	
	cout <<"Ingrese un numero:\n";
	cin >> num;
	
	while(num != 0){
		
		cout << num; cout<<endl;
		cout <<"Ingrese un numero:\n";
		cin >> num;
		 
	}
	cout <<"Fin";
	
		
	getch();
	return 0;
}
