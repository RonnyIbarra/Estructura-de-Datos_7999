/***********************************************************************
 *UFA - ESPE
 *Module:  Sobrecarga.cpp
 * Author:  Ronny Ibarra
 * Modified: martes, 1 de noviembre de 2022 17:28:32
 * Purpose: Implementation of the class Sobrecarga
 *Level: level three
 *NRC:7999
 ***********************************************************************/
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <iostream>
#include "Sobrecarga.cpp"

using namespace std;

int main(){     //x1,y1
                //x2,y2
	Sobrecarga M(10,7);
	Sobrecarga N(10,7);
    //Sobrecarga S= M && N;
    Sobrecarga S= M || N;
	cout<<"S:"<<S.getM()<<","<<S.getN();
	
	
	
}