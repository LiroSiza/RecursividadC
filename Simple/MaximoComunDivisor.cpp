/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/

//Maximo Común Divisor

#include <iostream>
using namespace std;

int mcd(int m,int n);

int main(){
	
	int m,n;
	cout<<endl<<"Numero 1: ";
	cin>>m;
	cout<<"Numero 2: ";
	cin>>n;
	
	if(n>m){
		cout<<endl<<"MCD = "<<mcd(n,m)<<endl<<endl;
	}else{
		cout<<endl<<"MCD = "<<mcd(n,m)<<endl<<endl;
	}
	
	return 0;
	
}

int mcd(int m, int n) {
  	if (n == 0){
  		return m;
	}else{
		return mcd(n, m%n);
	}
}
