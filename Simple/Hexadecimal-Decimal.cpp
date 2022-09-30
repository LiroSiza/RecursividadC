/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/

//Hexadecimal a Decimal con recursividad

#include <cstdio>
#include <math.h>
#include <string.h>
#include <iostream>
using namespace std;

int hexDec(char cad[],int indice,int i);

int main(){
	
	char cad[]="8F3";
	cout<<endl<<endl<<"Hex: "<<cad<<endl;
	cout<<"Dec: "<<hexDec(cad,strlen(cad)-1,0);
	
	char cad2[]="BE38";
	cout<<endl<<endl<<"Hex: "<<cad2<<endl;
	cout<<"Dec: "<<hexDec(cad2,strlen(cad2)-1,0);
	return 0;
}

int hexDec(char cad[],int indice,int i){
	
	char hex[]="0123456789ABCDEF";	//Banco de numeros hexadecimales
	int res,num;
	
	if(indice>=0){
		for(int j=0;j<strlen(hex);j++){
			if(cad[indice]==hex[j]){
				num=j;
				break;
			}
		}
		return num*pow(16,i)+hexDec(cad,indice-1,i+1);
	}else{
		return 0;
	}
	
}
