/***********************************************************************
 * Module:  Matriz.cpp
 * Author:  Ronny Ibarra-Jose Imbaquinga
 * Modified: jueves, 10 de noviembre de 2022 24:28:50
 * Purpose: Implementation of the class Matriz
 ***********************************************************************/

#if !defined(__Matriz2_Matriz_h)
#define __Matriz2_Matriz_h

class Matriz
{
public:
   int getSuma(void);
   void setSuma(int newSuma);
   int getMultiplicacion(void);
   void setMultiplicacion(int newMultiplicacion);
   Matriz();
   ~Matriz();
   char* doubleAndFloatImput(char const *msj);
	double validarDouble();
   void encerrar(int *vector, int t1, int t2);
   void calculoSuma(int *vector,int *vector2,int *vector3, int t1, int t2);
   void calculoMultiplicacion(int *vector,int *vector2, int *vector3, int t1, int t2);
   int imprimirSuma(int vector, int t1, int t2);
   int imprimirMultiplicacion(int vector, int t1, int t2);
   void encerrarMatriz(int *vector2, int t1, int t2);
   int getMultiplicaci(void);
   void validar1(int *vector,int t1,int t2);
   void validar2(int *vector2,int t1,int t2);



protected:
private:
   int suma;
   int multiplicacion;


};

#endif