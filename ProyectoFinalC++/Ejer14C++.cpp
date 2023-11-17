#include <iostream>
#include <conio.h>
using namespace std;

int par (int x);

int main(){
	int num, num_pares;
	
	cout<<"Ingrese un numero: ";
	cin>>num; cout<<endl;
	
	num_pares = par(num);
	
	cout<< num_pares <<endl;
	
	getch();
	return 0;
}

int par (int x){
	int par = 0;
	
	for(int i = x; i <= 515; i++){
		if(x %2 == 0){
			par += 2;
	
		}else{
			par++;
		}
	}
	
	return par;
}
