#include "Freecell.h"

using namespace std;
using namespace cimg_library;

Freecell::Freecell(int nCasc, int nSuits, int nCrdsPerSuit, int nRsvCells)
{

	gameWon_ = false;
	resigned_ = false;

	numberOfReservedCells_ = nRsvCells;
	numberOfFoundationPiles_ = nSuits;


	// create a temporaty deck
	Tableau t(nCasc, nSuits, nCrdsPerSuit);

	// store the temp deck
	tableau_ = t;

	// shuffle the tableau pile
	Randomize shuffle(tableau_);
}


Freecell::~Freecell()
{
}

void Freecell::printEnding()
{
	if (resigned_)
		cout << "Player resigned. Please play again!";
	else
		cout << "WINNER! Woah!! I'm almost surprised YOU won. Awesome.";

	cout << endl;
}

void Freecell::print()
{
	// display reserved cells
	for (int g = 0; g < numberOfReservedCells_; g++)
	{
		cout << 10 * (g + 1) << ":";
		/*if (reservedCells_[g].isActive())
		{
		}
		else
			cout << setw(2) << "__";*/
			cout << setw(2) << reservedCells_[g].changeName();
		cout << " ";
	}

	cout << "   ";

	// display foundation stacks
	//cout << FOUNDATION_INPUT_IDENTITY << ":";
	for (int g = 0; g < numberOfFoundationPiles_; g++)
	{
		/*if (foundationPile_[g].isActive())
		{
		}
		else
			cout << left << setw(WIDTH) << "__";*/
			cout << left << setw(2) << foundationPile_[g].changeName();
		cout << " ";
	}
	cout << endl;

	tableau_.printTableau();
	tableau_.drawTableau();
}

void Freecell::validateTarget(int)
{
}

void Freecell::validateDestination(int)
{
}

void Freecell::drawReserce()
{
	for (int g = 0; g < numberOfReservedCells_; g++)
	{
		//if (reservedCells_[g].isActive())
			grid.draw_image(40 + 120 * (g), 40, reservedCells_[g].getImg());
	}
}

void Freecell::drawFoundation()
{
	for (int g = 0; g < numberOfFoundationPiles_; g++)
	{
		//if (foundationPile_[g].isActive())
		
			grid.draw_image(580 + 120 * (g), 40, foundationPile_[g].getImg());
		
	}
}

