/*********
UFA - ESPE
AUTORES: Carlos Campoverde, Ronny Ibarra, José Imbaquinga, Alexander Bedón, César Loor, Josué Villavicencio, Samir Mideros.
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 20/12/2022 
GITHUB: Grupo-5-Estructura-de-datos-7999
 *********/

#if !defined(__Class_Diagram_1_Fecha_h)
#define __Class_Diagram_1_Fecha_h

class Fecha
{
public:
   Fecha(short d,short m, short a);
   Fecha();
   ~Fecha();
   short getDia(void);
   void setDia(short newDia);
   short getMes(void);
   void setMes(short newMes);
   short getAnio(void);
   void setAnio(short newAnio);
   int validarFecha(int dia,int mes,int anio);
   bool validarAnio(int anio);
   void ingresarFecha();
   
protected:
private:
   short m_dia;
   short m_mes;
   short m_anio;
   

};

#endif
