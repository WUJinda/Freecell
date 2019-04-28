#ifndef _TABLEAU_H
#define _TABLEAU_H
#include "Card.h"
using namespace std;
using namespace cimg_library;

class Tableau
{	

	vector<Card> cascade_;
	vector<vector<Card>> tableau_;
	vector<Card> cells_;
	vector<Card> foundation_;


public:
	Tableau();
	
	void drawTableau();

	void randomize();
	void setDefaults();
};

#endif
