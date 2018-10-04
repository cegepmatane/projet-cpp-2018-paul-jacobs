/*
 * Personnage.cpp
 *
 *  Created on: 24 sept. 2018
 *      Author: 1832522
 */

#include "Personnage.h"
using namespace std;

Personnage::Personnage() {
	this->nom="inconnu";
	this->element = nullptr;
	this->positionX = 0;
	this->positionY = 0;
}

Personnage::Personnage(string nom) {
	this->nom=nom;
	this->element = nullptr;
	this->positionX = 0;
	this->positionY = 0;
}


Personnage::Personnage(string nom, Element* element, int positionX, int positionY) {
	this->nom=nom;
	this->element = element;
	this->positionX = positionX;
	this->positionY = positionY;

}
Personnage::~Personnage() {
	delete element;
}
