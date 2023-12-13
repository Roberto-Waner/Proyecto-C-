#include <iostream>
#include <conio.h>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
	setlocale (LC_ALL, "");
	int opcion;
	
	//do{
		cout <<"Programas en C++\n";
		cout <<"Menu Principal\n\n";
		cout <<"///////////////////////////////////////////////////////////////////////////////////////////////////////////////\n";
		cout <<"1 - Numeros pares descendentes de 1 a 240\n";
		cout <<"2 - Numeros impares descendentes de 260 hasta 10\n";
		cout <<"3 - Ingresar por teclado 3 valores y determinar quien es mayor, medio y menor\n";
		cout <<"4 - Tabla de multiplicar entre 1 y 12\n";
		cout <<"5 - Calcularadora de Raiz Cuadrada, Cubica y Cuarta\n";
		cout <<"6 - Demostración automatica de las 12 tablas de multiplicación\n";
		cout <<"7 - Solicitud de 10 notas que muestre quienes sacaron igual o mayor a 70 o menor a 70\n";
		cout <<"8 - Multiplicación desde 8 hasta 500\n";
		cout <<"9 - Programa que recive 3 valores, donde si todos son iguales se imprime\n";
		cout <<"10 - Programa que solicite un numero entre 1 a 999 y te dice cuanto digitos tiene\n";
		cout <<"11 - Programa que permita introducir cualquier números y finalice introduciendo el valor 0.\n";
		cout <<"12 - Programa que calcule 3 raices impares\n";
		cout <<"13 - Numeros factoriales.\n";
		cout <<"14 - Programa que acumulen numeros pares entre 5 y 515.\n";
		cout <<"15 - Programa que calcule la seguridad social y descuenta al sueldo.\n";
		cout <<"16 - Programa que calcule la Administradora de Fondo de Penciones (AFP) y descuenta al sueldo.\n";
		cout <<"17 - Programa que calcule el Impuesto Sobre la Renta (ISR) y descuenta al sueldo.\n";
		cout <<"18 - Programa que permite convertir 30 calificaciones y ponerle letras\n";
		cout <<"19 - Programa que acepte por teclado 3 numeros y luego realizar las operaciones basicas matematicas\n";
		cout <<"20 - Salir del programa principal\n";
		cout <<"/////////////////////////////////////////////////////////////////////////////////////////////////////////////\n\n";
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
			
			case 11: cout<<endl; system("Ejer11C++"); system("cls"); system("Menu");break;
			
			case 12: cout<<endl; system("Ejer12C++"); system("cls"); system("Menu");break;
			
			case 13: cout<<endl; system("Ejer13C++"); system("cls"); system("Menu");break;
			
			case 14: cout<<endl; system("Ejer14C++"); system("cls"); system("Menu");break;
		
			case 15: cout<<endl; system("Ejer15C++"); system("cls"); system("Menu");break;
		
			case 16: cout<<endl; system("Ejer16C++"); system("cls"); system("Menu");break;
		
			case 17: cout<<endl; system("Ejer17C++"); system("cls"); system("Menu");break;
		
			case 18: cout<<endl; system("EjerDF_Nota_Escolar"); system("cls"); system("Menu");break;
		
			case 19: cout<<endl; system("MatematicaBasic"); system("cls"); system("Menu");break;
			
			case 20: cout<<endl; cout<<"Ha salido del programa"; exit(0); break;
		
			default: cout<<endl; cout<<"No existe la opcion a la que desea acepder"; break;
		}
		
	//}while(opcion != 20); //para finalizar el programa cuando seleciones la opcion 20 de salida
	
	getch();
	return 0;
}
