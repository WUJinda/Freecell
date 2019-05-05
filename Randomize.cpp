#include "Randomize.h"

using namespace std;
using namespace cimg_library;

void Randomize::setDefaults_()
{

	char suitChar = 'x';
	// loop through each of the suits
	for (int suit = 0; suit < nSuits_; suit++)
	{
		switch (suit) {
		case 0:
			suitChar = 'H';
			break;
		case 1:
			suitChar = 'S';
			break;
		case 2:
			suitChar = 'D';
			break;
		case 3:
			suitChar = 'C';
			break;
		}
		// loop through all the card ranks
		for (int cardRank = ACE; cardRank <= cardsPSuit_; cardRank++)
		{
			cardsToShuffle_[suit][cardRank - 1].setElements(cardRank, suitChar);
		}
	}
}

void Randomize::shuffleDefaults_()
{


	Card tab[52];
	for (int i = 0; i < MAX_SUITS; i++)
	{
		for (int j = 0; j < MAX_FACE; j++)
		{
			tab[j + i * MAX_FACE] = cardsToShuffle_[i][j];
			//from array[4][13] to array[52] so that we can shuffle easier
		}
	}
	srand(time(NULL));
	Card tempCard;
	int tempNum = 0;
	for (int i = 0; i < 52; i++)
	{
		tempNum = rand() % 52;
		tempCard = tab[tempNum];
		tab[tempNum] = tab[i];
		tab[i] = tempCard;

	}
	int num = 0;
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (num < 52)
			{
				if ((tab[j + 8 * i].getFace() == 1) || (tab[j + 8 * i].getFace() > 9))
				{
					cout << tab[j + 8 * i].changeName() << " ";
					// when the face of cards are "1","10","11","12","13",we change them to "A","T","J","Q","K".  
				}
				else cout << tab[j + 8 * i].getFace() << tab[j + 8 * i].getSuit() << " ";
			}
			else break;


			num++;
		}
		cout << endl;
	}
	// display this cards with an order like the game
}

Randomize::Randomize(Tableau &d)
{

	nSuits_ = d.getNumberOfSuits();
	cardsPSuit_ = d.getNumberOfCardsPerSuit();

	setDefaults_();
	shuffleDefaults_();
	//storeShuffledCards_(d);
}


