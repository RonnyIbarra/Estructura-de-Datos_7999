/***********************************************************************
 * UFA-ESPE
 * Module:  Datos.cpp
 * Author:  Ronny Ibarra - Jose Imbaquinga
 * Modified: domingo, 30 de octubre de 2022 22:49:22
 * Purpose: Implementation of the class Datos
 * Level: level three
 * NRC: 7999
 ***********************************************************************/

#if !defined(__Clase_Abstracta_Datos_h)
#define __Clase_Abstracta_Datos_h
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

using namespace std;

class Datos
{
public:
   float getFloat(void);
   void setFloat(float newFloat);
   double getDouble(void);
   void setDouble(double newDouble);
   char getChar(void);
   void setChar(char newChar);
   Datos();
   ~Datos();
   char ingresar_float(char dato);
   char ingresar_double(char dato);
   char ingreso_char(char dato);

protected:
private:
   float Float;
   double Double;
   char Char;
   char Dato;


};

#endif