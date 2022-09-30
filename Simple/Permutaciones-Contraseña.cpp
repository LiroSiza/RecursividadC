/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/

#include <cstring>
#include <iostream>
using namespace std;

void permutaciones(char *cad,int left,int rigth);

int main(){
	char cad[]="mK2#z1";	//Banco de caracteres
	permutaciones(cad,0,strlen(cad));
	return 0;
}

void permutaciones(char *cad,int left,int right){
	char temp;
	char aux[60];
	char aux2[60]="21Kzm#";	   //Contraseña
	strcpy(aux,cad);
	
	//Se confirma que la combinacion obtenida coincide con la contraseña
	if(strcmp(aux,aux2)==0){
		cout<<endl<<"Contraseña correcta...  PW: "<<aux<<endl;
		cout<<endl<<endl<<"ÛÛÛÛÛ   BIENVENIDO AL SISTEMA   ÛÛÛÛÛ"<<endl;
		exit(0);
	}
	
	if(left==right){
		//cout<<endl<<aux;
	}else{
		for(int i=left;i<right;i++){
			temp=aux[left];
			aux[left]=aux[i];
			aux[i]=temp;
			permutaciones(aux,left+1,right);
		}
	}
}
