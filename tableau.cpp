#include "Tableau.h"

using namespace std;
using namespace cimg_library;

Tableau::Tableau()
{
}

void Tableau::drawTableau()
{
	CImg<unsigned char> grid;
	unsigned char back_color[3] = { 0,160,0 };
	grid.assign(1060, 800, 1, 3, 200);
	grid.draw_fill(0, 0, back_color);

	unsigned char black[3] = { 0,0,0 };
	unsigned char gray[3] = { 110,110,110 };
	grid.draw_text(30, 700, "Cards Remaining : ", black, 0, 1, 25);


	for (int i = 0; i < 4; i++) grid.draw_rectangle(108 + 91 * i, 30, 179 + 91 * i, 126, gray, 1);
	for (int i = 0; i < 4; i++) grid.draw_rectangle(628 + 91 * i, 30, 699 + 91 * i, 126, gray, 1);
	
	//for (int i = 0; i < 9; i++)
	//{
	//	vector<Card> tempvec;
	//	for (int j = 0; j < 4; j++)
	//	{
	//		Card tempcard;
	//		tempcard.setElements(i,'H');
	//		tempvec.push_back(tempcard);
	//	}
	//	tableau_.push_back(tempvec);
	//}
	
	

	for (int i = 0; i < (int)tableau_.size(); i++)
	{
		for (int j = 0; j < (int)tableau_[i].size(); j++)
		{
			
			grid.draw_image(105 + 90 * i, 200 + 20 * j, tableau_[i][j].getImg());
		}
		
	}


	grid.display("Freecell");
}

void Tableau::randomize()

{

	Card c1H;
	c1H.setElements(1, 'H');
	Card c2H;
	c2H.setElements(2, 'H');
	Card c3H;
	c3H.setElements(3, 'H');
	Card c4H;
	c4H.setElements(4, 'H');
	Card c5H;
	c5H.setElements(5, 'H');
	Card c6H;
	c6H.setElements(6, 'H');
	Card c7H;
	c7H.setElements(7, 'H');
	Card c8H;
	c8H.setElements(8, 'H');
	Card c9H;
	c9H.setElements(9, 'H');
	Card cTH;
	cTH.setElements(10, 'H');
	Card cJH;
	cJH.setElements(11, 'H');
	Card cQH;
	cQH.setElements(12, 'H');
	Card cKH;
	cKH.setElements(13, 'H');

	Card c1S;
	c1S.setElements(1, 'S');
	Card c2S;
	c2S.setElements(2, 'S');
	Card c3S;
	c3S.setElements(3, 'S');
	Card c4S;
	c4S.setElements(4, 'S');
	Card c5S;
	c5S.setElements(5, 'S');
	Card c6S;
	c6S.setElements(6, 'S');
	Card c7S;
	c7S.setElements(7, 'S');
	Card c8S;
	c8S.setElements(8, 'S');
	Card c9S;
	c9S.setElements(9, 'S');
	Card cTS;
	cTS.setElements(10, 'S');
	Card cJS;
	cJS.setElements(11, 'S');
	Card cQS;
	cQS.setElements(12, 'S');
	Card cKS;
	cKS.setElements(13, 'S');

	Card c1C;
	c1C.setElements(1, 'C');
	Card c2C;
	c2C.setElements(2, 'C');
	Card c3C;
	c3C.setElements(3, 'C');
	Card c4C;
	c4C.setElements(4, 'C');
	Card c5C;
	c5C.setElements(5, 'C');
	Card c6C;
	c6C.setElements(6, 'C');
	Card c7C;
	c7C.setElements(7, 'C');
	Card c8C;
	c8C.setElements(8, 'C');
	Card c9C;
	c9C.setElements(9, 'C');
	Card cTC;
	cTC.setElements(10, 'C');
	Card cJC;
	cJC.setElements(11, 'C');
	Card cQC;
	cQC.setElements(12, 'C');
	Card cKC;
	cKC.setElements(13, 'C');

	Card c1D;
	c1D.setElements(1, 'D');
	Card c2D;
	c2D.setElements(2, 'D');
	Card c3D;
	c3D.setElements(3, 'D');
	Card c4D;
	c4D.setElements(4, 'D');
	Card c5D;
	c5D.setElements(5, 'D');
	Card c6D;
	c6D.setElements(6, 'D');
	Card c7D;
	c7D.setElements(7, 'D');
	Card c8D;
	c8D.setElements(8, 'D');
	Card c9D;
	c9D.setElements(9, 'D');
	Card cTD;
	cTD.setElements(10, 'D');
	Card cJD;
	cJD.setElements(11, 'D');
	Card cQD;
	cQD.setElements(12, 'D');
	Card cKD;
	cKD.setElements(13, 'D');


	vector<Card> vecDefault = {
		c1C,c1D,c1H,c1S,
		c2C,c2D,c2H,c2S,
		c3C,c3D,c3H,c3S,
		c4C,c4D,c4H,c4S,
		c5C,c5D,c5H,c5S,
		c6C,c6D,c6H,c6S,
		c7C,c7D,c7H,c7S,
		c8C,c8D,c8H,c8S,
		c9C,c9D,c9H,c9S,
		cTC,cTD,cTH,cTS,
		cJC,cJD,cJH,cJS,
		cQC,cQD,cQH,cQS,
		cKC,cKD,cKH,cKS,
	};

	srand(time(NULL));


	for (int i = 0; i < 52; i++)
	{
		Card tempcard;
		int num = 0;
		num = rand() % 52;

		tempcard = vecDefault[i];
		vecDefault[i] = vecDefault[num];
		vecDefault[num] = tempcard;

	}

	for (int i = 0; i < 52; i++)
	{
		vector<Card>::iterator it;
		vector<vector<Card>>::iterator itt;
		vector<Card> tempvec;
		for (it = tempvec.begin(); it != tempvec.end(); it++)
		{
			tempvec.push_back(vecDefault[i]);
			for (itt = tableau_.begin(); itt != tableau_.end(); itt++)
			{
				tableau_[i].push_back(tempvec[i]);
			}

		}

	}

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			cout << tableau_[i][j].getFace()<<tableau_[i][j].getSuit()<<" ";
		}
		cout << endl;

	}


}

