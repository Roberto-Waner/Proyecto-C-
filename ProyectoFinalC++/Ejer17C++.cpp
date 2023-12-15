#include <iostream>
#include <conio.h>

using namespace std;

long double Seguro_Social (long double SB);
long double AFP (long double num);
long double impuesto1 (long double S);

int main(){
	long double sueldo, Sneto, desc_mensual; //el sueldo que ingresara el usuario
	long double descuento, anual, salarioanual_neto, desc_SB, desc_AFP;
	
	
	cout<<"Calculo del Impuesto sobre la renta (ISR)\n\n";
	
	cout<<"Ingrese su sueldo mensual: RD$ "; cin>>sueldo; cout<<endl;
	
	desc_SB = Seguro_Social(sueldo);
	desc_AFP = AFP(sueldo);
	
	Sneto = (sueldo - desc_SB - desc_AFP);
	
	anual = (Sneto * 12); 
	
	descuento = impuesto1(anual); /*la variable anual sera sustituto de "S" en 
									la funcion "impuesto1". Y quien tomara el valor
									de la funcion "impuesto1" sera la variable descuento.*/
	
	desc_mensual = (descuento / 12);
	
	salarioanual_neto = (anual - descuento); 
	
	cout<<"*******************************************************************************************************************\n";
	cout<<"Resultados\n\n";
	
	cout<<"Descuento de Seguridad Social (3.04%): RD$ " << desc_SB <<endl<<endl;
	cout<<"Descuento de AFP (2.87%): RD$ " << desc_AFP <<endl<<endl;
	cout<<"Sueldo Neto: RD$ " <<Sneto <<endl<<endl;
	cout<<"Salario Anual: RD$ "<< anual <<endl<<endl;
	cout<<"****************************************Apartir del Salario Anual**************************************************\n\n";
	
	if(anual > 867123.00){
		cout<<"Se aplica descuento de la ISR, que es (25%) del excedente de RD$ 867,123.01 mas 79,776.00 "<<endl<<endl;
		//cout<<"Salario Anual "<< anual; cout<<" RD$" <<endl;
		cout<<"Descuento Anual: RD$ "<<descuento <<endl;
		cout<<"Descuento Mensual: RD$ "<<desc_mensual <<endl;
		cout<<"Salario anual neto: RD$ "<< salarioanual_neto <<endl;
		
	}else if(anual > 624329.00){
		cout<<"Se aplica descuento de la ISR, que es (20%) del excedente de RD$ 624,329.01 mas 31,216.00 "<<endl<<endl;
		//cout<<"Salario Anual "<< anual; cout<<" RD$" <<endl;
		cout<<"Descuento Anual: RD$ "<<descuento <<endl;
		cout<<"Descuento Mensual: RD$ "<<desc_mensual <<endl;
		cout<<"Salario anual neto: RD$ "<< salarioanual_neto <<endl;
		
	}else if(anual > 416220.00){
		cout<<"Se aplica descuento de la ISR, que es (15%) del excedente de RD$ 416,220.01 "<<endl<<endl;
		//cout<<"Salario Anual "<< anual; cout<<" RD$" <<endl;
		cout<<"Descuento Anual: RD$ "<<descuento <<endl;
		cout<<"Descuento Mensual: RD$ "<<desc_mensual <<endl;
		cout<<"Salario anual neto: RD$ "<< salarioanual_neto <<endl;
		
	}else{
		cout<<"Queda Exento. No se le aplica el ISR al ser menor o igual a los RD$ 416,220.00 "<<endl<<endl;
		//cout<<"Salario Anual "<< anual; cout<<" RD$" <<endl;
	}
	
	getch();
	return 0;
}

long double Seguro_Social (long double SB){
	long double Seguro_Social = 0;
	Seguro_Social = ((SB * 3.04)/100);
	
	return Seguro_Social;
}

long double AFP (long double num){
	long double AFP = 0;
	AFP = ((num * 2.87)/100);
	
	return AFP;
}

long double impuesto1 (long double S){ //"S" es anual dentro del main()
	long double impt1 = 0;
	double min = 416220.00;
	double med = 624329.00;
	double max = 867123.00;
	
	if(S > max){ //si el sueldo anual sobrepasa los 867,123 se le aplica 25% mas 79,776.00
		impt1 = (((S - max) * 25)/100) + 79776.00;
		
	}else if(S > med){ //si el sueldo anual sobrepasa los 624,329 se le aplica 20% mas 31,216.00
		impt1 = (31216.00 + (((S - med) * 20)/100));
		
	}else if(S > min){ //si el sueldo anual sobrepasa los 416,220 se le aplica 15%
		impt1 = (((S - min) * 15)/100);
		
	}else{ //si el sueldo anual no sobrepasa los 416,220 queda exento
		impt1 = 0;
	}
	
	return impt1;
}
