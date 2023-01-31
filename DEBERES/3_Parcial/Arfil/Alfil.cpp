/***********************************************************************
 * Module:  Arfil.cpp
 * Author:  ronny ibarra,jose imbaquinga
 * Modified: domingo,29 de enero de 2023 17:46:51
 ***********************************************************************/
#include "Alfil.h"
#include "Reina.h"

class Alfilfunciones : funciones
{
private:
    Reina *reina;

public:
    fstream archivo;
    
    Alfilfunciones() {}
    
    ~Alfilfunciones()
    {
    }
    
    Alfilfunciones(Reina &newReina)
    {
        this->reina = &newReina;
        
    }
    

      Reina getReina()
    {
        return *reina;
    }

    void setReina(Reina &newReina)
    {
        this->reina = &newReina;
    }

   
    void encerarTablero() override
    {
        for (int i = 0; i < reina->getN(); i++)
        {
            reina->getValidar()[i] = new bool[reina->getN()];
            reina->getTablero()[i] = new char[reina->getN()];

            for (int j = 0; j < reina->getN(); j++)
            {
                *(*(reina->getValidar() + i) + j) = false;
                *(*(reina->getTablero() + i) + j) = '*';
            }
        }
    }
    void crearArchivo() override
    {

        archivo.open("exaustivo.txt", fstream::out);
        archivo << "solucion" << reina->getN() << "*" << reina->getN() << endl
                << endl;
        reina->setContador(0);
    }

    void bloquear(int x, int y) override
    {
        int aux1, aux2;
        aux2 = y; 
        aux1 = x;
        while (aux1 > 0 && aux2 > 0)
        {
            aux1--;
            aux2--;
        }
        aux2 = y;
        aux1 = x;
        while (aux1 < reina->getN() && aux2 > 0)
        {
            aux1++;
            aux2--;
        }
        aux1--;
        aux2++;
        while (aux1 >= 0 && aux2 < reina->getN())
        {
            *(*(reina->getValidar() + aux1) + aux2) = true;
            aux1--;
            aux2++;
        }
    }
    void mostrar() override
    {
        int contador;
        contador = reina->getContador();
        contador++;
        reina->setContador(contador);

        archivo << "solucion N " << contador << endl;

        cout << endl;
        for (int i = 0; i < reina->getN(); i++)
        {
            for (int j = 0; j < reina->getN(); j++)
            {
                archivo << *(*(reina->getTablero() + i) + j) << " ";
                cout << *(*(reina->getTablero() + i) + j) << " ";
            }
            archivo << endl;
            cout << endl;
        }
        archivo << endl;
        cout << endl;
    }
    void quitarRelleno(int x, int y) override
    {
        *(*(reina->getTablero() + x) + y) = '*';

        for (int i = 0; i < reina->getN(); i++)
        {
            for (int j = 0; j < reina->getN(); j++)
            {
                *(*(reina->getValidar() + i) + j) = false;
            }
        }
        for (int i = 0; i < reina->getN(); i++)
        {
            for (int j = 0; j < reina->getN(); j++)
            {
                if (*(*(reina->getTablero() + i) + j) == 'R')
                    bloquear(i, j);
            }
        }
    }

    void solucion(int x, int y, int n1) override
    {
        int n = reina->getN();

        *(*(reina->getTablero() + x) + y) = 'A';

        bloquear(x, y);

        if (n1 == n)
        {
            mostrar();
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (*(*(reina->getValidar() + i) + y + 1) == false)
                {
                    solucion(i, y + 1, n1 + 1);
                }
            }
        }

        quitarRelleno(x, y);
    }
    void solucionReinas() override
    {

        for (int i = 0; i < reina->getN(); i++)
        {
            solucion(i, 0, 1);
        }

        archivo.close();
    }
};
