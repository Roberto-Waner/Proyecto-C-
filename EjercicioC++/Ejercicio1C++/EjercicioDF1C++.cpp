#include <iostream>
using namespace std;

int main() {

	int a = 240, b = 1;
	
	while(a > 1){
		if(a % 2 == 0){
			cout <<"el numero: "<<a; cout<<" es par"<<endl;
			a--;
		}else{
		a--;
		}

	}
	cout << b <<endl;
	return 0;
}
