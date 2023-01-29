/*********
UFA - ESPE
AUTORES: Carlos Campoverde, Ronny Ibarra, José Imbaquinga, Alexander Bedón, César Loor, Josué Villavicencio, Samir Mideros.
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 20/12/2022 
GITHUB: Grupo-5-Estructura-de-datos-7999
 *********/

#if !defined(__Class_Diagram_1_NodoSimple_h)
#define __Class_Diagram_1_NodoSimple_h

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include "Persona.cpp"
#pragma once
class NodoSimple
{
public:
   NodoSimple(Persona *objP, NodoSimple *);
   ~NodoSimple();
   NodoSimple *getSiguiente(void);
   void setSiguiente(NodoSimple *newSiguiente);
   Persona* getObjP(void);
   void setObjP(Persona *newObjP);

protected:
private:
   NodoSimple *siguiente;
   Persona *objP;


};

#endif