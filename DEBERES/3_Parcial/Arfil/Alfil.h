/***********************************************************************
 * Module:  Arfil.cpp
 * Author:  ronny ibarra,jose imbaquinga
 * Modified: domingo,29 de enero de 2023 17:46:51
 ***********************************************************************/
class funciones
{
private:
    
public:
    virtual void encerarTablero()=0;
    virtual void crearArchivo()=0;
    virtual void bloquear(int x, int y)=0;
    virtual void mostrar()=0;
    virtual void quitarRelleno(int x, int y)=0;
    virtual void solucion(int x, int y, int n1)=0;
    virtual void solucionReinas()=0;
};

