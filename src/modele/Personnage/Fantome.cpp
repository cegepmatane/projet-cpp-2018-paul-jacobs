/*
 * Fantome.cpp
 *
 *  Created on: 24 sept. 2018
 *      Author: 1832522
 */

#include "Fantome.h"

Fantome::Fantome() {
}

Fantome::Fantome(string couleur) {
	this->couleur=couleur;
}

Fantome::Fantome(string pcouleur, string pnom, Element* pelement, int ppositionX, int ppositionY) {
	nom=pnom;
	element = pelement;
	positionX = ppositionX;
	positionY = ppositionY;
	couleur = pcouleur;
}
Fantome::~Fantome() {
}

