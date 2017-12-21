#include "Datos.h"

namespace Octavio
{

int Datos::anchoPantalla = 1024;
int Datos::altoPantalla = 768;
int Datos::anchoDeTileAgua = 128;
int Datos::zDelAgua = 5;
int Datos::tilesExtra = 2;
int Datos::maxAltoSprite = 64;
int Datos::maxAnchoSprite = 128;
int Datos::cantidadDeCadaBarco = 17;
int Datos::zDeBarcos = 3;
int Datos::zDelJugador = 2;
int Datos::disparosBarco = 8;
int Datos::disparosBarcoDoble = 6;
int Datos::disparosBarcoCuatro = 4;

float Datos::velocidad = 0.05;
float Datos::tiempoEntreBarcos = 2;

sf::Clock Datos::timerJuego = sf::Clock();

int Datos::getAnchoPantalla()
{
	return anchoPantalla;
}

int Datos::getAltoPantalla()
{
	return altoPantalla;
}
int Datos::getAnchoDeTileAgua()
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

int Datos::getMaxAltoSprite()
{
	return maxAltoSprite;
}

int Datos::getMaxAnchoSprite()
{
	return maxAnchoSprite;
}

int Datos::getCantidadBarcos()
{
	return cantidadDeCadaBarco;
}

float Datos::getVelocidad()
{
	return velocidad;
}

float Datos::getTiempoEntreBarcos()
{
	return tiempoEntreBarcos;
}

int Datos::getZDeBarcos()
{
	return zDeBarcos;
}

int Datos::getZDelJugador()
{
	return zDelJugador;
}

int Datos::getDisparosBarco()
{
	return disparosBarco;
}

int Datos::getDisparosBarcoDoble()
{
	return disparosBarcoDoble;
}

int Datos::getDisparosBarcoCuatro()
{
	return disparosBarcoCuatro;
}

}