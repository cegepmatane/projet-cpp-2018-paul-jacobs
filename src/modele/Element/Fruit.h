/*
 * Fruit.h
 *
 *  Created on: 26 sept. 2018
 *      Author: 1832522
 */

#ifndef FRUIT_H_
#define FRUIT_H_
#include "Element.h"

class Fruit : public Element {
public:
	Fruit();
	Fruit(string effet, int puissance);
	virtual ~Fruit();

	const string sauvegarder() const{
				stringstream affichage;
				affichage << "<fruit>" << endl
						<< "<effet>" << effet << "</effet>" << endl
						<< "<puissance>" << puissance << "</puissance>" << endl
						<< "</fruit>";
				return affichage.str();
			}
};

#endif /* FRUIT_H_ */
