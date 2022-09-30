/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/

//Torres de hanoi implementando recursividad

#include <iostream>
using namespace std;

void hanoi(int n,char a,char b,char c);

int main(){
	
	char a='A',b='B',c='C';
    cout<<endl<<endl<<"Discos #3"<<endl;
	hanoi(3,a,b,c);
	
	cout<<endl<<endl<<"Discos #4"<<endl;
	hanoi(4,a,b,c);
	
}

void hanoi(int n,char a,char b,char c){
	if(n==1){
		cout<<endl<<"disco "<<n<<" "<<a<<"->"<<c;
	}else{
		hanoi(n-1,a,c,b);
		cout<<endl<<"disco "<<n<<" "<<a<<"->"<<c;
		hanoi(n-1,b,a,c);
	}
}
