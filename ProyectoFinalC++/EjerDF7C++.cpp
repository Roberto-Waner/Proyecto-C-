#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
	int nota, aprob = 0, rprob = 0;
	
	cout <<"Notas de los Alumnos\n\n";
	cout <<"Ingrese la Nota del Alumno:\n\n";
	
	for(int i = 1; i <= 10; i++){
		cout <<"Nota ";
		cin >> nota; cout <<endl;
		
		if(nota < 0 || nota > 100){
			cout <<"Nota invalidad. Recuerda que la nota debe de ser entre 1 hasta 100\n\n";
			i--;
			
		}else if(nota >= 70){
			aprob++;
			
		}else{
			rprob++;
			
		}
	}
	cout<<"Aprobado:  " << aprob <<endl;
	cout<<"Reprobado: " << rprob <<endl;
	
	getch();
	return 0;
}
