#include <iostream>
#include <cmath>

//Ejemplo de función sin argumentos
double factorial(int n) {
    double fact = 1;
    for(int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

//Ejemplo de función con argumentos
double suma_arreglo(double arreglo[], int n) {
    double suma = 0;
    for(int i = 0; i < n; i++) {
        suma += arreglo[i];
    }
    return suma;
}

//Ejemplo de función con argumentos y variables locales
double promedio_arreglo(double arreglo[], int n) {
    double suma = suma_arreglo(arreglo, n);
    double promedio = suma / n;
    return promedio;
}

int main() {
    double arreglo[] = {1, 2, 3, 4, 5};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);

    std::cout << "El factorial de 5 es: " << factorial(5) << std::endl;
    std::cout << "La suma del arreglo es: " << suma_arreglo(arreglo, n) << std::endl;
    std::cout << "El promedio del arreglo es: " << promedio_arreglo(arreglo, n) << std::endl;

    return 0;
}
