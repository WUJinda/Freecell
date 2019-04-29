#include "Coordonnee.h"

#include <iostream>
using namespace std;

Coordonnee::Coordonnee( int tabRemplissage[13] , int valeurX, int valeurY)
{
	valeurX_ = valeurX;
	valeurY_ = valeurY;
	for (int i = 0; i < 13; i++) {
		tabRemplissage_[i] = tabRemplissage[i];
	}
}


Coordonnee::~Coordonnee()
{
}

int Coordonnee::carteAssociee()		// retourne numéro de la case du tableau associee ou -1 si le click n'est associé à aucune carte
{
	if (valeurY_ <= 100) {
		
		if (40 < valeurX_ && valeurX_ < 330) {
			cout << endl<< "vous avez clique dans la reserve" << endl;
			return (0); // 1ere carte de la reserve en comptant dans le tableau
			
		}
		else if (440 < valeurX_ && valeurX_< 740 ) {
			cout << endl << "vous avez clique dans le depot" << endl;
			return(5);// 1ere pile de depot
		}
		else{ 
			cout << endl << "vous n'avez pas clique dans une zone de cartes" <<  endl;
			return(-1); //pas de carte
		}
	}
	else {
		cout << endl << "vous avez clique sur une colonne de jeu" << endl;
		return (valeurX_ /100 + 8);		// 1ere carte de la pile associée			//ici depend de la largeur de la fenetre, le mettre dans ce programme ou dans le main ?
		cout << endl << "vous avez clique sur la colonne numero " << valeurX_ / 100 << endl;		//chelou
	}

}
/*
int Coordonnee::saisie1()
{
	if (valeurY_ <= 100) {								//soit réserve soit sortie et alors non
		if (50 < valeurX_ && valeurX_ < 330) {
			cout << endl << "vous avez clique sur la reserve" << endl;
			int i = ((valeurX_ - 50) * 4) / 280;
			cout << "a l'emplacement " << i << endl;
			if (tabRemplissage_[i + 8 + 1] == 1) {
				cout << "il y a une carte à cette place" << endl;
				return (i); // n° carte de la reserve en comptant dans le tableau
			}
			else {
				cout << "il n'y a pas de carte à cette place" << endl;
				return(-1);
			}
		}
		else {
			cout << endl << "vous n'avez pas clique dans une zone de cartes valide pour un 1er click" << endl;
			return(-1); //pas de carte
		}
	}
	else {		//ici appel au tableau résumé des remplissages du jeu
		int numColonne = valeurX_ / 100; 
		cout << endl << "vous avez clique sur la colonne numero " << numColonne << endl;
		int nbCarte = tabRemplissage_[numColonne + 1];
		if (nbCarte >= 1) {
			cout << endl << "cette colonne contient " << nbCarte << "carte-s" << endl;
			cout << "carte associee : " <<(nbCarte)*8+ numColonne ;		//-1?	//derniere carte non nulle si colonne  	//1ere ligne pour depot et sortie 
			return ((nbCarte ) * 8 + numColonne);		//-1 ?
		}
		else return (-1);			//pas de carte dans la  colonne
	}
	return 0;
}
*/


int Coordonnee::saisie1()
{
	if (valeurY_ <= 100) {								//soit réserve soit sortie et alors non
		if (50 < valeurX_ && valeurX_ < 330) {
			//cout << endl << "vous avez clique sur la reserve" << endl;
			int i = ((valeurX_ - 50) * 4) / 286;
			//cout << "a l'emplacement " << i << endl;
			if (tabRemplissage_[i + 8 + 1] == 1) {
				//cout << "il y a une carte à cette place" << endl;
				return (i); // n° carte de la reserve en comptant dans le tableau
			}
			else {
				//cout << "il n'y a pas de carte à cette place" << endl;
				return(-1);
			}
		}
		else {
			//cout << endl << "vous n'avez pas clique dans une zone de cartes valide pour un 1er click" << endl;
			return(-1); //pas de carte
		}
	}
	else {		//ici appel au tableau résumé des remplissages du jeu
		int numColonne = valeurX_ / 100;
		cout << endl << "vous avez clique sur la colonne numero " << numColonne << endl;
		int nbCarte = tabRemplissage_[numColonne + 1];
		if (nbCarte >= 1) {
			cout << endl << "cette colonne contient " << nbCarte << "carte-s" << endl;
			//cout << "carte associee : " << (nbCarte/*-1*/) * 8 + numColonne;			//derniere carte non nulle si colonne  	//1ere ligne pour depot et sortie 
			return ((nbCarte /*- 1*/) * 8 + numColonne);		//num derniere carte de la colonne  
		}
		else return (-1);			//pas de carte dans la  colonne
	}
}
/*
int Coordonnee::saisie2()
{
	if (valeurY_ <= 100) {													//soit réserve soit sortie		
		if (50 < valeurX_ && valeurX_ < 330) {								//réserve	//    ->   ici appel au tableau résumé des remplissages du jeu
			cout << endl << "vous avez clique sur la reserve" << endl;
			int i = ((valeurX_ - 50) * 4) / 280;
			cout << "a l'emplacement " << i << endl;
			if (tabRemplissage_[i + 8 + 1] == 1) {							//case déjà pleine
				cout << "il y a une carte à cette place" << " mais on va chercher ailleurs dans la reserve ...on ne sait jamais " << endl;
				if (tabRemplissage_[0] < 4) {									//il reste au moins une place dans la reserve
					int j = 0;
					while (j < 4 && tabRemplissage_[9 + j] !=1) {
						j += 1;
					}
					if (j == 4)
						cout << "il y a une erreur, incoherence dans le mini tableau de remplissage" << endl;
					else {
						cout << "on vous a trouve une place en " << j << endl;
						return(j-1);				//contrebalancer le "j+=1"
					}
				}
				else {
					cout << " dommage, tout est plein.." << endl;
					cout << "vous n'avez pas clique dans une zone de cartes valide pour un 2e click" << endl;
					return(-1);
				}
			}
			else {
				cout << "...sur une case vide c'est bien !" << endl;
				return(i);
			}
		}
		else if(450 < valeurX_ && valeurX_ < 730) {												//sortie
			cout << endl << "vous avez clique dans la sortie" << endl;
			return(4); //-> code pour sortie, on determinera ensuite quelle couleur plus specifiquement
		}
		else {
			cout<< "vous n'avez pas clique dans une zone de cartes valide " << endl;
		}
	}
	else {		//jusqu'ici potentiellement ok quelle que soit la valeur dans tableau résumé des remplissages du jeu
		int numColonne = valeurX_ / 100;
		cout << endl << "vous avez clique sur la colonne numero " << numColonne << endl;
		int nbCarte = tabRemplissage_[numColonne + 1];
		if (nbCarte >= 1) {
			cout << endl << "cette colonne contient " << nbCarte << "carte-s" << endl;
			cout << "carte associee : " << (nbCarte) * 8 + numColonne;			//derniere carte non nulle si colonne  	//1ere ligne pour depot et sortie 
			return ((nbCarte ) * 8 + numColonne);		//
		}
		else return (-10-numColonne);			//pas de carte dans la colonne -> code pour dire colonne n°[-x-10]
	}




	return 0;
}
*/


int Coordonnee::saisie2()
{
	if (valeurY_ <= 100) {													//soit réserve soit sortie		
		if (50 < valeurX_ && valeurX_ < 330) {								//réserve	//    ->   ici appel au tableau résumé des remplissages du jeu
			cout << endl << "vous avez clique sur la reserve" << endl;
			int i = ((valeurX_ - 50) * 4) / 280;
			cout << "a l'emplacement " << i << endl;
			if (tabRemplissage_[i + 8 + 1] == 1) {							//case déjà pleine
				cout << "il y a une carte à cette place" << " mais on va chercher ailleurs dans la reserve ...on ne sait jamais " << endl;
				if (tabRemplissage_[0] < 4) {									//il reste au moins une place dans la reserve
					int j = 0;
					while (j < 4 && tabRemplissage_[9 + j] != 0) {
						j += 1;
					}
					if (j == 5)
						cout << "il y a une erreur, incoherence dans le mini tableau de remplissage" << endl;
					else {
						cout << "on vous a trouve une place en " << j << endl;
						return(j);				//contrebalancer le "j+=1"
					}
				}
				else {
					cout << " dommage, tout est plein.." << endl;
					cout << "vous n'avez pas clique dans une zone de cartes valide pour un 2e click" << endl;
					return(-1);
				}
			}
			else {
				//cout << "...sur une case vide c'est bien !" << endl;
				return(i);
			}
		}
		else if (450 < valeurX_ && valeurX_ < 730) {												//sortie
			//cout << endl << "vous avez clique dans la sortie" << endl;
			return(4); //-> code pour sortie, on determinera ensuite quelle couleur plus specifiquement
		}
		else {
			//cout << "vous n'avez pas clique dans une zone de cartes valide " << endl;
		}
	}
	else {		//jusqu'ici potentiellement ok quelle que soit la valeur dans tableau résumé des remplissages du jeu
		int numColonne = valeurX_ / 100;
		cout << endl << "vous avez clique sur la colonne numero " << numColonne << endl;
		int nbCarte = tabRemplissage_[numColonne + 1];
		if (nbCarte >= 1) {
			cout << endl << "cette colonne contient " << nbCarte << "carte-s" << endl;
			//cout << "carte associee : " << (nbCarte) * 8 + numColonne;			//derniere carte non nulle si colonne  	//1ere ligne pour depot et sortie 
			return ((nbCarte) * 8 + numColonne);		//
		}
		else return (-10 - numColonne);			//pas de carte dans la colonne -> code pour dire colonne n°[-x-10]
	}




	return 0;
}

bool Coordonnee::estDeplacementValide(Coordonnee coordonnee2)
{
	return false;
}
