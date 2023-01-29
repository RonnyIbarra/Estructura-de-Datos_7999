/*********
UFA - ESPE
AUTORES: Carlos Campoverde, Ronny Ibarra, José Imbaquinga, Alexander Bedón, César Loor, Josué Villavicencio, Samir Mideros.
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 20/12/2022 
GITHUB: Grupo-5-Estructura-de-datos-7999
 *********/
#if !defined(__Class_Diagram_1_Interface_Persona_h)
#define __Class_Diagram_1_Interface_Persona_h

class Interface_Persona
{
public:
   virtual float calcularTSalidaTEntrada(int TEntrada, int TSalida)=0;
   virtual float tiempoSalida(int tiempoLlegada, int tiempoEspera, int tiempoServicio)=0;
   virtual float tiempoEntreLlegada(int tiempoLLegadaActual, int tiempoLlegadaAnterior)=0;
   virtual int generarTiempoRandom(int anterior)=0;
   virtual float timpoCajero(int tiempoLlegada, int tiempoSalida)=0;

protected:
private:

};

#endif
