/*********
UFA - ESPE
AUTORES: Carlos Campoverde, Ronny Ibarra, José Imbaquinga, Alexander Bedón, César Loor, Josué Villavicencio, Samir Mideros.
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 20/12/2022 
GITHUB: Grupo-5-Estructura-de-datos-7999
 *********/


#if !defined(__Class_Diagram_1_NominaSimple_h)
#define __Class_Diagram_1_NominaSimple_h

#include "NodoSimple.cpp"
#include "Persona.cpp"
//#include "FuncionesLista.h"
using namespace std;
template <typename T> 
class Cola{
public:
   Cola();
   ~Cola();
    
    void push(Persona *persona);
    void pop();
	void mostrar();
	//void buscar(int);
	bool getListaVacia();
    NodoSimple *getPrimero(void);
    void setPrimero(NodoSimple *newPrimero);
    NodoSimple *getActual(void);
    void setActual(NodoSimple *newActual);
    int getNumNodos();
    void toString();
    void mostrarTabla(Persona *p);

protected:
private:
   NodoSimple *primero;
   NodoSimple *actual;
   int numNodos;

};

#endif
