#ifndef _CARD_H
#define _CARD_H
#include<iostream>
#include<vector>
#include"CImg.h"

#pragma once
using namespace std;
using namespace cimg_library;

class Card
{
	int face_;
	char suit_;
public:
	Card();
	int getFace() const { return face_; }
	char getSuit() const { return suit_; }
	CImg<unsigned char> const getImg();
	void setElements(int face, char suit);
	char getColor() const;


	void print() const { cout << face_ << suit_; };
	string changeName();

};

#endif
