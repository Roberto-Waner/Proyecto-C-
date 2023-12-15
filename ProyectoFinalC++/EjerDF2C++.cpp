#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int num = 260, total = 10;
	
	cout <<"Numeros Impares" <<endl;
	
	while(num > 10) {
		if(num %2 != 0){
			cout << num <<endl;
			total + num;
			num--;
		}else{
			num--;
		}
	}
	cout << total <<endl;
	
	getch();
	return 0;
}
