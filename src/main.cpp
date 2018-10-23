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
#include "modele/Personnage/Pacman.h"
#include "modele/Personnage/Fantome.h"
#include "modele/Element/Element.h"
#include "modele/Element/Fruit.h"
#include "modele/Element/Packgum.h"
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	Personnage personnageSansPointeur("test");
	/*cout << personnageSansPointeur.afficher() << endl;
	cout << "ouverture du fichier ";
	ofstream fichierPersonnage;
	fichierPersonnage.open("data//personnage.xml");
	fichierPersonnage << personnageSansPointeur.sauvegarder() << endl << endl;
	fichierPersonnage << pacman.sauvegarder() << endl << endl;
	fichierPersonnage << fantome.sauvegarder() << endl << endl;
	//fichierPersonnage << "test" << endl << "test";
	fichierPersonnage.close();
	cout << "ecriture dans fichier";
*/

	Personnage* listePersonnages[5];
	listePersonnages[0] = new Pacman(5,2,"Pacman",new Packgum("Flame", 10),1,1);
	listePersonnages[1] = new Fantome("bleu","fantome",new Fruit("speedboost", 10),1,1);
	listePersonnages[2] = new Fantome("rouge","fantome",new Fruit("speedboost", 10),1,1);
	listePersonnages[3] = new Fantome("jaune","fantome",new Fruit("speedboost", 10),1,1);
	listePersonnages[4] = new Fantome("vert","fantome",new Fruit("speedboost", 10),1,1);


	Personnage* personnage;
	char lettre;
	bool boucleEnCours = true;

	while(boucleEnCours)
	{
		cout << "running";

		ofstream fichierPersonnage;
		fichierPersonnage.open("data//personnage.xml");
		fichierPersonnage << "<univers>";
		for(int position = 0; position < 5; position++)
		{
			personnage = listePersonnages[position];
			fichierPersonnage << personnage->sauvegarder();
		}
		fichierPersonnage << "</univers>";

		fichierPersonnage << endl;

		if (cin.rdbuf() && cin.rdbuf()->in_avail() >= 0)
		{
			lettre = cin.get();
			cin.ignore();
			if('q' == lettre || (char)27 == lettre) boucleEnCours = false; // pour quitter avec q ou autre touche selon ASCII

		}
	}
	cout << "Merci d'avoir joué !" << endl;

	return 0;
}

