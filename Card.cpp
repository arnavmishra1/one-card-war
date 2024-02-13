#include <iostream>

using namespace std;

// Card class
class Card {
	public:
		char num;
		char suit;
		
		Card() {
			num = NULL;
			suit = NULL;
		}
		Card(char n, char s) {
			num = n;
			suit = s;
		}

		void display() {
			cout << num << suit;
		}

		int compare(Card other) {
			if (num > other.num) {
				return 1;
			} else if (num == other.num) {
				return 0;
			} else {
				return -1;
			}
		}
};
