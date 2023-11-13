#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main(){
	int nota, suma = 0, prom = 0, Rg1 = 0, Rg2 = 0, Rg3 = 0, Rg4 = 0;
	string calif;
	
	cout <<"Ingrese la nota:\n\n";
	
	for(int i = 1; i <= 30; i++){
		
		cout <<"Nota de Alumno # ";
		cin >> nota; cout <<endl;
		
		if(nota < 1 || nota > 100){
			cout <<"Nota invalida. Debe de ser entre 1 a 100";
			i--;
			
		}else{
			suma += nota;
		}
		
		if(nota >= 1 && nota <=69){
			Rg1++;
			calif = "F";
			//cout <<" F" <<endl;
			
		}else if(nota >= 70 && nota <= 79){
			Rg2++;
			calif = "C";
			//cout <<" C" <<endl;
			
		}else if(nota >= 80 && nota <= 89){
			Rg3++;
			calif = "B";
			//cout <<" B" <<endl;
			
		}else{
			Rg4++;
			calif = "A";
			//cout <<" A" <<endl;
		}
		cout <<"Nota de Alumno # " << i <<" : " << nota << " " << calif <<endl <<endl;
	
	}
	prom = (suma/30);
		
	cout << "Promedio: " << prom <<endl;
	
	cout <<"Estudiantes con Notas entre 1 a 69: " << Rg1 <<endl;
	cout <<"Estudiantes con Notas entre 70 a 79: " << Rg2 <<endl;
	cout <<"Estudiantes con Notas entre 80 a 89: " << Rg3 <<endl;
	cout <<"Estudiantes con Notas entre 90 a 100: " << Rg4 <<endl;
		
	getch();
	return 0;
}
