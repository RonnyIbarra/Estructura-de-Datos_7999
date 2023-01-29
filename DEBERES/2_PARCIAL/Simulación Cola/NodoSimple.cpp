/*********
UFA - ESPE
AUTORES: Carlos Campoverde, Ronny Ibarra, José Imbaquinga, Alexander Bedón, César Loor, Josué Villavicencio, Samir Mideros.
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 20/12/2022 
GITHUB: Grupo-5-Estructura-de-datos-7999
 *********/

#include "NodoSimple.h"


NodoSimple::NodoSimple(Persona *objP, NodoSimple *sig)
{
	this->objP=objP;
	this->siguiente=sig;
	
}


/**
 * NodoSimple::~NodoSimple()
 */

NodoSimple::~NodoSimple()
{
   // TODO : implement
}


/**
 * *|CURSOR_MARCADOR|*
 * 
 * @return El puntero al siguiente nodo.
 */

NodoSimple *NodoSimple::getSiguiente(void)
{
   return siguiente;
}


/**
 * *|CURSOR_MARCADOR|*
 * 
 * @param newSiguiente El nuevo nodo que serÃ¡ el siguiente nodo en la lista.
 */

void NodoSimple::setSiguiente(NodoSimple *newSiguiente)
{
   siguiente = newSiguiente;
}


/**
 * *|CURSOR_MARCADOR|*
 * 
 * @return Se estÃ¡ devolviendo el objeto empleado.
 */

Persona *NodoSimple::getObjP(void)
{
	
   return objP;
}


/**
 * Establece el valor de la variable empleado al valor de la variable newObjEmpleado.
 * 
 * @param newObjEmpleado es un puntero a un objeto de tipo Empleado
 */

void NodoSimple::setObjP(Persona  *newObjP)
{
   objP = newObjP;
}
