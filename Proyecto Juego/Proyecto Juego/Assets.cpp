#include "Assets.h"

namespace Octavio
{

bool Assets::menuBackground(sf::Texture &textura)
{
	sf::Texture miTextura;

	if (!miTextura.loadFromFile("../Assets/background.jpg", sf::IntRect()))
	{
		std::cout << "No cargo la imagen." << std::endl;
		return false;
	}
	else
	{
		textura = miTextura;
		return true;
	}
}

bool Assets::cargarAsset(const char* nombreAsset, sf::Texture &textura)
{
	rapidxml::file<> miXML("../Assets/ships_sheet.xml");
	rapidxml::xml_document<> doc;

	doc.parse<0>(miXML.data());

	rapidxml::xml_node<char>* nodoActual = doc.first_node()->first_node();
	
	bool seguirBuscando = true;

	int texturaX = 0;
	int texturaY = 0;
	int texturaH = 0;
	int texturaW = 0;

	do
	{
		if (0 == std::strcmp(nombreAsset, nodoActual->first_attribute("name")->value()))
		{
			seguirBuscando = false;

			texturaX = strtol(nodoActual->first_attribute("x")->value(), NULL, 0);
			texturaY = strtol(nodoActual->first_attribute("y")->value(), NULL, 0);
			texturaH = strtol(nodoActual->first_attribute("height")->value(), NULL, 0);
			texturaW = strtol(nodoActual->first_attribute("width")->value(), NULL, 0);

			sf::Texture miTextura;

			// Cargo un rectangulo de texturaW x texturaH que inicia en el (texturaX, texturaY) del archivo
			if (!miTextura.loadFromFile("../Assets/ships_sheet.png", sf::IntRect(texturaX, texturaY, texturaW, texturaH)))
			{
				std::cout << "No cargo la imagen " << nombreAsset << "." << std::endl;
				return false;
			}
			else
			{
				textura = miTextura;
				return true;
			}
		}
		else if (nodoActual == doc.first_node()->last_node())
		{
			seguirBuscando = false;

			std::cout << "No se encontro la textura " << nombreAsset << " en el XML." << std::endl;

			return false;
		}
		else
		{
			nodoActual = nodoActual->next_sibling();
		}

	} while (seguirBuscando);
}

bool Assets::cannon(sf::Texture &textura)
{
	return Assets::cargarAsset("cannon.png", textura);
}

bool Assets::cannonBall(sf::Texture &textura)
{
	return Assets::cargarAsset("cannonBall.png", textura);
}

bool Assets::cannonLoose(sf::Texture &textura)
{
	return Assets::cargarAsset("cannonLoose.png", textura);
}

bool Assets::cannonMobile(sf::Texture &textura)
{
	return Assets::cargarAsset("cannonMobile.png", textura);
}

bool Assets::crew1(sf::Texture &textura)
{
	return Assets::cargarAsset("crew (1).png", textura);
}

bool Assets::crew2(sf::Texture &textura)
{
	return Assets::cargarAsset("crew (2).png", textura);
}

bool Assets::crew3(sf::Texture &textura)
{
	return Assets::cargarAsset("crew (3).png", textura);
}

bool Assets::crew4(sf::Texture &textura)
{
	return Assets::cargarAsset("crew (4).png", textura);
}

bool Assets::crew5(sf::Texture &textura)
{
	return Assets::cargarAsset("crew (5).png", textura);
}

bool Assets::crew6(sf::Texture &textura)
{
	return Assets::cargarAsset("crew (6).png", textura);
}

bool Assets::boteGrandeNuevo(sf::Texture &textura)
{
	return Assets::cargarAsset("dinghyLarge1.png", textura);
}

bool Assets::boteGrandeRoto1(sf::Texture &textura)
{
	return Assets::cargarAsset("dinghyLarge2.png", textura);
}

bool Assets::boteGrandeRoto2(sf::Texture &textura)
{
	return Assets::cargarAsset("dinghyLarge3.png", textura);
}

bool Assets::boteChicoNuevo(sf::Texture &textura)
{
	return Assets::cargarAsset("dinghySmall1.png", textura);
}

bool Assets::boteChicoRoto1(sf::Texture &textura)
{
	return Assets::cargarAsset("dinghySmall2.png", textura);
}

bool Assets::boteChicoRoto2(sf::Texture &textura)
{
	return Assets::cargarAsset("dinghySmall3.png", textura);
}

bool Assets::explosion1(sf::Texture &textura)
{
	return Assets::cargarAsset("explosion1.png", textura);
}

bool Assets::explosion2(sf::Texture &textura)
{
	return Assets::cargarAsset("explosion2.png", textura);
}

bool Assets::explosion3(sf::Texture &textura)
{
	return Assets::cargarAsset("explosion3.png", textura);
}

bool Assets::fuego1(sf::Texture &textura)
{
	return Assets::cargarAsset("fire1.png", textura);
}

bool Assets::fuego2(sf::Texture &textura)
{
	return Assets::cargarAsset("fire2.png", textura);
}

bool Assets::banderaBlanca(sf::Texture &textura)
{
	return Assets::cargarAsset("flag (1).png", textura);
}

bool Assets::banderaNegra(sf::Texture &textura)
{
	return Assets::cargarAsset("flag (2).png", textura);
}

bool Assets::banderaRoja(sf::Texture &textura)
{
	return Assets::cargarAsset("flag (3).png", textura);
}

bool Assets::banderaVerde(sf::Texture &textura)
{
	return Assets::cargarAsset("flag (4).png", textura);
}

bool Assets::banderaAzul(sf::Texture &textura)
{
	return Assets::cargarAsset("flag (5).png", textura);
}

bool Assets::banderaAmarillo(sf::Texture &textura)
{
	return Assets::cargarAsset("flag (6).png", textura);
}

bool Assets::barcoGrandeNuevo(sf::Texture &textura)
{
	return Assets::cargarAsset("hullLarge (1).png", textura);
}

bool Assets::barcoGrandeRoto1(sf::Texture &textura)
{
	return Assets::cargarAsset("hullLarge (2).png", textura);
}

bool Assets::barcoGrandeRoto2(sf::Texture &textura)
{
	return Assets::cargarAsset("hullLarge (3).png", textura);
}

bool Assets::barcoGrandeRoto3(sf::Texture &textura)
{
	return Assets::cargarAsset("hullLarge (4).png", textura);
}

bool Assets::barcoChicoNuevo(sf::Texture &textura)
{
	return Assets::cargarAsset("hullSmall (1).png", textura);
}

bool Assets::barcoChicoRoto1(sf::Texture &textura)
{
	return Assets::cargarAsset("hullSmall (2).png", textura);
}

bool Assets::barcoChicoRoto2(sf::Texture &textura)
{
	return Assets::cargarAsset("hullSmall (3).png", textura);
}

bool Assets::barcoChicoRoto3(sf::Texture &textura)
{
	return Assets::cargarAsset("hullSmall (4).png", textura);
}

bool Assets::nest(sf::Texture &textura)
{
	return Assets::cargarAsset("nest.png", textura);
}

bool Assets::mastil(sf::Texture &textura)
{
	return Assets::cargarAsset("pole.png", textura);
}

bool Assets::velaGrandeBlancaNueva(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (7).png", textura);
}

bool Assets::velaGrandeBlancaRota1(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (1).png", textura);
}

bool Assets::velaGrandeBlancaRota2(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (19).png", textura);
}

bool Assets::velaGrandeBlancaRota3(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (13).png", textura);
}

bool Assets::velaGrandeNegraNueva(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (8).png", textura);
}

bool Assets::velaGrandeNegraRota1(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (2).png", textura);
}

bool Assets::velaGrandeNegraRota2(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (20).png", textura);
}

bool Assets::velaGrandeNegraRota3(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (14).png", textura);
}

bool Assets::velaGrandeRojaNueva(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (9).png", textura);
}

bool Assets::velaGrandeRojaRota1(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (3).png", textura);
}

bool Assets::velaGrandeRojaRota2(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (21).png", textura);
}

bool Assets::velaGrandeRojaRota3(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (15).png", textura);
}

bool Assets::velaGrandeVerdeNueva(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (10).png", textura);
}

bool Assets::velaGrandeVerdeRota1(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (4).png", textura);
}

bool Assets::velaGrandeVerdeRota2(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (22).png", textura);
}

bool Assets::velaGrandeVerdeRota3(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (16).png", textura);
}

bool Assets::velaGrandeAzulNueva(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (11).png", textura);
}

bool Assets::velaGrandeAzulRota1(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (5).png", textura);
}

bool Assets::velaGrandeAzulRota2(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (23).png", textura);
}

bool Assets::velaGrandeAzulRota3(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (17).png", textura);
}

bool Assets::velaGrandeAmarillaNueva(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (12).png", textura);
}

bool Assets::velaGrandeAmarillaRota1(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (6).png", textura);
}

bool Assets::velaGrandeAmarillaRota2(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (24).png", textura);
}

bool Assets::velaGrandeAmarillaRota3(sf::Texture &textura)
{
	return Assets::cargarAsset("sailLarge (18).png", textura);
}

}