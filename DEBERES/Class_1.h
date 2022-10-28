/***********************************************************************
 * UFA - ESPE
 * Students:  Ronny Ibarra - José Imbaquinga
 * Module:  Class_1.cpp
 * Created: jueves, 27 de octubre de 2022 19:00:40
 * Modified: jueves, 28 de octubre de 2022 2:02:48
 * Problem: Calcular la edad de una persona
 * Level: Level three
 * NRC: 7999
 ***********************************************************************/

#if !defined(__Persona2_Class_1_h)
#define __Persona2_Class_1_h
#include <cstring>
#include <iostream>

using namespace std;
class Class_1
{
public:
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   int getAnio_nacimineto(void);
   void setAnio_nacimineto(int newAnio_nacimineto);
   Class_1();
   int calcularEdad(void);
   void imprimirEdad(void);

protected:
private:
   std::string nombre;
   std::string apellido;
   int anio_nacimineto;


};

#endif