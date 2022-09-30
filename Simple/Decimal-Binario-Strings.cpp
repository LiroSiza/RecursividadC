/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/

//Decimal a binario usando strings

#include <iostream>
#include <string>
using namespace std;

string cambia(int n);

int main(){
	
    int n
	n=36;
	cout<<endl<<endl<<"Valor en decimal: "<<n<<endl;
	cout<<"Valor en binario: "<<cambia(n);
	
	n=23;
	cout<<endl<<endl<<"Valor en decimal: "<<n<<endl;
	cout<<"Valor en binario: "<<cambia(n);
	
	return 0;
}

string cambia(int n){
	string dig;
	string bin;
	int res=n%2;
	int coc=n/2;
	if(res==0){
		dig="0";
	}else{
		dig="1";
	}
	if(coc==0){
		bin=dig;
	}else{
		bin=cambia(coc)+dig;
	}
	return bin;
}
