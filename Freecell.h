#ifndef _FREECELL_H
#define	_FREECELL_H
#include "Card.h"
#include "Tableau.h"
#include"Randomize.h"
#pragma once
using namespace std;
using namespace cimg_library;

const int MAX_RESERVED_CELLS = 8;

class Freecell
{
	Tableau tableau_;
	Card foundationPile_[MAX_SUITS];
	Card reservedCells_[MAX_RESERVED_CELLS];

	int target_;
	int targetDestination_;

	int numberOfFoundationPiles_;
	int numberOfReservedCells_;

	bool gameWon_, resigned_;
public:
	Freecell(int nCasc, int nSuits, int nCrdsPerSuit, int nRsvCells);
	~Freecell();


	void printEnding();
	bool playerResigned() const { return resigned_; };
	void print();


	void validateTarget(int);
	void validateDestination(int);
	void drawReserce();
	void drawFoundation();
};

#endif

