/***********************************************************************
 * UFA - ESPE
 * Students:  Ronny Ibarra - José Imbaquinga
 * Module:  Cubo_M.h
 * Created: jueves, 02 de febrero de 2023 19:00:40
 * Modified: jueves, 03 de febrero de 2023 2:02:48
 * Problem: Cúbo Mágico
 * Level: Level three
 * NRC: 7999
 ***********************************************************************/
#pragma once
#if !defined(__Cubo_Magico_CuboMagico_h)
#define __Cubo_Magico_CuboMagico_h

class CuboM
{
public:
   int** getCuadrado(void);
   void setCuadrado(int** newCuadrado);
   CuboM(int** a);
   ~CuboM();

protected:
private:
   int** cuadrado;


};

#endif