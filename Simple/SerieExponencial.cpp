/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/

//Serie exponencial tipo n'n...+...(n+1)'n+1....

#include <math.h>
#include <iostream>
using namespace std;

int serieExponencial(int n);

int main(){
	
	int n;
	cout<<endl<<"Numero: ";
	cin>>n;
	cout<<"Resultado: "<<serieExponencial(n)<<endl;
	return 0;
		
}

int serieExponencial(int n){
	
	int aux;
	if(n>1){
		return pow(n,n) + serieExponencial(n-1);
	}else{
		return 1;
	}
	
}
