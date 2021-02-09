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
	Hand::GameStatus currentGameStatus = Hand::GAME_CONTINUE;
	char playing = 'a';

	while (true) {

		if (currentGameStatus == Hand::GAME_CONTINUE) {
			cout << "player1 your turn" << endl;
			player1.playp1(my_deck);
			currentGameStatus = player1.checkGameStatus();
			

			if (currentGameStatus == Hand::WIN_) {
				cout << "Player1 win!" << endl; cout << endl; playerWin++;
				break;
			}
			

		else	if (currentGameStatus == Hand::LOOSE_) {
				cout << "Player1 lose!" << endl; cout << endl; dealerWin++; playerWin2++;
					break;
				}

	           else	if (currentGameStatus == Hand::GAME_CONTINUE) {
						cout << "player2 your turn!" << endl;
						player2.playp2(my_deck);
						currentGameStatus = player2.checkGameStatus();


						if (currentGameStatus == Hand::WIN_) {
							cout << "Player2 win!" << endl; cout << endl; playerWin2++;
							break;
						}
						else

							if (currentGameStatus == Hand::LOOSE_) {
								cout << "Player2 lose!" << endl; cout << endl; dealerWin++; playerWin++;
								break;
							}
							

						cout << "dealer plays" << endl;
						dealer.playd(my_deck);
						currentGameStatus = dealer.checkGameStatus();
						
						if (currentGameStatus == Hand::GAME_CONTINUE) {

							int playerScore1 = player1.calculateScore();
							int dealerScore = dealer.calculateScore();
							int playerScore2 = player2.calculateScore();


							if (playerScore2 < playerScore1 > dealerScore) {
								cout << "Player1 win!" << endl; cout << endl; playerWin++;
								break;
							}
							else if (playerScore1 < playerScore2 > dealerScore) {
								cout << "Player2 win!" << endl; cout << endl; playerWin2++;
								break;
							}

							else if (playerScore2 < dealerScore > playerScore1) {
								cout << "Dealer win!" << endl; cout << endl;  dealerWin++;
								break;
							}
							else
								if (dealerScore == playerScore1 && dealerScore == playerScore2 && playerScore1 == playerScore2) {
									cout << "Draw!" << endl; cout << endl; countDraw++;
									break;
								}
						}
						else

							if (currentGameStatus == Hand::WIN_) {
								cout << "Dealer win!" << endl; cout << endl;  dealerWin++;
								break;
							}
							else

								if (currentGameStatus == Hand::LOOSE_) {
									cout << "Dealer lose!" << endl; cout << endl; playerWin++; playerWin2++;
									break;
								}


					}
		}
	}
	countGame++;
}


//void Game::gaming(unsigned int& playerWin, unsigned int& dealerWin, unsigned int& countDraw, unsigned int& countGame, unsigned int& playerWin2) {
//	Deck my_deck;
//	my_deck.shuffle();
//	//my_deck.print_deck();
//	Player player1;
//	Player player2;
//	Dealer dealer;
//	Hand::GameStatus currentGameStatus = Hand::GAME_CONTINUE;
//	char playing = 'a';
//	bool game = true;
//	bool pl1 = true; bool pl2 = true; bool dl = true;
//
//	int playerScore1 = player1.calculateScore();
//	int dealerScore = dealer.calculateScore();
//
//	using namespace std;	int playerScore2 = player2.calculateScore();
//
//	while (game) {
//		if (currentGameStatus == Hand::GAME_CONTINUE) {
//			while (pl1 == true) {
//
//				cout << "player1 your turn" << endl;
//				player1.playp1(my_deck);
//				currentGameStatus = player1.checkGameStatus();
//
//				if (currentGameStatus == Hand::WIN_) {
//					cout << "Player1 win!" << endl; cout << endl; playerWin++;
//					pl1 = false; game = false;
//				}
//				else if (currentGameStatus == Hand::LOOSE_) {
//					cout << "Player1 lose!" << endl; cout << endl;
//					pl1 = false;
//				}
//
//				////
//				if (currentGameStatus == Hand::GAME_CONTINUE) {
//					while (pl2 == true) {
//						cout << "player2 your turn!" << endl;
//						player2.playp2(my_deck);
//						currentGameStatus = player2.checkGameStatus();
//
//
//						if (currentGameStatus == Hand::WIN_) {
//							cout << "Player2 win!" << endl; cout << endl; playerWin2++;
//							pl1 = false; game = false;
//						}
//						else
//
//							if (currentGameStatus == Hand::LOOSE_) {
//								cout << "Player2 lose!" << endl; cout << endl;
//								pl2 = false;
//							}
//						/////
//							else if (currentGameStatus == Hand::GAME_CONTINUE) {
//								while (dl == true) {
//									cout << "dealer plays" << endl;
//									dealer.playd(my_deck);
//									currentGameStatus = dealer.checkGameStatus();
//
//									if (currentGameStatus == Hand::WIN_) {
//										cout << "Dealer win!" << endl; cout << endl; dealerWin++;
//										dl = false; game = false;
//									}
//									else if (currentGameStatus == Hand::LOOSE_) {
//										cout << "dealer lose!" << endl; cout << endl;
//										dl = false; game = false;
//									}
//									///
//								}
//								////
//							}
//					}
//					/*if (dealerScore == playerScore1 && dealerScore == playerScore2 && playerScore1 == playerScore2) {
//								cout << "Draw!" << endl; cout << endl; countDraw++;
//								game=false;*/
//								/*}*/
//
//				}
//			}
//			countGame++;
//		}
//	}
//}