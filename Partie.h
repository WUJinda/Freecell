#pragma once
#include "CImg.h"
using namespace cimg_library;
#include <iostream>
using namespace std;
#include "Carte.h"

/*									//deja dans Carte.h
#include "CImg.h"
using namespace std;
using namespace cimg_library;
*/


class Partie
{
	Carte memoire_[13][8];		//memoire
	int miniMemoire_[9];
	double memoireAffichage_[15][8];
	CImg<unsigned char> scene_;   //environnement visuel



public:

	Partie(Carte tableau[13][8] ,int miniMemoire[17],	CImg<unsigned char> scene);		// constructeur d'une partie -> hasard   //double memoireAffichage[15][9],
	~Partie();

	void afficherPartie();						//affiche tout tableau mémoire
	void deplacement(int num1, int num2);		//ou alors coordonnees dans carte ?		//coord mem ou pour afficher ? int ou double ?



};