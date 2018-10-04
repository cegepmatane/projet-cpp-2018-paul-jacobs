/*
 * Packman.cpp
 *
 *  Created on: 24 sept. 2018
 *      Author: 1832522
 */

#include "Pacman.h"

Pacman::Pacman() {
		vie = 0;
		tailleDeBouche = 0;
}


Pacman::Pacman(int pvie, int ptailleDeBouche) {
		vie = pvie;
		tailleDeBouche = ptailleDeBouche;
}


Pacman::Pacman(int pvie, int ptailleDeBouche, string pnom, Element* pelement, int ppositionX, int ppositionY) {
		nom=pnom;
		element = pelement;
		positionX = ppositionX;
		positionY = ppositionY;
		vie = pvie;
		tailleDeBouche = ptailleDeBouche;

}

Pacman::~Pacman() {
}

