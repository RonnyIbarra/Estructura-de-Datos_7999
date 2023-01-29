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


#include "Class_1.h"
#include<iostream>
#include <string.h>



std::string Class_1::getNombre(void)
{
   return nombre;
}



void Class_1::setNombre(std::string newNombre)
{
   nombre = newNombre;
}



std::string Class_1::getApellido(void)
{
   return apellido;
}



void Class_1::setApellido(std::string newApellido)
{
   apellido = newApellido;
}



int Class_1::getAnio_nacimineto(void)
{
   return anio_nacimineto;
}



void Class_1::setAnio_nacimineto(int newAnio_nacimineto)
{
   anio_nacimineto = newAnio_nacimineto;
}



Class_1::Class_1()
{
	
}


int Class_1::calcularEdad(void)
{
	int anio_actual;
	string nombre;
	string apellido;
	int anio;
	int edad;
	
	
   cout<<"Ingrese el nombre"<<endl;
   cin>>nombre;
   cout<<"Ingrese el Apellido"<<endl;
   cin>>apellido;
   cout<<"Ingrese su anio de nacimineto"<<endl;
   cin>>anio;
   cout<<"Ingrese el anio actual"<<endl;
   cin>>anio_actual;
   
   if(anio<anio_actual){
   	edad=anio_actual-anio;
   	}
   	else{
   		cout<<"No se puede calcular"<<endl;
	   }
	   
	   setNombre(nombre);
	   setApellido(apellido);
	   setAnio_nacimineto(anio);
	   cout<<edad;
	   return edad;
}




void Class_1::imprimirEdad(void)
{
   
}