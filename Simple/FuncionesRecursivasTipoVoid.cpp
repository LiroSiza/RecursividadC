/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/

//Funciones recursivas tipo void, menu recursivo

#include <iostream>
using namespace std;

void binario(int n);
void rev(int n);
void menu(int op);

int main(){
	menu(0);
	return 0;
}

void rev(int n){  //Imprime numero al revés
	int cociente, residuo;
	cociente=n/10;
	residuo=n%10;
	cout<<residuo;
	if(cociente !=0){
		rev(cociente);
	}
}

void binario(int n){  //Imprime decimal a binario
	int cociente,residuo;
	cociente=n/2;
	residuo=n%2;
	if(cociente!=0){
		binario(cociente);
	}
	cout<<residuo;	
}

void menu(int op){
	int num,num2;
	if(op!=3){
		cout<<endl;
		cout<<endl<<"FUNCIONES RECURSIVAS TIPO VOID";
		cout<<endl<<"1.Cambiar decimal a binario";
		cout<<endl<<"2.Imprimir un numero alreves";
		cout<<endl<<"3.Salir";
		cout<<endl<<"Opcion: ";
		cin>>op;
		switch(op){
			case 1: {
				cout<<endl<<"Ingresa el numero a convertirlo a binario: ";
				cin>>num;
				cout<<endl<<"El numero binario es: ";
				binario(num);
				break;
			}
			case 2: {
				cout<<endl<<"Ingrese el numero a invertir: ";
				cin>>num2;
				cout<<"			    # ";
				rev(num2);
				break;
			}
			case 3: {
				cout<<endl<<"Adios";
				break;
			}
			default: cout<<endl<<"Opcion incorrecta";
		}
		menu(op);
	}
}
