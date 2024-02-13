#ifndef DECK_H
#define DECK_H

#include <iostream>
#include "Card.h"
#include <vector>

using namespace std;

class Deck {
	private:
		vector<Card> myDeck;
	public:
		Deck();
		Card deal();
		void display();
		void shuffle();
};
#endif