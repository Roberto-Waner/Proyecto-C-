#include <iostream>
#include <conio.h>
using namespace std;

void par (int, int);
void impar1 (int);
void impar2 (int);

int main(){
	int min, max, num_pares;
	min = 5, max = 515;

	cout<<"Numeros pares entre 5 a 515.\n\n";
	
	impar1(min);
	
	par(min, max);
	
	impar2 (max);
	
	getch();
	return 0;
}

void par (int x, int y){
	for(int i = x; i <= y; i++){
		if(i %2 == 0){
			printf("El numero %d es par.\n", i); //"printf" es similar a cout y "%d" subtituye la variable "i" y se puede incluir dentro de los comentarios
		}
	}
}

void impar1 (int x){
	printf("El numero %d es impar.\n", x);
}

void impar2 (int y){
	printf("El numero %d es impar.\n", y);
}
