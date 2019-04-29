
#include <iostream>
using namespace std;

#include "CImg.h"
using namespace cimg_library;

#include <math.h>       /* floor */



int main() {



	// Usefull colors
	unsigned char
		blanc_color[3] = { 200,200,200 },
		grid_color[3] = { 0,0,255 },
		play1_color[3] = { 204,0,0 },
		play2_color[3] = { 0,102,0 };

	// Declare an image to draw the grid
	CImg<unsigned char> grid(900, 900, 1, 3, 255);			//x y z c(rvb) et val défaut ?
	for (int i = 1; i < 18; i++) grid.draw_line(0, 50 * i, 900, 50 * i, grid_color);
	for (int j = 1; j < 9; j++) grid.draw_line(100 * j, 0, 100 * j, 900, grid_color);

	// Declare a display to draw the scene
	CImgDisplay disp(grid, "freecelle", 0, false, false);

	// Center the window on the screen
	disp.move((CImgDisplay::screen_width() - disp.width()) / 2,
		(CImgDisplay::screen_height() - disp.height()) / 2);

	// Declare an image to display the scene
	CImg<unsigned char> scene = grid;

	// Usefull variables
	int player = 1;
	int table[15][9] = { 0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0, 0,0,0,0,0,0,0,0,0, };

	// Main loop, exit if the display window is closed or if ESC or Q key is hit
	while (!disp.is_closed() && !disp.is_keyESC() && !disp.is_keyQ()) {
		// Display the scene
		scene.display(disp);

		if (disp.button() & 1) {
			cout << "enfoncé" << endl;
		}

		if (!(disp.button() & 1)) {							
			cout << "relaché" << endl;				//ok great ça marche c'est génial
		}

		if (disp.button() & 2) {
			cout << "droite" << endl;				//ok pour retour arrière ?  ou click gauche dans une zone spéciale ? ex même zone ?
		}
	}

}