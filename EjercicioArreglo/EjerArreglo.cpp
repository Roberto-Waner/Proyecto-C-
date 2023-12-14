#include <iostream>
#include <cctype>
#include <cstdlib>
#include <string>
#include <algorithm>
#include <conio.h>

using namespace std;

int main (){
	int n = 20, suma = 0, Rg1 = 0, Rg2 = 0, Rg3 = 0, Rg4 = 0;
	int nota[n];
	float prom;
	string calif;
	
	for(int i = 0; i < n; i++){
	
			cout<<"Ingrese la Nota #" << i+1 <<": ";
			cin>> nota[i]; //cout<<endl;
			if (nota[i] == false){
				cout<<endl; cout<<"Valor de Nota incorecta. ";
				system("pause");
				cin.clear();
				cin.ignore();
				continue;
			}
	
		
		if(nota[i] < 0 || nota[i] > 100){
			cout<<endl; cout<<"Valor de Nota incorecta. Las Notas deben de ser de 1 a 100\n";
			i--;
		
		}else if(nota[i] >= 90){   //Escala de calificaciones
			Rg1++;
			
		}else if(nota[i] >= 80 && nota[i] <= 89){
			Rg2++;
			calif = "B";
			cout <<"Pasa en " << calif <<". Esta Aprobado"<<endl <<endl;
		
		}else if(nota[i] >= 70 && nota[i] <= 79){
			Rg3++;
			calif = "C";
			cout <<"Pasa en " << calif <<". Esta Aprobado"<<endl <<endl;
		
		}else{
			Rg4++;
			calif = "F";
			cout <<"Pasa en " << calif << ". Esta Reprobado"<<endl <<endl;
		}
		
	}
	
	
	//acumulador de las notas
	for(int i = 0; i < n; i++){
		suma += nota[i];
	}
	
	//Calculos de los promedios
	prom = (float)suma /n;
	
	if(prom >= 90){
		calif = "A";
		cout <<"Pasa en " << calif <<". Esta Aprobado"<<endl <<endl;
	}
	
	cout<<"Promedio de las Notas "<<prom<<endl;
	
	
	cout <<"Estudiantes con Notas entre 1 a 69: " << Rg4 <<endl;
	cout <<"Estudiantes con Notas entre 70 a 79: " << Rg3 <<endl;
	cout <<"Estudiantes con Notas entre 80 a 89: " << Rg2 <<endl;
	cout <<"Estudiantes con Notas entre 90 a 100: " << Rg1 <<endl;
	
	
	getch();
	return 0;
}
