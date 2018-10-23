/*
 * Personnage.h
 *
 *  Created on: 24 sept. 2018
 *      Author: 1832522
 */

#include <string>
#include <sstream>
#include <iostream>


#ifndef PERSONNAGE_H_
#define PERSONNAGE_H_
#include "../Element/Element.h"


using namespace std;

class Personnage {
public:
	Personnage();
	Personnage(string nom);
	Personnage(string nom, Element* element);
	Personnage(string nom, Element* element, int positionX, int positionY);
	virtual ~Personnage();

	const string sauvegarder() const{
		cout << "ouverture du fichier ";
		stringstream affichage;
		string elementString = "";
		if (element){
			elementString = element->sauvegarder();
		}
		affichage << "<personnage>" << endl
				<< "<nom>" << nom << "</nom>" << endl
				<< "<Element>" << elementString << "</Element>" << endl
				<< "<positionX>" << positionX << "</positionX>" << endl
				<< "<positionY>" << positionY << "</positionY>" << endl
				<< "</personnage>";
		return affichage.str();
	}

	const std::string& getNom() const {
		return nom;
	}

	void setNom(const std::string& nom) {
			this->nom = nom;
	}

	void ramasser(Element* element){
		this->element = element;
	}


protected:
	string nom;
	Element* element;
	int positionX;
	int positionY;
};
 /* end namespace*/

#endif /* PERSONNAGE_H_ */
