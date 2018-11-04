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
#include <Windows.h>

#include <SFML/Graphics.hpp>
using namespace std;
using namespace sf;


void sauvegarder(Personnage** listePersonnages)
{

	ofstream fichierPersonnage;
	fichierPersonnage.open("data//personnage.xml");
	fichierPersonnage << "<univers>";
	for(int position = 0; position < 5; position++)
	{
		fichierPersonnage << listePersonnages[position]->sauvegarder();
	}
	fichierPersonnage << "</univers>";
	fichierPersonnage << endl;
	fichierPersonnage.close();
}



int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	RenderWindow fenetre(VideoMode(400, 400), "SFML !");
	CircleShape cercle(50.f);


	Personnage personnageSansPointeur("test");


	Personnage* listePersonnages[5];
	listePersonnages[0] = new Pacman(10,2,"Pacman",new Packgum("Flame", 10),1,1,0);
	listePersonnages[1] = new Fantome("bleu","fantome",new Fruit("speedboost", 10),1,1,4);
	listePersonnages[2] = new Fantome("rouge","fantome",new Fruit("speedboost", 10),1,1,5);
	listePersonnages[3] = new Fantome("jaune","fantome",new Fruit("speedboost", 10),1,1,6);
	listePersonnages[4] = new Fantome("vert","fantome",new Fruit("speedboost", 10),1,1,7);



	Sprite structureJoueur;
	Sprite Background;


	Texture textureJeu;
	textureJeu.loadFromFile("src//pacman.png");

	Vector2u tailleTexture = textureJeu.getSize();

	tailleTexture.x /= 3*14;
	tailleTexture.y /=15;




	structureJoueur.setTexture(textureJeu);


	int curseur = 0;
	Vector2u position(0,0);
	Personnage p;
	int anim = 0;

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
				switch (evenement.key.code + 97){

					case 133 :
						fenetre.close();
						break;

					case 156 :
						(*listePersonnages[curseur])--;
						anim=12;
						cout << listePersonnages[curseur]->getNom()
							<< " a : "
							<< listePersonnages[curseur]->getVie()
							<< " pv"
							<< endl;
							break;

					case 157 :
						curseur ++;
						curseur = curseur % (sizeof(listePersonnages)/sizeof(listePersonnages[0]));
						break;

					case 168 :
						position.x-=tailleTexture.x;
						break;

					case 169 :
						position.x+=tailleTexture.x;
						break;

					case 170 :
						position.y-=tailleTexture.y;
						break;

					case 171 :
						position.y+=tailleTexture.y;
						break;

					default :
						cout << listePersonnages[curseur]->getNom()
							<< " a : "
							<< listePersonnages[curseur]->getVie()
							<< " pv"
							<< endl;
						break;
				}

			}
		}
		fenetre.clear();

		if (anim>0){
			cout << anim << endl;
			anim--;
		}

		structureJoueur.setPosition(position.x,position.y);
		structureJoueur.setTextureRect(IntRect(tailleTexture.x*(14*2)+tailleTexture.x/4*2+tailleTexture.x*anim,
				tailleTexture.y*listePersonnages[curseur]->getPositionImage(),
				tailleTexture.x,
				tailleTexture.y));

		fenetre.draw(structureJoueur);
		fenetre.display();
		sauvegarder(listePersonnages);

		Sleep(50);

	}
	cout << "Merci d'avoir joué !" << endl;

	return 0;
}

