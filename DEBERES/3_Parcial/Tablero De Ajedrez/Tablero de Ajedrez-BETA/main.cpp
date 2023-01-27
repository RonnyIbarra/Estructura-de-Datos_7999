#include <iostream>
#include <stdlib.h>
#include "Tablero.cpp"

using namespace std;


int main()
{
	int na;
    int nfc;
    int matriz[maxf][maxc];
    srand(time(NULL)); 
    
    Tablero tb;
	int opcion;
    bool repetir = true;
    
    do {
        system("cls");
        
        // Texto del menú que se verá cada vez
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Tablero" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
               cout << "Introduce el numero de filas/columnas para el tablero:" << endl;
               cin >> nfc;   
			   tb.insertarTabla(); 
			   system("pause>nul");            
            break;
                
            case 2:
                // Lista de instrucciones de la opción 2                
                
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