#include <iostream>
#include <vector>
#include "Card.h"
#include "Deck.h"

using namespace std;

Deck::Deck() {

	char suits[4] = {'C','S','D','H'};
	char ranks[13] = {'1','2','3','4','5','6','7','8','9','T','J','Q','K'};
	
	for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 13; j++)
			{
				myDeck.push_back(Card(ranks[j], suits[i]));
			}
		}
}

Card Deck::deal() {
	Card temp = myDeck[0];
	myDeck.erase(myDeck.begin());
	return temp;

}

void Deck::display()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			if (j < 12) {
				myDeck[(i*13 + j)].display();
				cout << ", ";
			} else {
				myDeck[(i*13 + j)].display();
				cout  << "\n";
			}
		}
	}
}

void Deck::shuffle() {
	
}