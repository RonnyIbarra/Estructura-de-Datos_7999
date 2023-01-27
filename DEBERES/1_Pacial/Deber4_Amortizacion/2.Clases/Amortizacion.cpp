/***********************************************************************
 * UFA - ESPE
 *Module:  Amortizacion.cpp
 * Author:  Ronny Ibarra-Jose Imbaquinga
 * Modified: sábado, 5 de noviembre de 2022 10:24:22
 * Purpose: Implementation of the class Amortizacion
 *Level: level three
 *NRC:799
 ***********************************************************************/

#include "Amortizacion.h"
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>


int Amortizacion::getAnio(void)
{
   return anio;
}



void Amortizacion::setAnio(int newAnio)
{
   anio = newAnio;
}



int Amortizacion::getSaldoInicial(void)
{
   return saldoInicial;
}



void Amortizacion::setSaldoInicial(int newSaldoInicial)
{
   saldoInicial = newSaldoInicial;
}



double Amortizacion::getInteres(void)
{
   return interes;
}



void Amortizacion::setInteres(double newInteres)
{
   interes = newInteres;
}



double Amortizacion::getAmortizacion(void)
{
   return calculo_amortizacion;
}



void Amortizacion::setAmortizacion(double newAmortizacion)
{
   calculo_amortizacion = newAmortizacion;
}


double Amortizacion::getPago(void)
{
   return pago;
}




void Amortizacion::setPago(double newPago)
{
   pago = newPago;
}



double Amortizacion::getSaldoFinal(void)
{
   return saldo_Final;
}



void Amortizacion::setSaldoFinal(double newSaldoFinal)
{
   saldo_Final = newSaldoFinal;
}



int Amortizacion::getDia(void)
{
   return dia;
}



void Amortizacion::setDia(int newDia)
{
   dia = newDia;
}



int Amortizacion::getMes(void)
{
   return mes;
}



void Amortizacion::setMes(int newMes)
{
   mes = newMes;
}



Amortizacion::Amortizacion()
{
}

double Amortizacion::calculoInteres(double saldoFinal, double interes)
{
double pago=saldoFinal*(interes/100);
return pago;
}



double Amortizacion::calculoAmortizacion(double prestamo, double cuotas)
{
	double amor=prestamo/cuotas;
	return amor;
   
}



double Amortizacion::calculoPago(double interes, double amortizacion)
{
   double paga=interes+amortizacion;
   return paga;
}



double Amortizacion::saldoFinal(double saldoInicial, double amortizacion)
{
   double saldo=saldoInicial-amortizacion;
   return saldo;
}



void Amortizacion::feriado(int dia, int mes)
{
	if((dia==01)&&(mes==01)){
		std::cout<<"Es anio nuevo";
		dia=dia+2;
		mes=01;
		std::cout<<"\nEl dia a pagar sera: "<<dia<<mes;
	}
	else if(((dia==28)&&(mes==02))||((dia==01)&&(mes==03))){
		std::cout<<"Es carnaval";
		dia=02;
		mes=03;
	    std::cout<<"\nEl dia a pagar sera: "<<dia<<mes;
	}
	else if((dia==15)&&(mes==04)){
		std::cout<<"Es viernes santo";
		dia=dia+3;
		mes=04;
		std::cout<<"\nEl dia a pagar sera: "<<dia<<mes;
	}
	else if((dia==01)&&(mes==05)){
		std::cout<<"Es dia del trabajo";
		dia=dia+1;
		mes=05;
		std::cout<<"\nEl dia a pagar sera: "<<dia<<mes;
	}
	else if((dia==27)&&(mes==05)){
		std::cout<<"Es la batalla de pichincha";
		dia=dia+3;
		mes=05;
		std::cout<<"\nEl dia a pagar sera: "<<dia<<mes;
	}
		else if((dia==12)&&(mes==8)){
		std::cout<<"Es el primer grito de independencia";
		dia=dia+3;
		mes=8;
		std::cout<<"\nEl dia a pagar sera: "<<dia<<mes;
	}
		else if((dia==9)&&(mes==10)){
		std::cout<<"Es la independencia de guayaquil";
		dia=dia+1;
		mes=10;
		std::cout<<"\nEl dia a pagar sera: "<<dia<<mes;
}
        else if((dia==02)&&(mes==11)){
		std::cout<<"Es el dia de los difuntos";
		dia=dia+2;
		mes=11;
		std::cout<<"\nEl dia a pagar sera: "<<dia<<mes;
	}
	 else if((dia==03)&&(mes==11)){
		std::cout<<"Es la independencia de cuenca";
		dia=dia+1;
		mes=11;
		std::cout<<"\nEl dia a pagar sera: "<<dia<<mes;
	}
	else if((dia==25)&&(mes==12)){
		std::cout<<"Es navidad";
		dia=dia+1;
		mes=12;
		std::cout<<"\nEl dia a pagar sera: "<<dia<<mes;
	}
	
	

}