#include "Datos.h"

namespace Octavio
{

int Datos::anchoPantalla = 1024;
int Datos::altoPantalla = 768;
int Datos::anchoDeTileAgua = 128;
int Datos::zDelAgua = 5;
int Datos::tilesExtra = 2;

int Datos::getAnchoPantalla()
{
	return anchoPantalla;
}

int Datos::getAltoPantalla()
{
	return altoPantalla;
}
int Datos::getAnchoDeTitleAgua()
{
	return anchoDeTileAgua;
}

int Datos::getZDelAgua()
{
	return zDelAgua;
}

int Datos::getTilesExtra()
{
	return tilesExtra;
}

}