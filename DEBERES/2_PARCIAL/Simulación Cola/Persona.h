/*********
UFA - ESPE
AUTORES: Carlos Campoverde, Ronny Ibarra, José Imbaquinga, Alexander Bedón, César Loor, Josué Villavicencio, Samir Mideros.
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 20/12/2022 
GITHUB: Grupo-5-Estructura-de-datos-7999
 *********/

#if !defined(__Class_Diagram_1_Persona_h)
#define __Class_Diagram_1_Persona_h

#include "Interface_Persona.h"
#include "Fecha.cpp"
#include <string>
#include <stdlib.h>
#pragma once
class Persona : public Interface_Persona
{
public:
   Persona(std::string ced,std::string nom,std::string apell,Fecha *eda);
   ~Persona();
   std::string getCedula(void);
   void setCedula(std::string newCedula);
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   Fecha* getFecha(void);
   void setFecha(Fecha *newFecha);
   short calcularEdad(void);
  // void ingresoDatos(Persona *obj);
   //Tiempo de espera
   float calcularTSalidaTEntrada(int TEntrada, int TSalida);
   float tiempoSalida(int tiempoLlegada, int tiempoEspera, int tiempoServicio);
   float tiempoEntreLlegada(int tiempoLLegadaActual, int tiempoLlegadaAnterior);
   float generarTiempoRandom(int min, int max);
   float timpoCajero(int tiempoLlegada, int tiempoSalida);
   int generarTiempoRandom(int anterior);
   string toString();

protected:
private:
   std::string cedula;
   std::string nombre;
   std::string apellido;
   Fecha *fecha;

};

#endif
