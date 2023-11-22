#include <iostream>
#include <conio.h>
using namespace std;

int par (int x, int y);
int impar (int x, int y);

int main(){
	int min, max, num_pares;
	min = 5, max = 515;
	
	num_pares = par(min, max);
	
	cout<< num_pares <<endl;
	
	getch();
	return 0;
}

int par (int x, int y){
	int par = 0;
	
	for(int i = x; i <= y; i++){
		if(i %2 == 0){
			par++;
		}
	}
	
	return par;
}

int impar (int x, int y){
	
}
