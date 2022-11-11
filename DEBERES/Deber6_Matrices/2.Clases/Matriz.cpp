/***********************************************************************
 * Module:  Matriz.cpp
 * Author:  Ronny Ibarra-Jose Imbaquinga
 * Modified: jueves, 10 de noviembre de 2022 24:28:50
 * Purpose: Implementation of the class Matriz
 ***********************************************************************/

#include "Matriz.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

using namespace std;


int Matriz::getSuma(void)
{
   return suma;
}



void Matriz::setSuma(int newSuma)
{
   suma = newSuma;
}



int Matriz::getMultiplicacion(void)
{
   return multiplicacion;
}



void Matriz::setMultiplicacion(int newMultiplicacion)
{
   multiplicacion = newMultiplicacion;
}



Matriz::Matriz()
{
}

Matriz::~Matriz()
{
}
char* Matriz::doubleAndFloatImput(char const *msj){
	char *dato = new char[0];
	char c;
	int i=0,cont = 0;
	cout<<msj;
	while((c = getch()) != 13){
		if(c >= '0' && c <= '9'){
			cout<<c;
			dato[i++] = c;				
		}else if(c == '\b'){
			i--;
			cout<<"\b \b";
			cont = 0;				
		}
	}
	dato[i] = '\0';	
	return dato;
}
double Matriz::validarDouble(){
    char dato[10];
    float valorFlotante;
    strcpy(dato, doubleAndFloatImput(""));
    valorFlotante = atof(dato);
    return valorFlotante;
}

void Matriz::validar1(int *vector,int t1,int t2)
{
  int i,j;
   int dato;
   printf("\nIngrese la primera matriz:\n ");
   for(i=0;i<t1;i++){
   	printf("\n");
   	for(j=0;j<t2;j++){
   		dato=validarDouble();
   		printf("  ");
   		(*(&(*vector)))=dato;
   		*(vector++);
   		}
   		
   }
}
void Matriz::validar2(int *vector2,int t1,int t2)
{
  int i,j;
   int dato;
   printf("\nIngrese la segunda  matriz:\n ");
   for(i=0;i<t1;i++){
   	printf("\n");
   	for(j=0;j<t2;j++){
   		dato=validarDouble();
   		printf("  ");
   		(*(&(*vector2)))=dato;
   		*(vector2++);
   		}
   		
   }
}


void calculoSuma(int *vector,int *vector2,int *vector3, int t1, int t2)
{
	int i,j;
   
   for(i=0;i<t1;i++){
   	for(j=0;j<t2;j++){
   		
   		*vector=(*(&(*vector)))+(*(&(*vector2)));
   		*(vector++);
   		*(vector3++);
   		*(vector2++);
   		}
   		
   }
   
}


void calculoMultiplicacion(int *vector,int *vector2, int *vector3, int t1, int t2)
{
	int i,j;
	
   
   for(i=0;i<t1;i++){
   	for(j=0;j<t2;j++){
   		
   		*vector3=(*(&(*vector))) * (*(&(*vector2)));
   		*(vector++);
   		*(vector3++);
   		*(vector2++);
   	
   		}
      
   }
   
   
}



void imprimirSuma(int *vector3, int t1, int t2)
{
   printf("\nEl resultado de la suma es:\n ");
   int i,j;
   for(i=0;i<t1;i++){
   	for(j=0;j<t2;j++){
   		
     	printf("%d   ",*(&(*vector3)));
   		*(vector3++);
   		
	   }
	   printf("\n");
   }
}



void imprimirMultiplicacion(int *vector3,int t1, int t2)
{
	printf("\nEl resultado de la multiplicacion es:\n ");
   int i,j;
   for(i=0;i<t1;i++){
   	for(j=0;j<t2;j++){
   		
     	printf("%d   ",*(&(*vector3)));
   		*(vector3++);
   		
	   }
	   printf("\n");
   }
   
   
}