#include <iostream>

#include "Card.h"

class Deck {
	public:
		Deck();
		//Card deal();
		void display();
		//void shuffle();

		char cardNumbs[];
		char suits[];
		Card fullDeck[];
};
