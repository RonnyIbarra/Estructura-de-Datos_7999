/***********************************************************************
 * Module:  Tablero.h
 * Author:  ronny ibarra,jose imbaquinga
 * Modified: jueves, 26 de enero de 2023 17:41:51
 * Purpose: Declaration of the class Tablero
 ***********************************************************************/
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
#include <windows.h>
#include "Tablero.cpp"

using namespace std;


int main()
{
	int na;
    int nfc;
    srand(time(NULL)); 
    
    Tablero tb;
	int opcion;
	int a=8;
    bool repetir = true;
    
    do {
        system("cls");
        
        // Texto del menú que se verá cada vez
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Generar Tablero" << endl;
        cout << "2. Ver tablero" << endl;
        cout << "0. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
		opcion=tb.validarEntero();       
        switch (opcion) {
            case 1:
            	system("cls");  
            	cout<<"Generando tabla"<<endl;
            	Sleep(3000);
			   tb.insertarTabla(a); 
			   system("pause");            
            break;
                
            case 2:
            	system("cls");
				tb.verTablero();
                system("pause>nul"); // Pausa
                break;
                
            case 3:
                // Lista de instrucciones de la opción 3                
                
                system("pause>nul"); // Pausa            
                break;
                
            case 4:
                // Lista de instrucciones de la opción 4                
                
                system("pause>nul"); // Pausa                
                break;
            
            case 0:
            	repetir = false;
            	break;
        }        
    } while (repetir);
	 
    return 0;
}

