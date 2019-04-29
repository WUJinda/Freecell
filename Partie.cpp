#include "Partie.h"






Partie::Partie(Carte tableau[13][8], int miniMemoire[17], CImg<unsigned char> scene /*, CImgDisplay disp*/ ) //, double memoireAffichage[15][9]
{
}

Partie::~Partie()
{
}

void Partie::afficherPartie()
{
}

void Partie::deplacement(int num1, int num2)
{
	Carte carte1;
	if (num1 >= 0) {
		carte1 = memoire_[num1 / 8][num1 % 8];
	}
	
	if (num2 <= -10) {								//ajouter carte1 sur colonne vide
		
		//memoire:
		int col = -num2 - 10;
		memoire_[1][col] = carte1;
		Carte carteVide;
		memoire_[num1 / 8][num1 % 8] = carteVide;		//pas utile dans les faits
		miniMemoire_[col + 1] += 1;
		// il faudrait ajouter un autre argument : place ds mini memoire de carte1 //miniMemoire_[]


		//affichage:					//pour l'instant, pas reaffichage plus complexe que RIEN du blanc au niveau d'ancien emplacement de carte1
	   	scene_.draw_image(col * 100, 4 * 30, 0, 0, carte1.getImage(), 1);			//i=4, "2e" ligne  // j=col
	}
	if (0 < num2 && num2 < 3) {								//ajouter carte1 dans reserve

		//memoire:
		memoire_[0][num2] = carte1;
		Carte carteVide;
		memoire_[num1 / 8][num1 % 8] = carteVide;		//pas utile dans les faits
		miniMemoire_[0] += 1;
		//mod mini med de carte1 aussi


		//affichage:
		scene_.draw_image(50 + num2 * 70, 0 * 30, 0, 0, carte1.getImage(), 1);

	}


	if (num2 == 4) {								//sortir une carte

	//memoire:
		int couleur = carte1.getCouleur();
		memoire_[0][couleur+4] = carte1;
		Carte carteVide;
		memoire_[num1 / 8][num1 % 8] = carteVide;		//pas utile dans les faits
		miniMemoire_[12+couleur] += 1;
		// il faudrait ajouter un autre argument : place ds mini memoire de carte1 //miniMemoire_[]


		//affichage:					//pour l'instant, pas reaffichage plus complexe que RIEN du blanc au niveau d'ancien emplacement de carte1
		scene_.draw_image(450 + couleur * 70, 0 * 30, 0, 0, carte1.getImage(), 1);
		//scene.display(disp);
	}
}