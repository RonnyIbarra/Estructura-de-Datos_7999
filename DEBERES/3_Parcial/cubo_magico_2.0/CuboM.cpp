/***********************************************************************
 * UFA - ESPE
 * Students:  Ronny Ibarra - José Imbaquinga
 * Module:  CuboM.cpp
 * Created: jueves, 02 de febrero de 2023 19:00:40
 * Modified: jueves, 03 de febrero de 2023 2:02:48
 * Problem: Cúbo Mágico
 * Level: Level three
 * NRC: 7999
 ***********************************************************************/
#pragma once
#include "Cubo_M.h"



int** CuboM::getCuadrado(void)
{
   return cuadrado;
}



void CuboM::setCuadrado(int** newCuadrado)
{
   cuadrado = newCuadrado;
}



CuboM::CuboM(int** a)
{
   this->cuadrado=a;
}



CuboM::~CuboM()
{
   // TODO : implement
}
