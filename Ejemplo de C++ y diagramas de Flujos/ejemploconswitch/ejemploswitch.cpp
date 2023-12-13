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
	
	//*********************************************************
	//El mismo proceso pero usando "IF"
	
	//int a;
	//cout<<"Entre un valor: "; cout <<endl;
	//cin >> a;
	
	//if(a == 1){
		//cout <<"Amarillo";
		
	//}else if(a == 2){
		//cout <<"Verde";
		
	//}else if(a == 3){
		//cout <<"Rojo";
		
	//}else{
		//cout <<"Color Invalido";
	//}
	//return 0;
	//************************************************************
}
