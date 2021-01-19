#include"deck.h"
#include"card.h"
#include<vector>
#include"hand.h"
#include"player.h"
#include <string>
using namespace std;

void Player::play(Deck& fDeck) {
	char choice = 'y';
	/*currentCard = 0;
	int sumOfRankPlayer1 = 0;*/
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