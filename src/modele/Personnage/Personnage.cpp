/*
 * Personnage.cpp
 *
 *  Created on: 24 sept. 2018
 *      Author: 1832522
 */

#include "Personnage.h"
#include <iostream>
using namespace std;

Personnage::Personnage() {
	this->nom="inconnu";
	this->element = nullptr;
	this->positionX = 0;
	this->positionY = 0;
	this->vie = 1;
}

Personnage::Personnage(string nom) {
	this->nom=nom;
	this->element = nullptr;
	this->positionX = 0;
	this->positionY = 0;
	this->vie = 1;
}


Personnage::Personnage(string nom, Element* element, int positionX, int positionY) {
	this->nom=nom;
	this->element = element;
	this->positionX = positionX;
	this->positionY = positionY;
	this->vie = 1;
}

Personnage::Personnage(string nom, Element* element, int positionX, int positionY, int vie) {
	this->nom=nom;
	this->element = element;
	this->positionX = positionX;
	this->positionY = positionY;
	this->vie = vie;
}


Personnage::~Personnage() {
}

void Personnage::operator--(int value)
{
	cout << "operator";
	this->setVie(this->getVie()-1);
}
