#ifndef _TABLEAU_H
#define _TABLEAU_H
#include "Card.h"
using namespace std;
using namespace cimg_library;
const int MAX_CASCADES = 7; 
const int MAX_ROWS = 19;
const int rowsNeededPlusExtra = 20;
const int WIDTH = 3;

extern CImg<unsigned char> grid;

class Tableau
{	
	int cardsPerSuit_;
	int numberOfSuits_;
	int numberOfCards_; //total
	int numberOfCascades_;
	
	Card cells_[4];
	Card foundation_[4];
	Card cardsInCascades[MAX_ROWS][MAX_CASCADES];
	
	int cardsRemaining_;

public:
	Tableau(int numCasc = 4, int numSuits = 4, int crdsPSuit = 13);
	
	void drawTableau();
	void printTableau();

	int getNumberOfSuits() const { return numberOfSuits_;};
	int getNumberOfCardsPerSuit() const { return cardsPerSuit_; };
	
};

#endif