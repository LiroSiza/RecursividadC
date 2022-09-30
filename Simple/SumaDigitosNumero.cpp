/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/

//Suma de los digitos de un numero

#include <iostream>
using namespace std;

int sumaDigitos(int n);

int main(){
	
	int n;
	cout<<endl<<"Numero: ";
	cin>>n;
	cout<<"Resultado: "<<sumaDigitos(n)<<endl;
		
}

int sumaDigitos(int n){
	if(n<10){
		return n;
	}else{
		return n%10+sumaDigitos(n/10);
	}
}
