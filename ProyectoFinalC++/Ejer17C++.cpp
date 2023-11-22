#include <iostream>
#include <conio.h>

using namespace std;

long double impuesto1 (long double S);

int main(){
	int sueldo; //el sueldo que ingresara el usuario
	long double descuento, anual, salarioanual_neto;
	
	
	cout<<"Calculo del Impuesto sobre la renta (ISR)\n\n";
	
	cout<<"Ingrese su sueldo mensual: RD$"; cin>>sueldo; cout<<endl;
	
	anual = (sueldo * 12); 
	
	descuento = impuesto1(anual); /*la variable anual sera sustituto de "S" en 
									la funcion "impuesto1". Y quien tomara el valor
									de la funcion "impuesto1" sera la variable descuento.*/
	
	salarioanual_neto = (anual - descuento); 
	
	cout<<"Resultados\n\n";
	
	if(anual > 867123.00){
		cout<<"Se aplica descuento de la ISR, que es (25%) mas 79,776.00 "<<endl<<endl;
		cout<<"Salario Anual "<< anual; cout<<" RD$" <<endl;
		cout<<"Descuento "<<descuento; cout<<" RD$"<<endl;
		cout<<"Salario anual neto "<< salarioanual_neto; cout<<" RD$" <<endl;
		
	}else if(anual > 624329.00){
		cout<<"Se aplica descuento de la ISR, que es (20%) mas 31,216.00 "<<endl<<endl;
		cout<<"Salario Anual "<< anual; cout<<" RD$" <<endl;
		cout<<"Descuento "<<descuento; cout<<" RD$" <<endl;
		cout<<"Salario anual neto "<< salarioanual_neto; cout<<" RD$" <<endl;
		
	}else if(anual > 416220.00){
		cout<<"Se aplica descuento de la ISR, que es (15%) "<<endl<<endl;
		cout<<"Salario Anual "<< anual; cout<<" RD$" <<endl;
		cout<<"Descuento "<<descuento; cout<<" RD$" <<endl;
		cout<<"Salario anual neto "<< salarioanual_neto; cout<<" RD$" <<endl;
		
	}else{
		cout<<"Queda Exento. No se le aplica el ISR "<<endl<<endl;
		cout<<"Salario Anual "<< anual; cout<<" RD$" <<endl;
	}
	
	getch();
	return 0;
}

long double impuesto1 (long double S){ //"S" es anual dentro del main()
	long double impt1 = 1;
	double min = 416220.00;
	double med = 624329.00;
	double max = 867123.00;
	
	if(S > max){ //si el sueldo anual sobrepasa los 867,123 se le aplica 25% mas 79,776.00
		impt1 = ((S * 25)/100) + 79776.00;
		
	}else if(S > med){ //si el sueldo anual sobrepasa los 624,329 se le aplica 20% mas 31,216.00
		impt1 = (31216.00 + ((S * 20)/100));
		
	}else if(S > min){ //si el sueldo anual sobrepasa los 416,220 se le aplica 15%
		impt1 = ((S * 15)/100);
		
	}else{ //si el sueldo anual no sobrepasa los 416,220 queda exento
		impt1 = 0;
	}
	
	return impt1;
}
