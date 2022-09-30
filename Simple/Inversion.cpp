/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/

//Calculo de ganancias anuales con una tasa fija

#include <iostream>
using namespace std;

float inversion(float n,int an,float ta);

int main(){
	
	int an;
	float ta,n;
	cout<<endl<<"Monto Inicial: ";
	cin>>n;
	cout<<"Total de anios: ";
	cin>>an;
	cout<<"Tasa de Interes Anual: ";  //Tasa en decimales
	cin>>ta;
	cout<<endl<<"Capital que se obtendra: "<<inversion(n,an,ta)<<endl;
	return 0;
	
}

float inversion(float n,int an,float ta){
	int aux;
	if(an==0){
		return n;
	}else{
		return (1+ta)*inversion(n,an-1,ta);
	}
}
