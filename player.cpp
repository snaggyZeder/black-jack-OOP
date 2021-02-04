#include"deck.h"
#include"card.h"
#include<vector>
#include"hand.h"
#include"player.h"
#include <string>
#include <iostream>
using namespace std;


void Player::playp1(Deck& fDeck) {
	char choice = '~';
	int score = 0;

	takeOneCard(fDeck);
	score = calculateScore();
	cout << "Player1 summ is =" << score << endl;
	cout << "Player1 do you want 1 more card ?" << score << endl;

	do { cout << " (enter your choice, y - yes, n - no) "; cout << endl;  cin >> choice; }
	while (choice != 'y' && choice != 'n');

	while (choice == 'y') {
		takeOneCard(fDeck);
		printHand();
		score = calculateScore();
		cout << "Player1 summ is =" << score << endl;
		cout << endl;

		if (score >= 21) { break; }
	}

			do { cout << " (enter your choice, y - yes, n - no) "; cout << endl;  cin >>choice;}
			while (choice!='y' && choice!='n');
			
			if (choice == 'n') { cout << "its final sum of your cards player1 =" <<score<< endl; cout << endl; break; }
	
}

void Player::playp2(Deck& fDeck) {
	char choice = '~';
	int score = 0;

	takeOneCard(fDeck);
	score = calculateScore();
	cout << "Player2 summ is =" << score << endl;
	cout << "Player2 do you want 1 more card ?" << score << endl;

	do { cout << " (enter your choice, y - yes, n - no) "; cout << endl;  cin >> choice; } while (choice != 'y' && choice != 'n');

	while (choice == 'y') {
		takeOneCard(fDeck);
		printHand();
		score = calculateScore();
		cout << "Player2 summ is =" << score << endl;
		cout << endl;

		if (score >= 21) { break; }
	}

	do { cout << " (enter your choice, y - yes, n - no) "; cout << endl;  cin >> choice; } 
	while (choice != 'y' && choice != 'n');
	if (choice == 'n') { cout << "its final sum of your cards player1 =" << score << endl; cout << endl; break; }

}