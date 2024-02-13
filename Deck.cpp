#include <iostream>
#include "Card.h"
#include "Deck.h"

using namespace std;

Deck::Deck() {

	ranks = {'1','2','3','4','5','6','7','8','9','T','J','Q','K'};
	suits = {'C','S','D','H'};
	
	for (int i = 0; i < 4; i++)
		{
			for (int j = 0; j < 13; j++)
			{
				myDeck.push_back(Card(ranks[j], suits[i]));
			}
		}
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
};