/*
 * Element.cpp
 *
 *  Created on: 26 sept. 2018
 *      Author: 1832522
 */

#include "Element.h"

Element::Element() {
	return;
	this->effet="";
	this->puissance=0;
}

Element::Element(string effet) {
	return;
	this->effet=effet;
	this->puissance=0;
}


Element::Element(string effet, int puissance) {
	return;
	this->effet=effet;
	this->puissance=puissance;
}

Element::~Element() {
	return;
}

