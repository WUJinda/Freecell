#pragma once


#include "CImg.h"
using namespace cimg_library;
#include <iostream>
using namespace std;



class Carte
{
	int valeur_;
	char caracteristique_;
	int couleur_; // 1,2,3,4 pique, couer, treffle, carreau
	
	int positionX_;		//??
	int positionY_;

	CImg<float> image_;


public:

	Carte(CImg<float> image = CImg<float>(1,1,0,1), int valeur = 0 , char caracteristique = 'o', int couleur = 0, int positionX = 0, int positionY = 0);	//on ne peut se passer de l'initialissation par défaut de l'image, pour créer un tableau d'images qui devront alor toutes être initialisées
	~Carte();


	int getPositionX() { return positionX_; }		//??
	int getPositionY() { return positionY_; }

	void setPositionX(int positionX) { positionX_ = positionX; }
	void setPositionY(int positionY) { positionY_ = positionY; }

	int getValeur() { return valeur_; }
	char getCaracteristique() { return caracteristique_; }
	int getCouleur() { return couleur_; }


	CImg<float> getImage() { return image_; }


	bool estValide(Carte carte2) ;		//?
};