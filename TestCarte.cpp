#include "Carte.h"
#include "Coordonnee.h"
#include <iostream>
using namespace std;

/*
int main()
{

	// Declare an image
	CImg<unsigned char> image;
	// Load an image file into it
	image.load("lena.ppm");



	Carte c(image);			//arguments par défaut pour autres
	cout << endl << c.getValeur() << endl << c.getPositionX() << endl << c.getPositionY() << endl << c.getCaracteristique() << endl << c.getCouleur();

	// Declare a 2nd image
	CImg<unsigned char> image2;

	image2 = c.getImage();

	// Declare a display and dispay the image into it
	CImgDisplay disp(image2, "Image");


	int i;
	while (true) { i = 1; }

	return 0;
}
*/


void desordonneEntiers52 (int tableau[52])
{
	srand(time(NULL));
	
	// crée tableau 52 premieres cartes triees
	for (int i = 0; i < 52; i++) {
		tableau[i] = i;
	}
	int indiceAlea = 0;
	int temp = 0;
	for (int i = 0; i < 52; i++) {
		indiceAlea = rand() % 52;
		// echange des cases i et indiceAlea
		temp = tableau[i];
		tableau[i] = tableau[indiceAlea];
		tableau[indiceAlea] = temp;
	}
}





int main()
{

	// Declare an image
	CImg<unsigned char> dosBleu;
	// Load an image file into it
	dosBleu.load("b1fv.ppm");


	Carte c(dosBleu);




	// Declare an image
	CImg<unsigned char> blanc;
	// Load an image file into it
	blanc.load("blank.ppm");


	Carte blanche (blanc);






	
	CImg<unsigned char> s01;
	s01.load("s01.ppm");
	CImg<unsigned char> s02;
	s02.load("s02.ppm");
	CImg<unsigned char> s03;
	s03.load("s03.ppm");
	CImg<unsigned char> s04;
	s04.load("s04.ppm");
	CImg<unsigned char> s05;
	s05.load("s05.ppm");
	CImg<unsigned char> s06;
	s06.load("s06.ppm");
	CImg<unsigned char> s07;
	s07.load("s07.ppm");
	CImg<unsigned char> s08;
	s08.load("s08.ppm");
	CImg<unsigned char> s09;
	s09.load("s09.ppm");
	CImg<unsigned char> s10;
	s10.load("s10.ppm");
	CImg<unsigned char> s11;
	s11.load("s11.ppm");
	CImg<unsigned char> s12;
	s12.load("s12.ppm");
	CImg<unsigned char> s13;
	s13.load("s13.ppm");




	CImg<unsigned char> d01;
	d01.load("d01.ppm");
	CImg<unsigned char> d02;
	d02.load("d02.ppm");
	CImg<unsigned char> d03;
	d03.load("d03.ppm");
	CImg<unsigned char> d04;
	d04.load("d04.ppm");
	CImg<unsigned char> d05;
	d05.load("d05.ppm");
	CImg<unsigned char> d06;
	d06.load("d06.ppm");
	CImg<unsigned char> d07;
	d07.load("d07.ppm");
	CImg<unsigned char> d08;
	d08.load("d08.ppm");
	CImg<unsigned char> d09;
	d09.load("d09.ppm");
	CImg<unsigned char> d10;
	d10.load("d10.ppm");
	CImg<unsigned char> d11;
	d11.load("d11.ppm");
	CImg<unsigned char> d12;
	d12.load("d12.ppm");
	CImg<unsigned char> d13;
	d13.load("d13.ppm");



	CImg<unsigned char> c01;
	c01.load("c01.ppm");
	CImg<unsigned char> c02;
	c02.load("c02.ppm");
	CImg<unsigned char> c03;
	c03.load("c03.ppm");
	CImg<unsigned char> c04;
	c04.load("c04.ppm");
	CImg<unsigned char> c05;
	c05.load("c05.ppm");
	CImg<unsigned char> c06;
	c06.load("c06.ppm");
	CImg<unsigned char> c07;
	c07.load("c07.ppm");
	CImg<unsigned char> c08;
	c08.load("c08.ppm");
	CImg<unsigned char> c09;
	c09.load("c09.ppm");
	CImg<unsigned char> c10;
	c10.load("c10.ppm");
	CImg<unsigned char> c11;
	c11.load("c11.ppm");
	CImg<unsigned char> c12;
	c12.load("c12.ppm");
	CImg<unsigned char> c13;
	c13.load("c13.ppm");



	CImg<unsigned char> h01;
	h01.load("h01.ppm");
	CImg<unsigned char> h02;
	h02.load("h02.ppm");
	CImg<unsigned char> h03;
	h03.load("h03.ppm");
	CImg<unsigned char> h04;
	h04.load("h04.ppm");
	CImg<unsigned char> h05;
	h05.load("h05.ppm");
	CImg<unsigned char> h06;
	h06.load("h06.ppm");
	CImg<unsigned char> h07;
	h07.load("h07.ppm");
	CImg<unsigned char> h08;
	h08.load("h08.ppm");
	CImg<unsigned char> h09;
	h09.load("h09.ppm");
	CImg<unsigned char> h10;
	h10.load("h10.ppm");
	CImg<unsigned char> h11;
	h11.load("h11.ppm");
	CImg<unsigned char> h12;
	h12.load("h12.ppm");
	CImg<unsigned char> h13;
	h13.load("h13.ppm");




	//crées sur le tas ?
	
	Carte h01_(h01, 1, 'r' ,1);
	Carte h02_(h02, 2, 'r', 1);
	Carte h03_(h03, 3, 'r', 1);
	Carte h04_(h04, 4, 'r', 1);
	Carte h05_(h05, 5, 'r', 1);
	Carte h06_(h06, 6, 'r', 1);
	Carte h07_(h07, 7, 'r', 1);
	Carte h08_(h08, 8, 'r', 1);
	Carte h09_(h09, 9, 'r', 1);
	Carte h10_(h10, 10, 'r', 1);
	Carte h11_(h11, 11, 'r', 1);
	Carte h12_(h12, 12, 'r', 1);
	Carte h13_(h13, 13, 'r', 1);

	Carte s01_(s01, 1, 'b', 0);
	Carte s02_(s02, 2, 'b', 0);
	Carte s03_(s03, 3, 'b', 0);
	Carte s04_(s04, 4, 'b', 0);
	Carte s05_(s05, 5, 'b', 0);
	Carte s06_(s06, 6, 'b', 0);
	Carte s07_(s07, 7, 'b', 0);
	Carte s08_(s08, 8, 'b', 0);
	Carte s09_(s09, 9, 'b', 0);
	Carte s10_(s10, 10, 'b', 0);
	Carte s11_(s11, 11, 'b', 0);
	Carte s12_(s12, 12, 'b', 0);
	Carte s13_(s13, 13, 'b', 0);

	Carte d01_(d01, 1, 'r', 0);
	Carte d02_(d02, 2, 'r', 0);
	Carte d03_(d03, 3, 'r', 0);
	Carte d04_(d04, 4, 'r', 0);
	Carte d05_(d05, 5, 'r', 0);
	Carte d06_(d06, 6, 'r', 0);
	Carte d07_(d07, 7, 'r', 0);
	Carte d08_(d08, 8, 'r', 0);
	Carte d09_(d09, 9, 'r', 0);
	Carte d10_(d10, 10, 'r', 0);
	Carte d11_(d11, 11, 'r', 0);
	Carte d12_(d12, 12, 'r', 0);
	Carte d13_(d13, 13, 'r', 0);

	Carte c01_(c01, 1, 'b', 0);
	Carte c02_(c02, 2, 'b', 0);
	Carte c03_(c03, 3, 'b', 0);
	Carte c04_(c04, 4, 'b', 0);
	Carte c05_(c05, 5, 'b', 0);
	Carte c06_(c06, 6, 'b', 0);
	Carte c07_(c07, 7, 'b', 0);
	Carte c08_(c08, 8, 'b', 0);
	Carte c09_(c09, 9, 'b', 0);
	Carte c10_(c10, 10, 'b', 0);
	Carte c11_(c11, 11, 'b', 0);
	Carte c12_(c12, 12, 'b', 0);
	Carte c13_(c13, 13, 'b', 0);

	//tableau de toutes les cartes

	Carte tableau[4][13] = { h01_,h02_,h03_,h04_,h05_,h06_,h07_,h08_,h09_,h10_,h11_,h12_,h13_,s01_,s02_,s03_,s04_,s05_,s06_,s07_,s08_,s09_,s10_,s11_,s12_,s13_,d01_,d02_,d03_,d04_,d05_,d06_,d07_,d08_,d09_,d10_,d11_,d12_,d13_,c01_ , c02_ , c03_, c04_,c05_,c06_,c07_,c08_,c09_,c10_,c11_,c12_,c13_ };

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			cout << (tableau[i][j].getValeur());
		}
		cout << endl;
	}
	/*

	//créer tableau aléatoire (7*4 6*4)
	Carte alea[3]{ blanche,blanche,blanche };

	for (int i = 0; i < 3; i++) {
			cout << (alea[i].getValeur());
	
		cout << endl;
	}
	*/


	
	Carte alea[13][8]{ c06_ };			//rempli tout le tableau avec 1ere carte: c06_ et toutes les suivantes : carte par défaut -> carte vide. à l'affichage, pas de supperposition, véritablement vide !!

	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 8; j++) {
			cout << (alea[i][j].getValeur());
		}
		cout << endl;
	}

	
	int tab[52];
	desordonneEntiers52(tab);
	

	for (int i = 0; i < 52; i++) {
		alea[i / 8][ i % 8] = tableau[tab[i] / 13][tab[i] % 13];			//la case suivante d'alea à initialiser reçoit la "tab[i]"eme moralement carte triée 
	}
	
	for (int i = 0; i < 52; i++) {
			cout << tab[i]<<endl;
		}
	

	for (int i = 0; i < 13; i++) {
		for (int j = 0; j < 8; j++) {
			cout << (alea[i][j].getValeur());
		}
		cout << endl;
	}
	
	/*

	// Declare a 2nd image
	CImg<unsigned char> image2;

	image2 = s01_.getImage();

	// Declare a display and dispay the image into it
	CImgDisplay disp(image2, "Image");
	*/


	/////////////////////// affichage images

	
	// Usefull colors
	unsigned char
		blanc_color[3] = { 200,200,200 },
		grid_color[3] = { 0,0,255 },
		play1_color[3] = { 204,0,0 },
		play2_color[3] = { 0,102,0 };

	// Declare an image to draw the grid
	CImg<unsigned char> image1(800, 700, 1, 3,  0 );			//x y z c(rvb) et val défaut ?
	
	
	for (int i = 1; i < 18; i++) image1.draw_line(0, 50 * i, 800, 50 * i, grid_color);
	for (int j = 1; j < 8; j++) image1.draw_line(100 * j, 0, 100 * j, 800, grid_color);
	


	// Declare a display to draw the scene
	CImgDisplay disp(image1, "freecell", 0, false, false);
	
	for (int j = 0; j < 4; j++) {
		image1.draw_image(50 + j * 70, 0 * 30, 0, 0, dosBleu, 1);

	}
	for (int j = 0; j < 4; j++) {
		image1.draw_image(450 + j * 70, 0 * 30, 0, 0, dosBleu, 1);

	}
	


	for (int j = 0; j < 8; j++) {
		for (int i = 4; i < 12; i++) {
			image1.draw_image(j * 100, i * 30, 0, 0, (alea[i-4][j]).getImage(), 1);
		}
	}

	// Center the window on the screen
	disp.move((CImgDisplay::screen_width() - disp.width()) / 2,
		(CImgDisplay::screen_height() - disp.height()) / 2);


	// Main loop, exit if the display window is closed or if ESC or Q key is hit
	while (!disp.is_closed() && !disp.is_keyESC() && !disp.is_keyQ()) {
		// Display the scene
		image1.display(disp);


		///////// clique

		int tabRemplissage[13]{ 2, 0, 1, 5, 0, 0, 1, 1, 0, 0, 1, 1, 0 };		//{ 2, 7, 7, 7, 7, 6, 6, 6, 6, 0, 1, 1,0 };
		
		
		
		
		int numero = -1;

		if (disp.button() & 1) { // Left button clicked.
			//cout << endl << "x: " << disp.mouse_x() << "  largeur :  "<< disp.width() << endl <<"y : "<< disp.mouse_y() <<"   " << "hauteur : " << disp.height() << endl;

			int val1 = 0;
			//while (!disp.is_closed() && !disp.is_keyESC() && !disp.is_keyQ() && numero == -1) {				//tant sue la 1ere saisie n'est pas valide


				int y = disp.mouse_y();
				int x = disp.mouse_x();
				


				//cout << endl << " x/100 : " << x / 100 << endl << y << endl;
				//int i = -1;
				Coordonnee coord(tabRemplissage, x, y);


				//int numero = coord.carteAssociee();
				numero = coord.saisie1();
				cout << endl << "							1ere carte carte associee numero " << numero << endl;


				while (!disp.is_closed() && !disp.is_keyESC() && !disp.is_keyQ() && val1 == 0) {
					if (!(disp.button() & 1)) {
						val1 = 1;
					}
				}
			//}

			int val = 0;

			while (!disp.is_closed() && !disp.is_keyESC() && !disp.is_keyQ()&&val==0) {
				if (!(disp.button() & 1)) {
					val = 1;
					while (!disp.is_closed() && !disp.is_keyESC() && !disp.is_keyQ()&&val==1) {
						if (disp.button() & 1) {
							
							int y2 = disp.mouse_y();
							int x2 = disp.mouse_x();
							Coordonnee coord2(tabRemplissage, x2, y2);
							int numero2 = coord2.saisie2();
							cout << endl << "							2eme carte carte associee numero " << numero2 << endl;

							while (!disp.is_closed() && !disp.is_keyESC() && !disp.is_keyQ() && val == 1) {
								if (!(disp.button() & 1)) {
									val = 2;
								}
							}
						}
					
					}
				}
			}
			val = 0;
		}

		///////////

		// Handle window resize
		if (disp.is_resized()) disp.resize();
	}



	


	int k;
	while (true) { k=1 ; }


}






