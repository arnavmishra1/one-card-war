#ifndef CARD_H
#define CARD_H

#include <iostream>

using namespace std;

class Card {
	private:
		char rank;
		char suit;
	public:
		Card(char, char);
		void display();
		int compare(Card);
};
#endif