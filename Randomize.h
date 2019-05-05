#pragma once
#include"Card.h"
#include"Tableau.h"
using namespace std;
using namespace cimg_library;

const int MAX_SUITS = 4; // also used in class tableau
const int MAX_FACE = 13;
const int ACE = 1;

class Randomize
{
	int nSuits_;//number of suits
	int cardsPSuit_;//number of cards for each suit

	void setDefaults_();//set default suits and faces
	void shuffleDefaults_();//shuffle cards to a random one
	Card cardsToShuffle_[MAX_SUITS][MAX_FACE];
public:
	Randomize(Tableau &d);
	
};

