/***********************************************************************
 * Module:  Tablero.cpp
 * Author:  ronny
 * Modified: jueves, 26 de enero de 2023 17:41:51
 * Purpose: Implementation of the class Tablero
 ***********************************************************************/
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <fstream>
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

void Tablero::insertarTabla()
{
   	int na;
    int nfc;
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
            matriz[i][j] = 0 + rand() % 10;
            archivo << matriz[i][j] << " ";
        }
        archivo << endl;
    }
    cout << "Tablero creado en el archivo -Tablero.txt-" << endl;
    archivo.close();   
}




