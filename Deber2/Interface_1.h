/***********************************************************************
 * UFA-ESPE
 * Module:  Datos.cpp
 * Author:  Ronny Ibarra - Jose Imbaquinga
 * Modified: domingo, 30 de octubre de 2022 22:49:22
 * Purpose: Implementation of the class Datos
 * Level: level three
 * NRC: 7999
 ***********************************************************************/

#if !defined(__Clase_Abstracta_Interface_1_h)
#define __Clase_Abstracta_Interface_1_h
#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

using namespace std;

class Interface_1
{
public:
   virtual char ingreso_float(void)=0;
   virtual char ingreso_double(void)=0;
   virtual char ingreso_char(void)=0;

protected:
private:

};

#endif