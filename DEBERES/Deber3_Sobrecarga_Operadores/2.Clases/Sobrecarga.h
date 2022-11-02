/***********************************************************************
 *UFA - ESPE
 *Module:  Sobrecarga.cpp
 * Author:  Ronny Ibarra
 * Modified: martes, 1 de noviembre de 2022 17:28:32
 * Purpose: Implementation of the class Sobrecarga
 *Level: level three
 *NRC:7999
 ***********************************************************************/

#if !defined(__Sobrecarga_Operadores2_Sobrecarga_h)
#define __Sobrecarga_Operadores2_Sobrecarga_h

class Sobrecarga
{
public:
   int getN(void);
   void setN(int newN);
   int getM(void);
   void setM(int newM);
   Sobrecarga(const int n, const int m);
   Sobrecarga operator &&(const Sobrecarga& other)const;
   Sobrecarga operator ||(const Sobrecarga& other)const;

protected:
private:
   int n;
   int m;


};

#endif