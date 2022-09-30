/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/
 
//Numero invertido con menu recursivo
 
#include <math.h>
#include <iostream>
using namespace std;

void menu(int op);
int digitos(int n);
int valorInvertido(int n,int numRev);

int main(){
	menu(0);
	return 0;
}

void menu(int op){
	
		if(op!=2){
		//system("cls");
		cout<<endl<<"  � FUNCIONES RECURSIVAS �"<<endl;
		cout<<endl<<"1...Valor Invertido de un Numero";
		cout<<endl<<"2...Salir";
		cout<<endl<<"Opcion: ";
		cin>>op;
		int n;
		
		switch(op){
			case 1: {
				cout<<endl<<"Numero a evaluar: ";
				cin>>n;
				cout<<endl<<"Valor Invertido # "<<valorInvertido(n,digitos(n)-1)<<endl<<endl; //Llamada anidada
				system("pause");
				break;
			}
			case 2: {
				cout<<endl<<"Elaborado por: "<<endl;
				cout<<endl<<"  ����������������������������������������������������������������������������������������"<<endl;
				cout<<"  � ���  ���  ���  �ͻ  �ͻ     �ͻ  ���  � �  ���  ���     ���  �ͻ  �ͻ  �ͻ  ���  ��� �"<<endl;
    			cout<<"  � �    �    �    � �  � �     � �  �    � �  �    �        �   � �  � �  � �  �    �   �"<<endl;
    			cout<<"  � �    ���  �ͻ  �ͺ  �ͼ     �ͼ  ���  �˼  ���  �ͻ      �   � �  �ͼ  �ͼ  ���  �ͻ �"<<endl;
    			cout<<"  � �    �      �  � �  � �     � �  �     �   �      �      �   � �  � �  � �  �      � �"<<endl;
    			cout<<"  � ���  ���  �ͼ  � �  � �     � �  ���   �   ���  �ͼ      �   �ͼ  � �  � �  ���  �ͼ �"<<endl;
    			cout<<"  ����������������������������������������������������������������������������������������"<<endl;
				cout<<endl<<"Chao"<<endl;
				break;
			}
			default: {
				cout<<endl<<"Opcion inexistente..."<<endl;
				break;
			}
		}
		menu(op);
	}
}

int digitos(int n){
	if(n>10){
		return 1+digitos(n/10);
	}else{
		return 1;
	}
}

int valorInvertido(int n,int tam){	
	if(n<10){
		return n;
	}else{
		return (n%10)*pow(10,tam)+valorInvertido(n/10,tam-1);
	}
}
