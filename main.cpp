#include"deck.h"
#include"card.h"
#include"player.h"
#include"dialer.h"
#include"hand.h"
#include <iostream>

using namespace std;

int main() {
	Deck my_deck;
	my_deck.shuffle();//тусуем
	//my_deck.print_deck();
	Player player1;
	Dialer dialer1;
	bool play = true;
	Hand::GameStatus currentGameStatus = Hand::GAME_CONTINUE;
	while (play) {
		player1.playp(my_deck);
		currentGameStatus = player1.checkGameStatus();
		switch (currentGameStatus) {
		case Hand::WIN_: cout << "player1 win!" << endl; play = false;
		case Hand::LOOSE_:  cout << "player1 LOOSE!" << endl; play = false;
		case Hand::GAME_CONTINUE:
			cout << "dialer1 takes  cards" << endl;
			dialer1.playd(my_deck);
			currentGameStatus = dialer1.checkGameStatus();
			switch (currentGameStatus) {
			case Hand::WIN_: cout << "dialer1 win!" << endl; play;
			case Hand::LOOSE_:cout << "dialer1 LOOSE!" << endl; play = false;
				/*case Hand::GAME_CONTINUE:int playerScore = player1.calculateScore();int dialerScore = dialer1.calculateScore();
					if (playerScore > dialerScore) { cout << "player1 win!" << endl; break; }
					else if (playerScore < dialerScore) { cout << "player1 loose!" << endl; break; }
					else if (playerScore == dialerScore) { cout << "draw!" << endl; break; }play = false;
					}*/
			}

		}

		return 0;
	}
}