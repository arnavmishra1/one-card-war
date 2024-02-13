// Author: Arnav Mishra
// CECS 325-02 Prog 1
// Due idk im doing this 2 weeks early for some reason

#include <iostream>
#include "Deck.h"
#include "Card.h"

using namespace std;

int main() {
	Deck myDeck;

	string p1;
	string p2;

	cout << "Enter the name of the first player: ";
	getline(cin, p1);
	cout << "Enter the name of the second player: ";
	getline(cin, p2);
	cout << endl;

	cout << "minecraft";
	
	myDeck.display();
	return 0;
}
