/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/

//Recursividad cruzada, numero positivo-negativo

#include <iostream>
using namespace std;

bool pos(int);
bool neg(int);

int main(){
	
	int n;
	n=4;
	pos(n)==true?cout<<endl<<n<<" es positivo":cout<<endl<<n<<" No es positivo";
	
	n=-4;
	pos(n)==true?cout<<endl<<n<<" es positivo":cout<<endl<<n<<" No es positivo";
	
	n=6;
	neg(n)==true?cout<<endl<<n<<" es positivo":cout<<endl<<n<<" No es positivo";
	
	n=-6;
	neg(n)==true?cout<<endl<<n<<" es positivo":cout<<endl<<n<<" No es positivo";
	
	return 0;
}

bool pos(int n){
	if(n>0){
		return true;
	}else{
		return neg(n);
	}
}

bool neg(int n){
	if(n<0){
		return false;
	}else{
		return pos(n);
	}
}
