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
		bool valid = false;
		
		while(!valid){
			cout<<"Ingrese la Nota #" << i+1 <<": ";
			string temp;
			cin>> temp; //cout<<endl;
			//char str_temp[10];
			//itoa(temp, str_temp, 10);
			
			try{
				nota[i] = stoi(temp);
				valid = true;
				
			}catch(exception &e){
				cout<<"No se permiten Caractereres. Solo se aceptan numeros enteros como Nota.";
			}
			/*
			for(int j = 0; j < 10; j++){
				if(!isdigit(str_temp[j])){
					cout<<"No se permiten Caractereres. Solo se aceptan numeros enteros como Nota.";
					break;
					
				}else{
					nota[i] = temp;
					valid = true;
				}
			}*/
			
		}
		
		
		if(nota[i] < 0 || nota[i] > 100){
			cout<<endl; cout<<"Valor de Nota incorecta. Las Notas deben de ser de 1 a 100\n\n";
			i--;
		
		}else if(nota[i] >= 90){   //Escala de calificaciones
			Rg1++;
			calif = "A";
			cout <<"Pasa en " << calif <<". Esta Aprobado"<<endl <<endl;
			
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
	
	cout<<"Promedio de las Notas "<<prom<<endl;
	
	cout <<"Estudiantes con Notas entre 1 a 69: " << Rg4 <<endl;
	cout <<"Estudiantes con Notas entre 70 a 79: " << Rg3 <<endl;
	cout <<"Estudiantes con Notas entre 80 a 89: " << Rg2 <<endl;
	cout <<"Estudiantes con Notas entre 90 a 100: " << Rg1 <<endl;
	
	getch();
	return 0;
}
