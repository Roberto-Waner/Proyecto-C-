#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
	
	//while(true){
		int opcion;
		
		cout <<"Programas en C++\n";
		cout <<"Menu Principal\n\n";
		cout <<"////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
		cout <<"1 - Numeros pares descendentes de 1 a 240\n";
		cout <<"2 - Numeros impares descendentes de 260 hasta 10\n";
		cout <<"3 - Ingresar por teclado 3 valores y determinar quien es mayor, medio y menor\n";
		cout <<"4 - Tabla de multiplicar entre 1 y 12\n";
		cout <<"5 - Calcularadora de Raiz Cuadrada, Cubica y Cuarta\n";
		cout <<"6 - Demostración automatica de las 12 tablas de multiplicación\n";
		cout <<"7 - Solicitud de 10 notas que muestre quienes sacaron igual o mayor a 70 o menor a 70\n";
		cout <<"8 - Multiplicación desde 8 hasta 500\n";
		cout <<"9 - Programa que recive 3 valores, donde si todos son iguales se imprime\n";
		cout <<"10 - Programa que solicite un numero entre 1 y 999\n";
		cout <<"11 - Programa que permite convertir calificaciones en letras\n";
		cout <<"12 - Programa que acepte por teclado 3 numeros y luego realizar las operaciones basicas matematicas\n";
		cout <<"13 - Salir del programa principal\n";
		cout <<"///////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n";
		cout <<"Eliga una opcion: ";
		cin >> opcion;
	
		switch(opcion){
		
			case 1: cout<<endl; system("EjerDF1C++"); system("cls"); system("Menu");break;
		
			case 2: cout<<endl; system("EjerDF2C++"); system("cls"); system("Menu");break;
		
			case 3: cout<<endl; system("EjerDF3C++"); system("cls"); system("Menu");break;
		
			case 4: cout<<endl; system("EjerDF4C++"); system("cls"); system("Menu");break;
		
			case 5: cout<<endl; system("EjerDF5C++"); system("cls"); system("Menu");break;
		
			case 6: cout<<endl; system("EjerDF6C++"); system("cls"); system("Menu");break;
		
			case 7: cout<<endl; system("EjerDF7C++"); system("cls"); system("Menu");break;
		
			case 8: cout<<endl; system("EjerDF8C++"); system("cls"); system("Menu");break;
		
			case 9: cout<<endl; system("EjerDF9C++"); system("cls"); system("Menu");break;
		
			case 10: cout<<endl; system("EjerDF10C++"); system("cls"); system("Menu");break;
		
			case 11: cout<<endl; system("EjerDF_Nota_Escolar"); system("cls"); system("Menu");break;
		
			case 12: cout<<endl; system("MatematicaBasic"); system("cls"); system("Menu");break;
			
			case 13: cout<<endl; cout<<"salio del programa"; break;
		
			default: cout<<endl; cout<<"No existe la opcion a la que desea acepder"; break;
		}
	//}
	getch();
	return 0;
}
