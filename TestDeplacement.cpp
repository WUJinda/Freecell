#include <iostream>
using namespace std;

#include "CImg.h"
using namespace cimg_library;

#include <math.h>       /* floor */


int main() {


	
	// Declare an image
	CImg<unsigned char> image;
	// Load an image file into it
	image.load("lena.ppm");

	



	// Usefull colors
	unsigned char
		blanc_color[3]={200,200,200},
		grid_color[3] = { 0,0,255 },
		play1_color[3] = { 204,0,0 },
		play2_color[3] = { 0,102,0 };

	// Declare an image to draw the grid
	CImg<unsigned char> grid(900, 900, 1, 3, 255);			//x y z c(rvb) et val défaut ?
	for (int i = 1; i < 18; i++) grid.draw_line(0, 50 * i, 900, 50 * i, grid_color);
	for (int j = 1; j < 9; j++) grid.draw_line(100 * j, 0, 100 * j, 900, grid_color);

	// Declare a display to draw the scene
	CImgDisplay disp(grid, "freecell", 0, false, false);

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
		// Detect mouse click
		if (disp.button() & 1) { // Left button clicked.
			int i = floor(18.0 * disp.mouse_y() / disp.height());		//ok c'estcarrement dingo depuis le debut y'en avait 18..
			int j = floor(9.0* disp.mouse_x() / disp.width());


			//cout << i << "     " << 18.0 * disp.mouse_y() / (double)disp.height() << "    " << disp.mouse_y() / (double)disp.height() << "    " << disp.mouse_y() << "   " << (double)disp.height() << "   " << disp.height()<<endl;


			if (table[i][j] == 0) {
				// Player 1, draw circle
				if (player == 1) {

					scene.draw_image(j * 100, i * 50, 0, 0, image, 1);			//applique en permanance au dessus en couches // comment réduire taille ?
					//scene.draw_circle(50 + j * 100, 50 + i * 100, 40, play1_color, 1, ~0U);
					//scene.draw_line(10 + j * 100, 10 + i * 50, 90 + j * 100, 45 + i * 50, play1_color);
					//scene.draw_line(10 + j * 100, 45 + i * 50, 90 + j * 100, 10 + i * 50, play1_color);
					table[i][j] = 1;
				}
				// Player 2, draw cross
				else {
					scene.draw_line(5 + j * 100, 10 + i * 50, 90 + j * 100, 45 + i * 50, play2_color);
					scene.draw_line(5 + j * 100, 45 + i * 50, 90 + j * 100, 10 + i * 50, play2_color);
					table[i][j] = 2;
				}
				player = 3 - player;
			}
			// si on clique sur une case déjà colorée
			else {
				int attente = 1;
				while (attente!=0) {
					disp.wait();
					if (disp.button() & 1) {

						scene.draw_rectangle(1 + j * 100, 1 + i * 50, 95 + j * 100, 49 + i * 50, blanc_color, 1);



						int k = floor(18.0 * disp.mouse_y() / (double)disp.height());		//ok c'estcarrement dingo depuis le debut y'en avait 18..
						int l = floor(9.0* disp.mouse_x() / (double)disp.width());

						if (table[i][j] == 1) {
							scene.draw_line(10 + l * 100, 10 + k * 50, 90 + l * 100, 45 + k * 50, play1_color);
							scene.draw_line(10 + l * 100, 45 + k * 50, 90 + l * 100, 10 + k * 50, play1_color);
						}
						else {
							scene.draw_line(10 + l * 100, 10 + k * 50, 90 + l * 100, 45 + k * 50, play2_color);
							scene.draw_line(10 + l * 100, 45 + k * 50, 90 + l * 100, 10 + k * 50, play2_color);
						}



						table[k][l] = table[i][j];

						table[i][j] = 0;

						attente = 0;
					}

				}
				/*
				bool find_void = false;
				int *t = &table[0][0];
				for (int k = 0; !find_void && k < 9; k++) if (t[k] == 0) find_void = true;
				if (!find_void) {
					for (int k = 0; k < 9; k++) t[k] = 0;
					scene = grid;
				*/
				
			}
		}
		disp.wait();
		// Handle window resize
		if (disp.is_resized()) disp.resize();
	}


	return 0;
}


