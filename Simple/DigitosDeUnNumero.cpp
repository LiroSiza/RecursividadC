/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/

#include <iostream>
using namespace std;

int digitos(int n);

int main(){
	int n;
	cout<<endl<<"Numero a evaluar: ";
	cin>>n;
	cout<<endl<<"Digitos # "<<digitos(n)<<endl;
}

int digitos(int n){
	if(n>10){
		return 1+digitos(n/10);
	}else{
		return 1;
	}
}
