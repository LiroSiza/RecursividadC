/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/

#include <iostream>
using namespace std;

int factorial(int n);

int main(){
	int n;
	cout<<"\nEl factorial del numero: ";
	cin>>n;
	cout<<"\nEl factorial es: "<<factorial(n);
	return 0;
}

int factorial(int n){
	if(n>1){
		return n*factorial(n-1);
	}else{
		return 1;
	}
}

