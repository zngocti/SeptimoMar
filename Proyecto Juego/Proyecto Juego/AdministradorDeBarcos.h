#ifndef ADMINISTRADORDEBARCOS_H
#define ADMINISTRADORDEBARCOS_H

#include <ctime>

#include "Barco.h"
#include "BarcoDoble.h"
#include "BarcoCuatro.h"

#include "Lista.cpp"
#include "Datos.h"
#include "Assets.h"

#include "AbiertoCerrado.h"
#include "ArribaAbajo.h"
#include "CentroVolver.h"

#include "Escena.h"

namespace Octavio
{

class AdministradorDeBarcos
{
private:
	static AdministradorDeBarcos* elAdministradorDeBarcos;
	static int numeroWave;

	Lista<Barco*> listaDeBarcos;
	Lista<BarcoDoble*> listaDeBarcosDobles;
	Lista<BarcoCuatro*> listaDeBarcosCuatro;

	sf::Texture* barco;
	sf::Texture* barcoDoble1;
	sf::Texture* barcoDoble2;
	sf::Texture* barcoCuatro1;
	sf::Texture* barcoCuatro2;
	sf::Texture* barcoCuatro3;

	sf::Font* miFuente;
	sf::Text* textoResistencia;
	sf::Text* textoDisparos;
	sf::Text* textoPuntos;
	sf::Text* textoPuntosMax;
	sf::Text* textoPuntosGameOver;

	AdministradorDeBarcos();

	bool preparandoW1;
	bool preparandoW2;
	bool preparandoW3;

	bool posicionandoW1;
	bool posicionandoW2;
	bool posicionandoW3;
	
	int contador1;
	int contador2;
	int contador3;

	sf::Time tiempo1;
	sf::Time tiempo2;
	sf::Time tiempo3;

	void setBarco(Barco* const &miBarco, int num);
	void posicionInicial(Barco* const &miBarco);

	Barco* barcoDelJugador;

public:
	~AdministradorDeBarcos();

	static AdministradorDeBarcos* crearAdministradorDeBarcos();
	
	void setearComportamientos();
	void agregarBarcos(Escena* &miEscena);
	void posicionarBarcos();

	bool getPreparandoW1() const;
	bool getPreparandoW2() const;
	bool getPreparandoW3() const;

	bool getPosicionandoW1() const;
	bool getPosicionandoW2() const;
	bool getPosicionandoW3() const;

	void checkAtaques();
	void checkUso();
	void checkImpactosBala();
	void checkImpactosBarcos();
	void colisionBarcoBala(Bala* miBala);
	void colisionBarcoMarinero(int numeroDeBarco, Marinero* miBala);

	void checkTimers();

	void setBarcoInicial();
	void resetAdministrador();

	bool checkJugando() const;

	Barco* getBarcoDelJugador() const;

	void setTextoInicial(sf::Text* miTexto, const char* elTextoEscrito, int posX, int posY);
	void actualizarTexto();
	void actualizarPuntajeMax();
	sf::Text* getTextoResistencia() const;
	sf::Text* getTextoDisparos() const;
	sf::Text* getTextoPuntaje() const;
	sf::Text* getTextoPuntajeMax() const;
	sf::Text* getTextoPuntajeGO() const;

	void activarGameOver();
};

}

#endif