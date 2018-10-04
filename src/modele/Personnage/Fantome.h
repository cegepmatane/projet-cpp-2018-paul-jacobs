/*
 * Fantome.h
 *
 *  Created on: 24 sept. 2018
 *      Author: 1832522
 */

#ifndef FANTOME_H_
#define FANTOME_H_
#include "Personnage.h"

class Fantome : public Personnage{
public:
	Fantome();
	Fantome(string couleur);
	virtual ~Fantome();

	const string sauvegarder() const{
			stringstream affichage;
			affichage << "<fantome>"
					<< "<nom>" << nom << "</nom>"
					<< "<Element>" << element->sauvegarder() << "</Element>"
					<< "<positionX>" << positionX << "</positionX>"
					<< "<positionY>" << positionY << "</positionY>"
					<< "<couleur>" << couleur << "</couleur>"
					<< "</personnage>" << endl;
			return affichage.str();
		}



private:
	string couleur;
};

#endif /* FANTOME_H_ */
