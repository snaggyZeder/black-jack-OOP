#include"deck.h"
#include"card.h"
#include<vector>
#include"hand.h"
#include"player.h"
#include <string>
using namespace std;

void Player::playp(Deck& fDeck) {
	char choice = 'y';
	while (choice != 'n') {
		//взять карту с колоды в руку
		takeOneCard(fDeck);
		//печатаем руку
		printHand();
		//выводим счет и просим поьзователя принять решение о ходе иры
		cout << "Your summ is " << calculateScore() << endl;
		cout << "Do you want another card?";
		cout << " (enter your choice, y - yes, n - no) ";
		//считываем ответ игрока
		cin >> choice;
		
	}
}

//void Player::playp(Deck& fDeck) {
//	char choice = 'y';
//	int score = 0;
//
//	while (score<21) {
//		//взять карту с колоды в руку
//		takeOneCard(fDeck);
//		//печатаем руку
//		printHand();
//		//выводим счет и просим поьзователя принять решение о ходе иры
//		cout << "Your summ is " << calculateScore() << endl;
//		cout << "Do you want another card?";
//		cout << " (enter your choice, y - yes, n - no) ";
//		cin >> choice;
//		if (choice != 'y') {
//			takeOneCard(fDeck);
//			printHand();
//			cout << "Your summ is " << calculateScore() << endl;
//			cin >> choice;
//		}
//		else if (choice != 'n') {
//			printHand();
//			cout << "Your summ is .you cant take more" << calculateScore() << endl;
//		}
//
//	}
//}