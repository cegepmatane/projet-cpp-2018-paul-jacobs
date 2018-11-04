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
	Personnage(string nom, Element* element, int positionX, int positionY, int vie);
	Personnage(string nom, Element* element, int positionX, int positionY, int vie, int positionImage);
	virtual ~Personnage();

	const string sauvegarder() const{
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


	const int& getVie() const {
		return vie;
	}

	void setVie(const int& vie) {
		this->vie = vie;
	}

	const int& getPositionImage() const {
		return positionImage;
	}

	void setPositionImage(const int& positionImage) {
		this->positionImage = positionImage;
	}

	void ramasser(Element* element){
		this->element = element;
	}

	void operator--(int);

protected:
	string nom;
	Element* element;
	int positionX;
	int positionY;
	int vie;
	int positionImage;

};
 /* end namespace*/

#endif /* PERSONNAGE_H_ */
