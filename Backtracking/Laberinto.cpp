/*Copyright (c) 2022, Cesar Reyes Torres <> All rights reserved.*/

#include <iomanip>
#include <iostream>

//Constantes definidas
#define REN 11
#define COL 6

using namespace std;

void imprimir(char lab[REN][COL]);
bool resuelve(char lab[REN][COL],int x,int y);

int main(int arg,char **argv){
	char lab[REN][COL]={ //Nuestro laberinto
	{'#','#','#','#','#','#'},
	{'#',' ','#',' ',' ','#'},
	{'#',' ',' ',' ',' ','#'},
	{'#',' ','#','#','#','#'},
	{'#',' ',' ',' ','#','#'},
	{'#',' ','#',' ',' ','#'},
	{'#','#','#','#',' ','#'},
	{'#',' ',' ',' ',' ','#'},
	{'#',' ','#',' ','#','#'},
 	{'#',' ',' ',' ','#','#'},
 	{'#',' ','#','#','#','#'},
	};
	
	cout<<endl<<"Situacion actual ..."<<endl;
	imprimir(lab);
	
	if(resuelve(lab,1,1)){//Se está mandando columna y renglón
		cout<<endl<<"Solucion encontrada"<<endl;
		imprimir(lab);
	}
	else{
		cout<<endl<<"NO TIENE SOLUCION"<<endl;
	}
	return 0;
}

void imprimir(char lab[REN][COL]){
	cout<<endl;
	for(int i=0;i<REN;i++){
		for(int j=0;j<COL;j++){
			cout<<setw(4)<<lab[i][j];
		}
		cout<<endl;
	}
}

bool resuelve(char lab[REN][COL],int x,int y){
	//resuelve con backtracking y recursividad
	bool temp;
	lab[y][x]='.';
	if(x==0 || y==0 || x==COL-1 || y== REN-1){
		return true;
	}
	//arriba
	if(lab[y-1][x]==' '){
		temp=resuelve(lab,x,y-1);
		if(temp){
			return true;
		}
	}
	//abajo
	if(lab[y+1][x]==' '){
		temp=resuelve(lab,x,y+1);
		if(temp){
			return true;
		}
	}
	//izquierda
	if(lab[y][x-1]==' '){
		temp=resuelve(lab,x-1,y);
		if(temp){
			return true;
		}
	}
	//derecha
	if(lab[y][x+1]==' '){
		temp=resuelve(lab,x+1,y);
		if(temp){
			return true;
		}
	}
	lab[y][x]=' ';
	return false;
}
