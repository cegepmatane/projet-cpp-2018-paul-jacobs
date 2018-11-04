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

#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	RenderWindow fenetre(VideoMode(400, 400), "SFML !");
	CircleShape cercle(50.f);


	Personnage personnageSansPointeur("test");


	Personnage* listePersonnages[5];
	listePersonnages[0] = new Pacman(5,2,"Pacman",new Packgum("Flame", 10),1,1);
	listePersonnages[1] = new Fantome("bleu","fantome",new Fruit("speedboost", 10),1,1);
	listePersonnages[2] = new Fantome("rouge","fantome",new Fruit("speedboost", 10),1,1);
	listePersonnages[3] = new Fantome("jaune","fantome",new Fruit("speedboost", 10),1,1);
	listePersonnages[4] = new Fantome("vert","fantome",new Fruit("speedboost", 10),1,1);


	Personnage* personnage;
	char lettre;
	bool boucleEnCours = true;

	Sprite structureJoueur;
	structureJoueur.setPosition(0,0);

	Texture textureJeu;
	textureJeu.loadFromFile("src//pacman.png");

	Vector2u tailleTexture = textureJeu.getSize();

	tailleTexture.x /= 3*14;
	tailleTexture.y /=14;




	structureJoueur.setTexture(textureJeu);
	structureJoueur.setTextureRect(IntRect(tailleTexture.x*(14*2)+tailleTexture.x/4*2,tailleTexture.y*0,tailleTexture.x,tailleTexture.y));
	//structureJoueur.setTextureRect(IntRect(200,200,200,200));
	structureJoueur.setColor(sf::Color(255, 255, 255, 200));


	int curseur = 0;

	 while (fenetre.isOpen())
	{
		Event evenement;
		while (fenetre.pollEvent(evenement))
		{
			if (evenement.type == Event::Closed)
				fenetre.close();

			if (evenement.type == Event::KeyPressed){
				cout << "numero ascii de la touche "
				<< (char) (evenement.key.code + 97)
				<<" : "
				<< evenement.key.code + 97
				<< endl;

				//changement de personnage
				if (evenement.key.code + 97 == 157)
				{
					curseur ++;
					curseur = curseur % (sizeof(listePersonnages)/sizeof(listePersonnages[0]));
					cout << listePersonnages[curseur]->getNom() << endl;
				}
			}
		}
		fenetre.clear();

		fenetre.draw(structureJoueur);
		fenetre.display();
	}
	cout << "Merci d'avoir joué !" << endl;

	return 0;
}

