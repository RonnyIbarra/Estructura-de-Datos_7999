/*********
UFA - ESPE
AUTORES: Carlos Campoverde, Ronny Ibarra, José Imbaquinga, Alexander Bedón, César Loor, Josué Villavicencio, Samir Mideros.
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 20/12/2022 
GITHUB: Grupo-5-Estructura-de-datos-7999
 *********/
 #include <iostream>
#include <cstdlib>
#include <conio.h>

#include <windows.h>
using namespace std;
class Menu{
	public:
		void menuPrincipal();
		int menu(const char *titulo,const char *opciones[],int n);
		void gotoxy(int x,int y);
		//int validarCedula(char *cedulaC);
		static bool verificarCedula(const string &cedula);
};
