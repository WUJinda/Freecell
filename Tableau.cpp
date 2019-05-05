#include "Tableau.h"

using namespace std;
using namespace cimg_library;

Tableau::Tableau(int numCasc, int numSuits, int crdsPSuit)
{
	numberOfCascades_ = numCasc;
	numberOfSuits_ = numSuits;
	cardsPerSuit_ = crdsPSuit;
	numberOfCards_ = numberOfSuits_ * cardsPerSuit_;

	cardsRemaining_ = numberOfCards_;
}



void Tableau::drawTableau()
{
	
	unsigned char back_color[3] = { 0,160,0 };
	grid.assign(1060, 800, 1, 3, 200);
	grid.draw_fill(0, 0, back_color);

	unsigned char black[3] = { 0,0,0 };
	unsigned char gray[3] = { 110,110,110 };
	grid.draw_text(30, 700, "Cards Remaining : ", black, 0, 1, 25);


	for (int i = 0; i < 4; i++) grid.draw_rectangle(108 + 91 * i, 30, 179 + 91 * i, 126, gray, 1);
	for (int i = 0; i < 4; i++) grid.draw_rectangle(628 + 91 * i, 30, 699 + 91 * i, 126, gray, 1);
	

	

	for (int r = 0; r < rowsNeededPlusExtra; r++)
	{
		for (int cascade = 0; cascade < numberOfCascades_; cascade++)
		{
			
				if (cascade <= 3)
				{
					grid.draw_image(40 + 120 * (cascade), 180 + 20 * (r), cardsInCascades[r][cascade].getImg());
				}
				else
				{
					grid.draw_image(580 + 120 * (cascade - 4), 180 + 20 * (r), cardsInCascades[r][cascade].getImg());
				}
			
			
		}

	}

	grid.display("Freecell");
}

void Tableau::printTableau()
{

	cout << endl;

	// display the cascade indices (!! one based)
	for (int i = 0; i < numberOfCascades_; i++)
	{
		cout << setw(WIDTH) << i + 1;
		cout << " ";
	}
	cout << endl;
	for (int i = 0; i < numberOfCascades_; i++)
	{
		cout << setw(WIDTH) << "--";
		cout << " ";
	}
	cout << endl;

	// display the cascades
	for (int r = 0; r < rowsNeededPlusExtra; r++)
	{
		

		// loop through a row and display its elements
		for (int cascade = 0; cascade < numberOfCascades_; cascade++)
		{
			
				// print the card
				cout << setw(WIDTH) << cardsInCascades[r][cascade].changeName();
				

			cout << " ";
		}
		cout << endl;

		
	} 

	cout << "Cards Remaining: " << cardsRemaining_ << endl;
}



	