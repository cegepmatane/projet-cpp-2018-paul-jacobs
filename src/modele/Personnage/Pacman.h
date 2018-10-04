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
	virtual ~Pacman();

	const string sauvegarder() const{
			stringstream affichage;
			affichage << "<personnage>"
					<< "<nom>" << nom << "</nom>"
					<< "<Element>" << element->sauvegarder() << "</Element>"
					<< "<positionX>" << positionX << "</positionX>"
					<< "<positionY>" << positionY << "</positionY>"
					<< "</personnage>" << endl;
			return affichage.str();
		}

private:

};

#endif /* PACKMAN_H_ */
