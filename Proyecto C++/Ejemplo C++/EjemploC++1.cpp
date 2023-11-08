#include <iostream>
using namespace std;

int main() {
	
	float s = 0, r = 0, d = 0, m = 0, por = 0, a, e;
	
	cout << "Entre el 1mer valor ";
	cin >> a; cout << endl;
	
	cout << "Entre el 2do valor ";
	cin >> e; cout << endl;
	
	s = (a+e);
	r = (a-e);
	d = (a/e);
	m = (a*e);
	por = (s + r + d + m)/4;
	
	cout << "Estos son operaciones basicas\n";
	cout << "La Suma es: " << s ; cout << endl;
	cout << "La Resta es: " << r ; cout << endl;
	cout << "La Division es: " << d ; cout << endl;
	cout << "La Multiplicacion es: " << m ; cout << endl;
	cout << "El Porcentaje es: " << por ; cout << endl;
	return 0;
}
