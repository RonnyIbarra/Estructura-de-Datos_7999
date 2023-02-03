/***********************************************************************
 * UFA - ESPE
 * Students:  Ronny Ibarra - José Imbaquinga
 * Module:  Funciones_Magico.h
 * Created: jueves, 02 de febrero de 2023 19:00:40
 * Modified: jueves, 03 de febrero de 2023 2:02:48
 * Problem: Cúbo Mágico
 * Level: Level three
 * NRC: 7999
 ***********************************************************************/
#include "CuboM.cpp"
#include "Cubo.h"
 class Funciones_Magico:public Cubo{
 	public:
 		CuboM *cubo;
 		Funciones_Magico(CuboM *cub){
 			this->cubo=cub;
		 }
		void mostrar(int);
		void llenar(int);
		void suma(int);
		char* validarEnteros(char const *msj);
   double validarEntero();
		
 };
