/*
 * Personnage.cpp
 *
 *  Created on: 24 sept. 2018
 *      Author: 1832522
 */

#include "Personnage.h"
using namespace std;

Personnage::Personnage() {
	// TODO Auto-generated constructor stub
	this->age = 0;
	this->nom="inconnu";

}

Personnage::Personnage(int age) {
	this->age=age;
	this->nom="inconnu";

}

Personnage::Personnage(int age, string nom) {
	this->age=age;
	this->nom=nom;

}

Personnage::~Personnage() {
	// TODO Auto-generated destructor stub
}
