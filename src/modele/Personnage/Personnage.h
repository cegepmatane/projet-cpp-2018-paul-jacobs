/*
 * Personnage.h
 *
 *  Created on: 24 sept. 2018
 *      Author: 1832522
 */

#include <string>
#include <sstream>


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
		stringstream affichage;
		affichage << "<personnage>"
				<< "<nom>" << nom << "</nom>"
				<< "<Element>" << element->sauvegarder() << "</Element>"
				<< "<positionX>" << positionX << "</positionX>"
				<< "<positionY>" << positionY << "</positionY>"
				<< "</personnage>" << endl;
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

	void exporter(){
		//ofstream fichierPersonnage;
		//fichierPersonnage.open("data/personage.json");
	}

	//void charger()


protected:
	string nom;
	Element* element;
	int positionX;
	int positionY;
};
 /* end namespace*/

#endif /* PERSONNAGE_H_ */
