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
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h> 
#include <windows.h>
#include <stdlib.h>
#define TECLA_ARRIBA 72
#define TECLA_ABAJO 80
#define TECLA_ENTER 13
#include "CuboM.cpp"
#include "Funciones.cpp"

int menu(const char *titulo, const char *opciones[], int n);

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void MenuIngreso(){
	int num,  dimension, opcion, **cuadrado;
	char datoEntero[10];
	CuboM *cubo;
	Funciones_Magico *obj;
   bool repite = true;
   std::string op;
   std::string cadena;
   const char *titulo = "Escoja un ingreso";
   const char *opciones[] = {"Cubo Magico","Regresar"};
   int n = 2;  
   do 
   {
      opcion = menu(titulo, opciones, n);
		
		switch(opcion)
		{
			case 1:{
				system("cls");
        		cout<<"\n Dimension de la matriz: "<<endl;
        		dimension=obj->validarEntero();
        		if(dimension%2==0 or dimension == 1 or dimension >100){
        			cout<<"\n La dimension no es validad"<<endl;
        			system("PAUSE");
        			break;
				}
       			cuadrado=(int**)calloc(num,sizeof(int*));
       			if(dimension%2!=0){
				   
					for(int i=0;i<(2*dimension-1);i++){
						*(cuadrado+i)=(int *)calloc((2*dimension-1),sizeof(int));
					}
					cubo= new CuboM(cuadrado);
					obj= new Funciones_Magico(cubo);
					
					num=2*dimension-1;
					obj->suma(dimension);
					obj->llenar(num);
					obj->mostrar(dimension);
				}
        		system("PAUSE");
        		break;
			}							
			case 2:{
				system("cls");
				std::cout<<std::endl;
				std::cout<<"Regresando..."<<std::endl;
				repite=false;
				break;
			}											
		}
	}while(repite);
}

void MenuPrincipal(){

	bool repite = true;
	int opcion;   
   
    const char *titulo = "****Cubo Magico****";
    const char *opciones[] = {"Tablero","Salir del programa"};
    int n =2;  
 
    do {
        opcion = menu(titulo, opciones, n); 	
		switch(opcion){
			case 1:{
				system("cls");
				MenuIngreso();
				break;
			}				
			case 2:{
				std::cout<<std::endl;
				printf("\n\n\n");
				std::cout<<"Saliendo del programa..."<<std::endl;
				repite=false;
				break;
			}										
	}
	printf("\n\n\n");
	system("pause");
	}while(repite);
}

int menu(const char titulo[], const char *opciones[], int n){
   int opcionSeleccionada = 1;  
 
   int tecla;
 
   bool repite = true; 
 
   do {
      system("cls");
      //system("Color 8B");
      gotoxy(5, 3 + opcionSeleccionada); std::cout << "->" << std::endl;
 
      
      gotoxy(15, 2); std::cout << titulo;
 
      
      for (int i = 0; i < n; ++i) {
         gotoxy(10, 4 + i); std::cout <<"["<< i + 1 << "] | " << opciones[i];
      }
 
      
 
      do {
         tecla = getch();
         
      } while (tecla != TECLA_ARRIBA && tecla != TECLA_ABAJO && tecla != TECLA_ENTER);
 
      switch (tecla) {
 
         case TECLA_ARRIBA:   
 
            opcionSeleccionada--;
 
            if (opcionSeleccionada < 1) {
               opcionSeleccionada = n;
            }
 
            break;
 
         case TECLA_ABAJO:
            opcionSeleccionada++;
 
            if (opcionSeleccionada > n) {
               opcionSeleccionada = 1;
            }
 
            break;
 
         case TECLA_ENTER:
            repite = false;
            break;
      }
 
   } while (repite);
 
   return opcionSeleccionada;
}
