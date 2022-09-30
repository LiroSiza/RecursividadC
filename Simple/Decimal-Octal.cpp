/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/

#include <math.h>
#include <cstdio>
#include <iostream>
using namespace std;

int octal(int n,int i);

int main(){
	
    int n;
	n=144;
    cout<<endl<<endl<<"Decimal: "<<n<<endl;
	cout<<"Numero en octal: "<<octal(n,0)<<endl;
	
	n=2357;
    cout<<endl<<endl<<"Decimal: "<<n<<endl;
	cout<<"Numero en octal: "<<octal(n,0)<<endl;
	
	return 0;
}

int octal(int n,int i){
	
	int coc,residuo;
	coc=n/8;
	residuo=n%8;
	
	if(coc!=0){
		return residuo*pow(10,i)+octal(coc,i+1);
	}else{
		return residuo*pow(10,i);
	}
	
}
