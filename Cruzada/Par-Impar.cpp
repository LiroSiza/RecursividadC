/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/

//Recursividad Cruzada, numeros par-impar

#include <iostream>
using namespace std;

int par(int n);
int impar(int n);

int main(){
	
	int n;
	n=4;
	par(n)==1?cout<<endl<<n<<" es par":cout<<endl<<n<<" es impar";
	
	n=3;
	par(n)==1?cout<<endl<<n<<" es par":cout<<endl<<n<<" es impar";
	
	n=2;
	impar(n)==0?cout<<endl<<n<<" es par":cout<<endl<<n<<" es impar";
	
	n=5;
	impar(n)==0?cout<<endl<<n<<" es par":cout<<endl<<n<<" es impar";
	
	return 0;
}

int par(int n){
	if(n==0)return 1;
	return impar(n-1);
}

int impar(int n){
	if(n==0)return 0;
	return par(n-1);
}
