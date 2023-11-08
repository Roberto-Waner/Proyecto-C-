#include <iostream>
#include <math.h>

using namespace std;

int main() {
	
	float num, raiz2, raiz3, raiz4, prom_sum, p, total_p;
	
	num = 96;
	
	cout.precision(2);
	
	raiz2 = sqrt(num);
	raiz3 = cbrt(num);
	raiz4 = pow(num, 0.25);
	
	cout << "Resultados de las Raizes" << endl <<endl;
	cout << "Raiz Cuadrada: " << raiz2; cout <<endl <<endl;
	cout << "Raiz Cubica: " << raiz3; cout <<endl <<endl;
	cout << "Raiz Cuarta: " << raiz4; cout <<endl <<endl;
	
	prom_sum = (raiz2 + raiz3 + raiz4)/3;
	
	cout << "Promedio de las Sumas de las Raices" <<endl <<endl;
	cout << "El Promedio es: " << prom_sum; cout <<endl <<endl;
	
	p = 15;
	total_p = (prom_sum * p)/100;
	
	cout << "Sacar el 15% de las sumas de todas operaciones"<< endl <<endl;
	cout << "El 15% del total de las sumas es: " << total_p; cout <<endl;
	return 0;
	
}
