/*********
UFA - ESPE
AUTORES: Carlos Campoverde, Ronny Ibarra, José Imbaquinga, Alexander Bedón, César Loor, Josué Villavicencio, Samir Mideros.
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 20/12/2022 
GITHUB: Grupo-5-Estructura-de-datos-7999
 *********/

#include "Persona.h"
#include "validar.h"
#include "ValidarDatos.h"
#pragma once
Persona::Persona(std::string ced,std::string nom,std::string apell,Fecha *eda)
{
	this->cedula=ced;
	this->fecha=eda;
	this->nombre=nom;
	this->apellido=apell;
}


Persona::~Persona()
{
   // TODO : implement
}


std::string Persona::getCedula(void)
{
   return cedula;
}


void Persona::setCedula(std::string newCedula)
{
   cedula = newCedula;
}


std::string Persona::getNombre(void)
{
   return nombre;
}


void Persona::setNombre(std::string newNombre)
{
   nombre = newNombre;
}


std::string Persona::getApellido(void)
{
   return apellido;
}



void Persona::setApellido(std::string newApellido)
{
   apellido = newApellido;
}


Fecha* Persona::getFecha(void)
{
   return fecha;
}


void Persona::setFecha(Fecha *newFecha)
{
   fecha = newFecha;
}

short Persona::calcularEdad(void){

	time_t t = time(NULL);
    tm* timePtr = localtime(&t);
	int edad{};
  	int year = timePtr->tm_year + 1900;
	int month = timePtr->tm_mon;
	int day = timePtr->tm_mday;
	cout<<"\n";
	if(month > fecha->getMes()){
		edad = year - fecha->getAnio();
	}else if(month == fecha->getMes()){
		if(day >= fecha->getDia()){
			edad = year - fecha->getAnio();
		}else{
			edad = year - fecha->getAnio();
			--edad;
		}
	}else{
		edad = year - fecha->getAnio();
		--edad;
	}
    return edad; 
}

float Persona::calcularTSalidaTEntrada(int TEntrada, int TSalida){
   		if( TEntrada>TSalida) return TEntrada-TEntrada;
   		else return TSalida-TEntrada;
   }
float Persona::tiempoSalida(int tiempoLlegada, int tiempoEspera, int tiempoServicio){
   		return tiempoLlegada+tiempoEspera+tiempoServicio;
   }
float Persona::tiempoEntreLlegada(int tiempoLLegadaActual, int tiempoLlegadaAnterior){
   		return tiempoLlegadaAnterior-tiempoLLegadaActual;
   }
float Persona::timpoCajero(int tiempoLlegada, int tiempoSalida){
   	if(tiempoLlegada>tiempoSalida) return tiempoLlegada-tiempoSalida;
   	else return  tiempoSalida-tiempoSalida;
   }
int Persona::generarTiempoRandom( int anterior){
   	 return rand()%(15);
   }

string Persona::toString(){
	stringstream abc;	
	abc<<"\n-------------------------------------"<<endl;
	abc<<"\nNombre           \t\t"<<nombre<<endl;
	abc<<"\nApellido         \t\t"<<apellido<<endl;
	abc<<"Cedula             \t\t"<<cedula<<endl;
   return abc.str();
}
