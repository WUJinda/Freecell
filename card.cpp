#include "Card.h"



Card::Card()
{
	face_ = 123;
	suit_ = 'A';

}

CImg<unsigned char> const Card::getImg()
{	
	CImg<unsigned char> image;
	switch (face_)
	{
	case 1:
		switch (suit_) {
		case 'H':
			image.load("h01.ppm");
			break;
		case 'S':
			image.load("s01.ppm");
			break;
		case 'C':
			image.load("c01.ppm");
			break;
		case 'D':
			image.load("d01.ppm");
			break;
		}
		break;
	case 2:
		switch (suit_) {
		case 'H':
			image.load("h02.ppm");
			break;
		case 'S':
			image.load("s02.ppm");
			break;
		case 'C':
			image.load("c02.ppm");
			break;
		case 'D':
			image.load("d02.ppm");
			break;
		}
		break;
	case 3:
		switch (suit_) {
		case 'H':
			image.load("h03.ppm");
			break;
		case 'S':
			image.load("s03.ppm");
			break;
		case 'C':
			image.load("c03.ppm");
			break;
		case 'D':
			image.load("d03.ppm");
			break;
		}
		break;
	case 4:
		switch (suit_) {
		case 'H':
			image.load("h04.ppm");
			break;
		case 'S':
			image.load("s04.ppm");
			break;
		case 'C':
			image.load("c04.ppm");
			break;
		case 'D':
			image.load("d04.ppm");
			break;
		}
		break;
	case 5:
		switch (suit_) {
		case 'H':
			image.load("h05.ppm");
			break;
		case 'S':
			image.load("s05.ppm");
			break;
		case 'C':
			image.load("c05.ppm");
			break;
		case 'D':
			image.load("d05.ppm");
			break;
		}
		break;
	case 6:
		switch (suit_) {
		case 'H':
			image.load("h06.ppm");
			break;
		case 'S':
			image.load("s06.ppm");
			break;
		case 'C':
			image.load("c06.ppm");
			break;
		case 'D':
			image.load("d06.ppm");
			break;
		}
		break;
	case 7:
		switch (suit_) {
		case 'H':
			image.load("h07.ppm");
			break;
		case 'S':
			image.load("s07.ppm");
			break;
		case 'C':
			image.load("c07.ppm");
			break;
		case 'D':
			image.load("d07.ppm");
			break;
		}
		break;
	case 8:
		switch (suit_) {
		case 'H':
			image.load("h08.ppm");
			break;
		case 'S':
			image.load("s08.ppm");
			break;
		case 'C':
			image.load("c08.ppm");
			break;
		case 'D':
			image.load("d08.ppm");
			break;
		}
		break;
	case 9:
		switch (suit_) {
		case 'H':
			image.load("h09.ppm");
			break;
		case 'S':
			image.load("s09.ppm");
			break;
		case 'C':
			image.load("c09.ppm");
			break;
		case 'D':
			image.load("d09.ppm");
			break;
		}
		break;
	case 10:
		switch (suit_) {
		case 'H':
			image.load("h10.ppm");
			break;
		case 'S':
			image.load("s10.ppm");
			break;
		case 'C':
			image.load("c10.ppm");
			break;
		case 'D':
			image.load("d10.ppm");
			break;
		}
		break;
	case 11:
		switch (suit_) {
		case 'H':
			image.load("h11.ppm");
			break;
		case 'S':
			image.load("s11.ppm");
			break;
		case 'C':
			image.load("c11.ppm");
			break;
		case 'D':
			image.load("d11.ppm");
			break;
		}
		break;
	case 12:
		switch (suit_) {
		case 'H':
			image.load("h12.ppm");
			break;
		case 'S':
			image.load("s12.ppm");
			break;
		case 'C':
			image.load("c12.ppm");
			break;
		case 'D':
			image.load("d12.ppm");
			break;
		}
		break;
	case 13:
		switch (suit_) {
		case 'H':
			image.load("h13.ppm");
			break;
		case 'S':
			image.load("s13.ppm");
			break;
		case 'C':
			image.load("c13.ppm");
			break;
		case 'D':
			image.load("d13.ppm");
			break;
		}
		break;
	}
	return image;
}

void Card::setElements(int face, char suit)
{
	face_ = face;
	suit_ = suit;

}

char Card::getColor() const
{
	if(suit_ == 'H' || suit_ == 'D')	return 'R';
	else if (suit_ == 'S' || suit_ == 'C')	return 'B';
	else return 0;

}

string Card::changeName()
{

	string name = "";
	switch (face_) {
	case 1:
		name = "A";
		break;
	case 10:
		name = "T";
		break;
	case 11:
		name = "J";
		break;
	case 12:
		name = "Q";
		break;
	case 13:
		name = "K";
		break;
	}
	name += suit_;
	return name;
}


