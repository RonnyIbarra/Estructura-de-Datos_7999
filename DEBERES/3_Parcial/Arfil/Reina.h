/***********************************************************************
 * Module:  Arfil.cpp
 * Author:  ronny ibarra,jose imbaquinga
 * Modified: domingo,29 de enero de 2023 17:46:51
 ***********************************************************************/
#if !defined(Reina_h)
#define Reina_h
#include <iostream>
#include <fstream>

using namespace std;
class Reina
{
public:
    //getter y setter
    bool **getValidar();
    char **getTablero();
    int getContador();
    int getN();
    void setValidar(bool **validar);
    void setTablero(char **tablero);
    void setContador(int contador);
    void setN(int n);
    void setArchivo(std::fstream& archivo);
    std::fstream* getArchivo();


    Reina(int n1);
    Reina();
    ~Reina();

private:
    bool **validar;
    char **tablero;
    fstream* archivo;
    int contador;
    int n;
};
#endif