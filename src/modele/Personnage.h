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
#include "Element.h"


using namespace std;

class Personnage {
public:
	Personnage();
	Personnage(int age);
	Personnage(int age, string nom);
	virtual ~Personnage();

	const string afficher() const{
		stringstream affichage;
		affichage << age << " " << nom;
		return affichage.str();
	}

	int getAge() const {
		return age;
	}

	void setAge(int ageLocal) {
		this->age = ageLocal;
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
	int age;
	string nom;
	Element* element;
};
 /* end namespace*/

#endif /* PERSONNAGE_H_ */
