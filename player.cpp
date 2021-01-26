#include"deck.h"
#include"card.h"
#include<vector>
#include"hand.h"
#include"player.h"
#include <string>
#include <iostream>
using namespace std;


void Player::playp(Deck& fDeck) {
	char choice = 'y';
	int score = 0;

	while (choice == 'y') {
			takeOneCard(fDeck);
			printHand();
			score = score + calculateScore();
			cout << "Your summ is " << score << endl;
		
			if (score >= 21) { break; }
			do { cout << " (enter your choice, y - yes, n - no) ";  cin >>choice;}
			while (choice!='y' && choice!='n');
			if (choice == 'n') { cout << "its final sum " << endl; break; }
	}
}