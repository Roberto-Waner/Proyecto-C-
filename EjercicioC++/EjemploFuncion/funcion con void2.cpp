#include <stdio.h>
#include <iostream>

void contar_pares(int inicio, int fin) {
    for (int i = inicio; i <= fin; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
}

void mostrar_impar(int fin) {
    printf("El número %d es impar.\n", fin);
}

int main() {
    int a = 5;
    int b = 515;

    contar_pares(a, b);
    mostrar_impar(b);

    return 0;
}

/*#include <stdio.h>

int contar_pares(int inicio, int fin) {
    int count = 0;
    for (int i = inicio; i <= fin; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
            count++;
        }
    }
    return count;
}

int mostrar_impar(int fin) {
    printf("El número %d es impar.\n", fin);
    return fin;
}

int main() {
    int a = 5;
    int b = 515;

    contar_pares(a, b);
    mostrar_impar(b);

    return 0;
}*/
