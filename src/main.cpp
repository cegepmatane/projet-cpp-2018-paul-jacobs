//============================================================================
// Name        : main.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <fstream>
#include <iostream>
#include "modele/Personnage/Personnage.h"
#include "modele/Element/Element.h"
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Personnage personnageSansPointeur(10,"packman");
	//cout << personnageSansPointeur.afficher() << endl;

	ofstream fichierPersonnage;
	fichierPersonnage.open("data//personnage.json");
	fichierPersonnage << "test";
	fichierPersonnage.close();
	cout << "ecriture dans fichier";
	return 0;
}
