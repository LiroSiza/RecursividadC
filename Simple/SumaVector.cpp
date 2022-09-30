/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/

#include <iostream>
#define TAM 8
using namespace std;

int sumav(int[],int);

int main(){
    int vec[TAM]={2,4,6,8,10,12,14,16}; //vector estático
    cout<<"\nLa suma de los elementos del vector es: "<<sumav(vec,TAM-1);
    return 0;
}

int sumav(int vec[],int i){
	if(i>0){
		return vec[i]+sumav(vec,i-1);
	}else{
		return vec[0];
	}
}
