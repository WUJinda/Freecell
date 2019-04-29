#include "Carte.h"



Carte::Carte(CImg<float> image, int valeur, char caracteristique, int couleur, int positionX, int positionY)
{
	image_ = image;
	valeur_ = valeur;
	caracteristique_ = caracteristique;
	couleur_ = couleur;
	positionX_ = positionX;
	positionY_ = positionY;
}

Carte::~Carte()
{

}
