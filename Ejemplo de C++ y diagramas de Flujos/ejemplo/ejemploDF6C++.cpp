#include <iostream>
using namespace std;

int main() {
	int a, c = 0, d;
	
	cout <<"Entre un numero:\n ";
	cin >> a;
	
	if(a >= 1 && a <= 12){
		d = 1;
		
		while(d <= 12){
			c = (a * d);
			cout << a <<" x " << d <<" = " << c <<endl;
			d = d + 1;
		}
	}else{
		cout <<"Numero invalido";
	}
}
