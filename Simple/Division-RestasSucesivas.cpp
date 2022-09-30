/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/

//Division, trabajada mediante restas

#include <iostream>
using namespace std;

int restaSucesiva(int n,int d);

int main(){
	
	int cont=0,d,n;
	cout<<endl<<"Numerador: ";
	cin>>n;
	cout<<"Denominador: ";
	cin>>d;
	cout<<endl<<"Resultado: "<<restaSucesiva(n,d)<<endl;
	return 0;
	
}

int restaSucesiva(int n,int d){
	if(n-d==0){
		return 1;
	}else{
		return 1+restaSucesiva(n-d,d);
	}
}
