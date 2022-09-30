/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/

//Numero mayor dentro de un vector

#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int mayorVector(int m,int i,int vec[5],int c);

int main(){
	
	srand(time(NULL));
	cout<<endl<<"Vector con Numeros aleatorios: "<<endl;
	int vec[5];
	
	for(int i=0;i<5;i++){
		vec[i]=10+rand()%(111-10);   //Rango entre 10 y 111
		cout<<"["<<vec[i]<<"] ";
	}
	
	cout<<endl<<"Valor Mayor: "<<mayorVector(vec[0],1,vec,5)<<endl;
	return 0;
	
}

int mayorVector(int m,int i,int vec[5],int c){
	if(i>c){
		return m ;
	}
	if(vec[i]>m){
		return mayorVector(vec[i],i+1,vec,c);
	}else{
		return mayorVector(m,i+1,vec,c);
	}
}
