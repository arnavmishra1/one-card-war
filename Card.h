#include <iostream>

using namespace std;

class Card {
	public:

		char num;
		char suit;
		Card();
		Card(char, char);
		void display();
		int compare(Card);
};
