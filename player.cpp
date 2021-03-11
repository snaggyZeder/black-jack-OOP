#include"deck.h"
#include"card.h"
#include<vector>
#include"hand.h"
#include"player.h"
#include <string>
#include <iostream>
using namespace std;


void Player::playp1(Deck& fDeck, sf::RenderWindow& window) {
	char choice = 'y';
	int score = 0;

	//do { cout << " (enter your choice, y - yes, n - no) ";  cin >> choice; } while (choice != 'y' && choice != 'n');

	while (choice == 'y') {
		takeOneCard(fDeck);
		printHand();
		drawHand(window);
		score = calculateScore();
		cout << "Player1 summ is =" << score << endl;
		cout << endl;

		if (score >= 21) { break; }
		do { cout << " (enter your choice, y - yes, n - no) ";  cin >> choice; } while (choice != 'y' && choice != 'n');

		
		
			}
	}


void Player::playp2(Deck& fDeck, sf::RenderWindow& window) {
	char choice = 'y';
	int score = 0;

	//do { cout << " (enter your choice, y - yes, n - no) ";  cin >> choice; } while (choice != 'y' && choice != 'n');

	while (choice == 'y') {
		takeOneCard(fDeck);
		printHand();
		drawHand(window);
		score = calculateScore();
		cout << "Player2 summ is =" << score << endl;
		cout << endl;

		if (score >= 21) { break; }
		do { cout << " (enter your choice, y - yes, n - no) ";  cin >> choice; } while (choice != 'y' && choice != 'n');



	}
}



void Player::playp3(Deck& fDeck, sf::RenderWindow& window) {
	char choice = 'y';
	int score = 0;

	//do { cout << " (enter your choice, y - yes, n - no) ";  cin >> choice; } while (choice != 'y' && choice != 'n');

	while (choice == 'y') {
		takeOneCard(fDeck);
		printHand();
		drawHand(window);
		score = calculateScore();
		cout << "Player3 summ is =" << score << endl;
		cout << endl;

		if (score >= 21) { break; }
		do { cout << " (enter your choice, y - yes, n - no) ";  cin >> choice; } while (choice != 'y' && choice != 'n');



	}
}