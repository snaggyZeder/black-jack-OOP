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
	Hand::GameStatus currentGameStatus = Hand::GAME_CONTINUE;

	takeOneCard(fDeck);
	printHand();
	score = calculateScore();
	cout << "Player1 summ is =" << score << endl;
	cout << endl;

	do { cout << " (enter your choice, y - yes, n - no) ";  cin >> choice; } while (choice != 'y' && choice != 'n');

	if (choice == 'n') { cout << "its final sum of your cards player1 =" << score << endl; cout << endl; }

	while (choice == 'y') {
		takeOneCard(fDeck);
		printHand();
		score = calculateScore();
		cout << "Player1 summ is =" << score << endl;
		cout << endl;

		if (score >= 21) { break; }
		do { cout << " (enter your choice, y - yes, n - no) ";  cin >> choice; } while (choice != 'y' && choice != 'n');

		
		
			}
	}


void Player::playp2(Deck& fDeck) {
	char choice = '~';
	int score = 0;
	Hand::GameStatus currentGameStatus = Hand::GAME_CONTINUE;

	takeOneCard(fDeck);
	printHand();
	score = calculateScore();
	cout << "Player2 summ is =" << score << endl;
	cout << endl;

	do { cout << " (enter your choice, y - yes, n - no) ";  cin >> choice; } while (choice != 'y' && choice != 'n');

	if (choice == 'n') { cout << "its final sum of your cards player2 =" << score << endl; cout << endl; }

	while (choice == 'y') {
		takeOneCard(fDeck);
		printHand();
		score = calculateScore();
		cout << "Player2 summ is =" << score << endl;
		cout << endl;

		if (score >= 21) { break; }
		do { cout << " (enter your choice, y - yes, n - no) ";  cin >> choice; } while (choice != 'y' && choice != 'n');



	}
}