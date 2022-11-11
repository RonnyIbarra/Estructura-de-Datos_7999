/***********************************************************************
 * Module:  Matriz.cpp
 * Author:  Ronny Ibarra-Jose Imbaquinga
 * Modified: jueves, 10 de noviembre de 2022 24:28:50
 * Purpose: Implementation of the class Matriz
 ***********************************************************************/

#include "Matriz.cpp"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#define TAM 20
#define T 4
#define T1 4

using namespace std;

int main(int argc, char** argv){
	int *vector=new int[TAM];
	int *vector2=new int[TAM];
	int *vector3=new int[TAM];
	Matriz m= Matriz();
	m.validar1(vector,T,T1);
	m.validar2(vector2,T,T1);
	calculoSuma(vector,vector2,vector,T,T1);
	imprimirSuma(vector,T,T1);
	calculoMultiplicacion(vector,vector2,vector3,T,T1);
	imprimirMultiplicacion(vector3,T,T1);         
}