/***********************************************************************
 * UFA-ESPE
 * Module:  Datos.cpp
 * Author:  Ronny Ibarra - Jose Imbaquinga
 * Modified: domingo, 30 de octubre de 2022 22:49:22
 * Purpose: Implementation of the class Datos
 * Level: level three
 * NRC: 7999
 ***********************************************************************/

#include "Datos.h"
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

using namespace std;



float Datos::getFloat(void)
{
   return Float;
}



void Datos::setFloat(float newFloat)
{
   Float = newFloat;
}



double Datos::getDouble(void)
{
   return Double;
}



void Datos::setDouble(double newDouble)
{
   Double = newDouble;
}



char Datos::getChar(void)
{
   return Char;
}



void Datos::setChar(char newChar)
{
   Char = newChar;
}


Datos::Datos()
{
}



Datos::~Datos()
{
   // TODO : implement
}
char *ingresar_double(char *msj)
{
    char *Double=new char[40];
	char caracter;
	int i=0;
	cout<<msj<<endl;
	while ((caracter=getch())!=13){
		if ((caracter>='0'&& caracter<='9') || caracter=='.'){
			if (i<=40){
				cout<<caracter;
			    Double[i++]=caracter;
			}
			
		}

		
		
	}
	Double[i]='\0';
	return Double;
		}

char *ingresar_float(char *msj)
{
    char *flotante=new char[20];
	char caracter;
	int i=0;
	cout<<msj<<endl;
	while ((caracter=getch())!=13){
		if(i==0){
		cout<<"0.";
		}
		if ((caracter>='0'&& caracter<='9') ){
				if (i<=20){
				cout<<caracter;
			    flotante[i++]=caracter;
			}
		
		
			
		
	}
	}
	flotante[i]='\0';
	return flotante;
	
			
		}
	
char *ingreso_char(char *msj)
{
    char *cadena=new char[100];
	char caracter;
	int i=0;
	cout<<msj;
	while ((caracter=getch())!=13){
		if ((caracter>=65 && 90<=caracter) || (caracter>=97 && 122<=caracter)){
			cout<<caracter;
			cadena[i++]=caracter;
		}
	}
	cadena[i]='\0';
	return cadena;
}