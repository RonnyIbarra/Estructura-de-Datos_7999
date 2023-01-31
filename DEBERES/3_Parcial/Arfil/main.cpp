/***********************************************************************
 * Module:  Arfil.cpp
 * Author:  ronny ibarra,jose imbaquinga
 * Modified: domingo,29 de enero de 2023 17:46:51
 ***********************************************************************/
#include "Reina.cpp"
int main(int argc, char** argv) {
	int n;
	cout<<"\tIngrese el numero de Alfiles"<<endl;
	cin>>n;
	Reina *obj=new Reina(n);
	Alfilfunciones *funciones = new Alfilfunciones(*obj);
	    
    funciones->encerarTablero();
	
    funciones->crearArchivo();
	
	funciones->solucionReinas();
	
	return 0;
}