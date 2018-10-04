/*
 * Packgum.h
 *
 *  Created on: 26 sept. 2018
 *      Author: 1832522
 */

#ifndef PACKGUM_H_
#define PACKGUM_H_
#include "Element.h"

class Packgum : public Element{
public:
	Packgum();
	Packgum(string effet, int puissance);
	virtual ~Packgum();

	const string sauvegarder() const{
				stringstream affichage;
				// TODO ferrmer balise
				affichage << "<element>"
						<< "<effet>" << effet << "</effet>"
						<< "<puissance>" << puissance << "</puissance>"
						<< "</element>"
						<< endl;
				return affichage.str();
			}
};

#endif /* PACKGUM_H_ */
