/***********************************************************************
 *UFA - ESPE
 *Module:  Sobrecarga.cpp
 * Author:  Ronny Ibarra, Ricardo Imbaquinga
 * Modified: martes, 1 de noviembre de 2022 17:28:32
 * Purpose: Implementation of the class Sobrecarga
 *Level: level three
 *NRC:7999
 ***********************************************************************/

#include "Sobrecarga.h"



int Sobrecarga::getN(void)
{
   return n;
}



void Sobrecarga::setN(int newN)
{
   n = newN;
}



int Sobrecarga::getM(void)
{
   return m;
}

//

void Sobrecarga::setM(int newM)
{
   m = newM;
}



Sobrecarga::Sobrecarga(const int n, const int m)
{
	this->m=m;
	this->n=n;
}

Sobrecarga Sobrecarga::operator&&(const Sobrecarga& other)const
{
   Sobrecarga igualdad(m>=10 && other.m>=10,n>=10 && other.n>=10);
   return igualdad;
}


Sobrecarga Sobrecarga::operator||(const Sobrecarga& other)const
{
	Sobrecarga igualdad(m>=10 || other.m>=10,n>=10 || other.n>=10);
    return igualdad;
}
