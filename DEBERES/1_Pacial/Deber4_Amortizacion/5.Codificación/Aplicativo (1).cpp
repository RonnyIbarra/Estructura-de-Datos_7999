/***********************************************************************
 * UFA - ESPE
 *Module:  Amortizacion.cpp
 * Author:  Ronny Ibarra-Jose Imbaquinga
 * Modified: sábado, 5 de noviembre de 2022 10:24:22
 * Purpose: Implementation of the class Amortizacion
 *Level: level three
 *NRC:799
 ***********************************************************************/
 
#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Amortizacion.cpp"

using namespace std;
int main(int argc, char** argv){
	double interes,cuotas,saldoInicial,prestamo;
	cout<< "----------------------------------------------------" << endl;
    cout<< "TABLA DE AMORTIZACION"                                << endl;
    cout<< "----------------------------------------------------\n" << endl;
   	Amortizacion amor =  Amortizacion();
	cout <<"Ingrese la cantidad del saldo inicial: ";cin>>saldoInicial;
	cout <<"Ingrese la cantidad del interes "; cin >>interes;
	amor.setInteres(amor.calculoInteres(saldoInicial,interes));
	cout<<"El interes es: "<<amor.getInteres();
	cout <<"\nIngrese el numero de cuotas(meses) "; cin >>cuotas;
	amor.setAmortizacion(amor.calculoAmortizacion(saldoInicial,cuotas));
	cout<<"La amortizacion es: "<<amor.getAmortizacion();
	amor.setPago(amor.calculoPago(amor.getInteres(),amor.getAmortizacion()));
	cout<<"\nEl pago es : "<<amor.getPago();
	amor.setSaldoFinal(amor.saldoFinal(saldoInicial,amor.getAmortizacion()));
	cout<<"\nEl saldo final es : "<<amor.getSaldoFinal();
	
	
	
	
	
	
}