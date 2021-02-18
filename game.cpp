#include <iostream>
#include "card.h"
#include "deck.h"
#include "hand.h"
#include "player.h"
#include "dealer.h"
#include "game.h"
using namespace std;


void Game::gaming(unsigned int& playerWin, unsigned int& dealerWin, unsigned int& countDraw, unsigned int& countGame, unsigned int& playerWin2) {
	Deck my_deck;
	my_deck.shuffle();
	//my_deck.print_deck();
	Player player1;
	Player player2;
	Dealer dealer;

	int playerScore1=0; int dealerScore=0; int playerScore2 = 0;

	Hand::GameStatus currentGameStatus1 = Hand::GAME_CONTINUE;
	Hand::GameStatus currentGameStatus2 = Hand::GAME_CONTINUE;
	Hand::GameStatus currentGameStatusd = Hand::GAME_CONTINUE;

	char playing = 'a';
	bool game = true;
	bool pl1 = true; bool pl2 = true; bool dl = true;

	//player1.takeOneCard(my_deck);
	//player2.takeOneCard(my_deck);


	while (pl1 == true) {

		cout << "player1 your turn!" << endl;
		
		player1.playp1(my_deck);
		currentGameStatus1 = player1.checkGameStatus();

		if (currentGameStatus1 == Hand::WIN_) {
			cout << "Player1 win!" << endl; cout << endl; playerWin++;
			pl1 = false;
		}
		else if (currentGameStatus1 == Hand::LOOSE_) {
			cout << "Player1 lose!" << endl; cout << endl;
			/*pl1 = false;*/
			
		}

		 if (currentGameStatus1 == Hand::GAME_CONTINUE || currentGameStatus1 == Hand::LOOSE_) {

			cout << "player2 your turn!" << endl;
			player2.playp2(my_deck);
			currentGameStatus2 = player2.checkGameStatus();


			if (currentGameStatus2 == Hand::WIN_) {
				cout << "Player2 win!" << endl; cout << endl; playerWin2++;
				pl1 = false;
			}
			else if (currentGameStatus2 == Hand::LOOSE_) {
				cout << "Player2 lose!" << endl; cout << endl;

			}
			if (currentGameStatus2 == Hand::LOOSE_ && currentGameStatus1 == Hand::LOOSE_) {
				cout << "Dealer win !" << endl; cout << endl; dealerWin++; pl1 = false;
			}


			else	 if (currentGameStatus2 == Hand::GAME_CONTINUE || currentGameStatus2 == Hand::LOOSE_) {

				cout << "dealer your turn!" << endl;
				dealer.playd(my_deck);
				currentGameStatusd = dealer.checkGameStatus();

				int playerScore1 = player1.calculateScore();
				int playerScore2 = player2.calculateScore();
				int dealerScore = dealer.calculateScore();



				if (currentGameStatusd == Hand::WIN_) {
					cout << "Dealer wins!" << endl; cout << endl; dealerWin++;
					pl1 = false;
				}
				else if (currentGameStatusd == Hand::LOOSE_) {
					cout << "dealer lose!" << endl; cout << endl;
					pl1 = false;
				}



				

				else  if (playerScore1 == playerScore2 && playerScore2 == dealerScore) {
					cout << "Draw!" << endl; cout << endl; countDraw++; pl1 = false;
				}
				else if (dealerScore > playerScore1 && dealerScore > playerScore2) {
					cout << "Dealer wins!" << endl; cout << endl; dealerWin++; pl1 = false;
				}
				else if (playerScore1 > dealerScore && playerScore1 > playerScore2) {
					cout << "Player1  wins!" << endl; cout << endl; playerWin++; pl1 = false;
				}

				else if (playerScore2 > dealerScore && playerScore2 > playerScore1) {
					cout << "Player2  wins!" << endl; cout << endl; playerWin2++; pl1 = false;
				}




				if (currentGameStatus2 == Hand::LOOSE_ && currentGameStatusd == Hand::LOOSE_) {
					cout << "player1  wins!" << endl; cout << endl; playerWin++; pl1 = false;
				}

				else if (currentGameStatus1 == Hand::LOOSE_ && currentGameStatusd == Hand::LOOSE_) {
					cout << "player2  wins!" << endl; cout << endl; playerWin2++; pl1 = false;
				}

			}

			

			

		}///prb skopka


		////
	}
	
	countGame++;
		
	}
