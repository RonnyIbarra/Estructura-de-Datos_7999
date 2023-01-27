/***********************************************************************
 * Module:  Tablero.h
 * Author:  ronny ibarra,jose imbaquinga
 * Modified: jueves, 26 de enero de 2023 17:41:51
 * Purpose: Declaration of the class Tablero
 ***********************************************************************/
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include <conio.h>
#include <iomanip>
#include "Tablero.h"

using namespace std;

const int maxc = 20;
const int maxf = 20;


int Tablero::getInsertar(void)
{
   return insertar;
}



void Tablero::setInsertar(int newInsertar)
{
   insertar = newInsertar;
}


Tablero::Tablero()
{

		
	  
}

void Tablero::verTablero(){
	string linea;
	string texto;
	ifstream archivo("Tablero.txt");
	int a;
	while(getline(archivo,linea)){
		texto=texto+linea+"\n";
	}
	
	cout<<texto<<endl;
	
	
	
}

void Tablero::insertarTabla(int nfc)
{
   	int na;
    int matriz[maxf][maxc];
    srand(time(NULL)); 
    ofstream archivo("Tablero.txt");

   //cout << "Introduce el numero de filas/columnas para la matriz:" << endl;
   //cin >> nfc;   

    archivo << "Tablero de Ajedrez" << endl << endl;

    for (int i = 0; i < nfc; i++)
    {
        for (int j = 0; j < nfc; j++)
        {
        if(i%2==0){
		
        	if(j%2==0)
           	 archivo <<"0"<< " ";
           	if(j%2==1)
           	archivo<<"1"<<" ";
    	}
    	if(i%2==1){
    		if(j%2==0)
           	 archivo <<"1"<< " ";
           	if(j%2==1)
           	archivo<<"0"<<" ";	
		}
        }
        
        archivo << endl;
    }
    cout << "Tablero creado en el archivo -Tablero.txt-" << endl;
    archivo.close();   
}


char* Tablero::validarEnteros(char const *msj){
	char *dato = new char[0];
	char c;
	int i=0,cont = 0;
	cout<<msj;
	while((c = getch()) != 13){
		if((c >= '1' && c <= '9') && cont <1){
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

double Tablero::validarEntero(){
    char dato[10];
    float valorEntero;
    strcpy(dato, validarEnteros("- "));
    valorEntero = atof(dato);
    return valorEntero;
}


