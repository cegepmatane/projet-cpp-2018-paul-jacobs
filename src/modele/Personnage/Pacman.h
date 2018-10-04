/*
 * Packman.h
 *
 *  Created on: 24 sept. 2018
 *      Author: 1832522
 */

#ifndef PACKMAN_H_
#define PACKMAN_H_

#include "Personnage.h"

class Pacman : public Personnage {
public:
	Pacman();
	Pacman(int vie, int tailleDeBouche);
	Pacman(int vie, int tailleDeBouche, string pnom, Element* pelement, int ppositionX, int ppositionY);
	virtual ~Pacman();

	const string sauvegarder() const{
			stringstream affichage;
			affichage << "<personnage>"
					<< "<nom>" << nom << "</nom>"
					<< "<Element>" << element->sauvegarder() << "</Element>"
					<< "<positionX>" << positionX << "</positionX>"
					<< "<positionY>" << positionY << "</positionY>"
					<< "<vie>" << vie << "</vie>"
					<< "<tailleDeBouche>" << tailleDeBouche << "</tailleDeBouche>"
					<< "</personnage>" << endl;
			return affichage.str();
		}

private:
	int vie;
	int tailleDeBouche;
};

#endif /* PACKMAN_H_ */
