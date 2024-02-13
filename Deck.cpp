#include <iostream>
#include "Card.cpp"

using namespace std;

// Deck class
class Deck {
	public:
		char cardNums[13] = {'1','2','3','4','5','6','7','8','9','T','J','Q','K'};
		char suits[4] = {'C','S','D','H'};
		Card fullDeck[52];
	
		Deck()
		{
			cout << "inside deck";
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 13; j++)
				{
					fullDeck[(i*13 + j)] = Card(cardNums[j], suits[i]);
				}
			}
		}
		
		//Card deal() {
		//}

		void display()
		{
			for (int i = 0; i < 4; i++)
			{
				for (int j = 0; j < 13; j++)
				{
					if (j < 12) {
						cout << fullDeck[(i*13 + j)].num << ", ";
					} else {
						cout << fullDeck[(i*13 + j)].num << "\n";
					}
				}
			}
		}
};
