/*
 * Element.h
 *
 *  Created on: 26 sept. 2018
 *      Author: 1832522
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_

using namespace std;

#include <string>
#include <sstream>

class Element {
public:
	Element();
	Element(string effet);
	Element(string effet, int puissance);
	virtual ~Element();

	const string sauvegarder() const{
			stringstream affichage;
			affichage << "<element>" << endl
					<< "<effet>" << effet << "</effet>" << endl
					<< "<puissance>" << puissance << "</puissance>" << endl
					<< "</element>";
			return affichage.str();
		}

protected:
	string effet;
	int puissance;
};

#endif /* ELEMENT_H_ */
