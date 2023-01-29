/*********
UFA - ESPE
AUTORES: Carlos Campoverde, Ronny Ibarra, José Imbaquinga, Alexander Bedón, César Loor, Josué Villavicencio, Samir Mideros.
FECHA DE CREACIÓN: 20/12/2022
FECHA DE MODIFICACIÓN: 20/12/2022 
GITHUB: Grupo-5-Estructura-de-datos-7999
 *********/
#include"LecturaDatos.h"

class ValidacionDatos:public LecturaDatos
{
	public:
		char* lecturaEnteros(char const *msj) override;
		char* lecturaReales(char const *msj) override;
		char* lecturaTexto(char const *msj) override;
		char* lecturaTextoNumerico(char const *msj) override;
		int casteoEnteros(char* dato,char const *msj);
		double casteoReales(char* dato, char const *msj);
		
		
};
