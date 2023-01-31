/***********************************************************************
 * Module:  Arfil.cpp
 * Author:  ronny ibarra,jose imbaquinga
 * Modified: domingo,29 de enero de 2023 17:46:51
 ***********************************************************************/
#include "Reina.h"
#include "Alfil.cpp"


//getters y setters

void Reina::setValidar(bool **validar)
{
    this->validar = validar;
}
void Reina::setTablero(char **tablero)
{
    this->tablero = tablero;
}
void Reina::setContador(int contador)
{
    this->contador = contador;
}
void Reina::setN(int n)
{
    this->n = n;
}
void Reina::setArchivo(std::fstream& archivo)
{
    this->archivo = &archivo;
}
fstream* Reina::getArchivo()
{
    return archivo;
}

bool **Reina::getValidar()
{
    return validar;
}
char **Reina::getTablero()
{
    return tablero;
}
int Reina::getContador()
{
    return contador;
}

int Reina::getN()
{
    return n;
}




Reina::Reina(int n1)
{
    n = n1;
    Alfilfunciones funciones;
    validar = new bool *[n];
    tablero = new char *[n];

}
Reina::~Reina()
{
}

Reina::Reina(){

}
