/***********************************************************************
 * Module:  Tablero.h
 * Author:  ronny
 * Modified: jueves, 26 de enero de 2023 17:41:51
 * Purpose: Declaration of the class Tablero
 ***********************************************************************/

#if !defined(__Tablero2_Tablero_h)
#define __Tablero2_Tablero_h

class Tablero
{
public:
   int getInsertar(void);
   void setInsertar(int newInsertar);
   Tablero();
   void insertarTabla();
   

protected:
private:
   int insertar;


};

#endif