/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/

#include <iostream>
using namespace std;
	
int ack(int m,int n);
	
int main(){
	cout<<endl<<"El resultado es "<<ack(1,2)<<endl; //resultado 4
	cout<<endl<<"El resultado es "<<ack(2,5)<<endl; //resultado 13
	return 0;
}

int ack(int m,int n){
	if(m==0){ //si m==0
		return n+1;
	}else{
		if(n==0){ //si m>0 y n==0
			return ack(m-1,1);
		}else{
			return ack(m-1,ack(m,n-1)); //llamada anidada
		}
	}
}
