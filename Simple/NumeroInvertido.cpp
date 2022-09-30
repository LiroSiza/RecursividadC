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
		cout<<endl<<"  Û FUNCIONES RECURSIVAS Û"<<endl;
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
				cout<<endl<<"  ÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜ"<<endl;
				cout<<"  Û ÉÍÍ  ÉÍÍ  ÉÍÍ  ÉÍ»  ÉÍ»     ÉÍ»  ÉÍÍ  Ë Ë  ÉÍÍ  ÉÍÍ     ÍËÍ  ÉÍ»  ÉÍ»  ÉÍ»  ÉÍÍ  ÉÍÍ Û"<<endl;
    			cout<<"  Û º    º    º    º º  º º     º º  º    º º  º    º        º   º º  º º  º º  º    º   Û"<<endl;
    			cout<<"  Û º    ÌÍÍ  ÈÍ»  ÌÍº  ÌÍ¼     ÌÍ¼  ÌÍÍ  ÈË¼  ÌÍÍ  ÈÍ»      º   º º  ÌÍ¼  ÌÍ¼  ÌÍÍ  ÈÍ» Û"<<endl;
    			cout<<"  Û º    º      º  º º  º º     º º  º     º   º      º      º   º º  º º  º º  º      º Û"<<endl;
    			cout<<"  Û ÈÍÍ  ÈÍÍ  ÍÍ¼  Ê Ê  Ê Ê     Ê Ê  ÈÍÍ   Ê   ÈÍÍ  ÍÍ¼      Ê   ÈÍ¼  Ê Ê  Ê Ê  ÈÍÍ  ÍÍ¼ Û"<<endl;
    			cout<<"  ÛÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÜÛ"<<endl;
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
