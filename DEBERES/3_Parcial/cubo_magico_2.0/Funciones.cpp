/***********************************************************************
 * UFA - ESPE
 * Students:  Ronny Ibarra - José Imbaquinga
 * Module:  Funciones.cpp
 * Created: jueves, 02 de febrero de 2023 19:00:40
 * Modified: jueves, 03 de febrero de 2023 2:02:48
 * Problem: Cúbo Mágico
 * Level: Level three
 * NRC: 7999
 ***********************************************************************/
#include "Funciones_Magico.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <cstring>
using namespace std;
void Funciones_Magico::llenar(int a){
	int x=0,t=0,s=0,d=0,k=0,j=0;
	int p=1;
	int patron=1;
	x=(a-1)/2;
	t=((a+1)/2);
	s=(a-x-1)/2;
	d=x;
	for(int g=0;g<((a+1)/2);g++){
		j=g;
		k=g;
		for(int i=x;i>=j;i--){
			*(*(this->cubo->getCuadrado()+i)+k)=p;
			if(k<(d-s)){
				*(*(this->cubo->getCuadrado()+i)+(k+t))=p;
			}
			if(k>(d+s)){
				*(*(this->cubo->getCuadrado()+i)+(k-t))=p;
			}
			if(i>(d+s)){
				*(*(this->cubo->getCuadrado()+(i-t))+k)=p;
			}
			if(i<(d-s)){
				*(*(this->cubo->getCuadrado()+(i+t))+k)=p;
			}
			k++;
			p+=patron;
		}
		x++;
	}	
}
void Funciones_Magico::mostrar(int dimension){
	int a=2*dimension-1;
	int b=2*dimension-1;

	
	int x=0,t=0,s=0;
	x=(b-1)/2;
	t=((a+1)/2);
	s=(a-x-1)/2;
	for(int g=0;g<a;g++){
		printf("\n\t");
		for(int h=0;h<b;h++){	
			if(h>=(x-s)&&h<=(x+s)&&g<=(x+s)&&g>=(x-s)){
				printf("\t%d",*(*(this->cubo->getCuadrado()+g)+h));	
			}
		}
	}
}
void Funciones_Magico::suma(int a){
	int suma=0;
	int b=1;
	int c=1;
	for (int i=0; i<a*a; i++){
		suma=suma+b;
		b+=c;		
	}
	cout<<endl;
	cout<<"La Suma de las filas , columnas , diagonales es igual a : "<< suma/a<<endl;
}
char* Funciones_Magico::validarEnteros(char const *msj){
	char *dato = new char[0];
	char c;
	int i=0,cont = 0;
	cout<<msj;
	while((c = getch()) != 13){
		if((c >= '0' && c <= '9') ){
			cout<<c;
			dato[i++] = c;
			cont++;			
		}else if(c == '\b'){
			i--;
			cout<<"\b \b";
			cont = 0;				
		}
	}
	dato[i] = '\0';	
	return dato;
	
}

double Funciones_Magico::validarEntero(){
    char dato[10];
    float valorEntero;
    strcpy(dato, validarEnteros("- "));
    valorEntero = atof(dato);
    return valorEntero;
}



