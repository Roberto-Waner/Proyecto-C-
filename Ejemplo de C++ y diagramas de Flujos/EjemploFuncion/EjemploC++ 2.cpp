#include <iostream>
#include <conio.h>
using namespace std;

/*int parAcumulados(int a, int b){
    int pares = 0;
    for(int i = a; i <= b; i++){
        if(i % 2 == 0){
            pares++;
        }
    }
    return pares;
}

int main(){
    int num1 = 5, num2 = 515, num_pares;
    
    cout<<"Ingrese el primer numero: ";
    cin>>num1; cout<<endl;
    
    cout<<"Ingrese el segundo numero: ";
    cin>>num2; cout<<endl;
    
    num_pares = parAcumulados(num1, num2);
    
    cout<< "Numeros pares acumulados: " << num_pares <<endl;
    
    return 0;
}*/

int parAcumulados(int a, int b){
    int pares = 0;
    for(int i = a; i <= b; i++){
        if(i % 2 == 0){
            pares++;
        }
    }
    return pares;
}

int main(){
    int num1 = 5, num2 = 1000, num_pares;
    
    cout<<"Ingrese el primer numero: ";
    cin>>num1;
    
    cout<<"Ingrese el segundo numero: ";
    cin>>num2;
    
    cout<<"Numeros pares acumulados: " << parAcumulados(num1, num2) <<endl;
    
    return 0;
}
