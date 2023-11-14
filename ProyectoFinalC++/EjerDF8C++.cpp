#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int num = 8, multi;
	
	cout <<"Los multiplo de 8 hasta el valor 500\n\n";
	
	for(int i = 1; i <= 62; i++){
		multi = (num * i);
		cout << num <<" x " << i << " = " << multi <<endl;
	}
	
	if (true) {
		int r = multi + 4;
		
		cout<<endl<< r << endl <<"No es un multiplo de 8. "<<endl;
	}
	
	getch();
	return 0;
}
