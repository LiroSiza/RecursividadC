/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/

#include <stdio.h>
#include <iostream>
using namespace std;

int fib(int n);

int main(){
	int n;
	cout<<endl<<"Dame un numero: ";
	cin>>n;
	cout<<endl<<"El fibonacci de "<<n<<" es "<<fib(n);
	return 0;
}

int fib(int n){
	if(n>=2){//condicion de paro
		return fib(n-1)+fib(n-2);//doble llamada recursiva
	}else{
		return n;//caso base
	}
}
