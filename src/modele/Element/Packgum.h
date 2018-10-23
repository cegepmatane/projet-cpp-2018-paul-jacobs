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
				affichage << "<packgum>" << endl
						<< "<effet>" << effet << "</effet>" << endl
						<< "<puissance>" << puissance << "</puissance>" << endl
						<< "</packgum>";
				return affichage.str();
			}
};

#endif /* PACKGUM_H_ */
