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
	Fantome(string pcouleur, string pnom, Element* pelement, int ppositionX, int ppositionY);
	Fantome(string pcouleur, string pnom, Element* pelement, int ppositionX, int ppositionY, int positionImage);
	virtual ~Fantome();

	const string sauvegarder() const{
			stringstream affichage;
			string elementString = "";
			if (element){
				elementString = element->sauvegarder();
			}

			affichage << "<fantome>" << endl
					<< "<nom>" << nom << "</nom>" << endl
					<< "<Element>" << elementString << "</Element>" << endl
					<< "<positionX>" << positionX << "</positionX>" << endl
					<< "<positionY>" << positionY << "</positionY>" << endl
					<< "<couleur>" << couleur << "</couleur>" << endl
					<< "</personnage>";
			return affichage.str();
		}



private:
	string couleur;
};

#endif /* FANTOME_H_ */
