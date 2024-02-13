#include <iostream>
#include "Card.h"

using namespace std;

Card::Card(char r, char s) {
	rank = r;
	suit = s;
}

void Card::display() {
	cout << rank << suit;
}

int Card::compare(Card other) {
	if (rank > other.rank) {
		return 1;
	} else if (rank == other.rank) {
		return 0;
	} else {
		return -1;
	}
}
