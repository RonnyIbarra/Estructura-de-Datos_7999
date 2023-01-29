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
//#include "FuncionesLista.h"
using namespace std;
template <typename T> 
class Cola{
public:
   Cola();
   ~Cola();
    
    void push(T objT);
    void pop();
	void mostrarPorCabeza();
	//void buscar(int);
	bool getListaVacia();
    NodoSimple<T> *getPrimero(void);
    void setPrimero(NodoSimple<T> *newPrimero);
    NodoSimple<T> *getActual(void);
    void setActual(NodoSimple<T> *newActual);
    int getNumNodos();


protected:
private:
   NodoSimple<T> *primero;
   NodoSimple<T> *actual;
   int numNodos;

};

#endif
