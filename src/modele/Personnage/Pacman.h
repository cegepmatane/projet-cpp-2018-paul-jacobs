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
	Pacman(int vie, int tailleDeBouche, string pnom, Element* pelement, int ppositionX, int ppositionY, int positionImage);
	virtual ~Pacman();

	const string sauvegarder() const{
			stringstream affichage;
			string elementString = "";
			if (element){
				elementString = element->sauvegarder();
			}
			affichage << "<pacman>" << endl
					<< "<nom>" << nom << "</nom>" << endl
					<< elementString << endl
					<< "<positionX>" << positionX << "</positionX>" << endl
					<< "<positionY>" << positionY << "</positionY>" << endl
					<< "<vie>" << vie << "</vie>" << endl
					<< "<tailleDeBouche>" << tailleDeBouche << "</tailleDeBouche>" << endl
					<< "</pacman>";
			return affichage.str();
		}

private:
	int vie;
	int tailleDeBouche;
};

#endif /* PACKMAN_H_ */
