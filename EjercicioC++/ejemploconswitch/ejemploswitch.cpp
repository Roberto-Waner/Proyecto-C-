#include <iostream>
using namespace std;

int main(){
	int a;
	
	cout <<"Entre un valor: "; cout<<endl;
	cin >> a;
	
	switch(a){
		case 1: cout <<"amarillo";
		break;
		
		case 2: cout <<"verde";
		break;
		
		case 3: cout <<"rojo";
		break;
		
		default: cout<<"Color invalido"; 
		break;
	}
	return 0;
}
