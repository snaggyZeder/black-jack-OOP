#include"deck.h"
#include"card.h"
#include"player.h"
#include"dealer.h"
#include"hand.h"
#include <iostream>
#include"game.h"
using namespace std;

int main() {
	Game my_game;
	
		char playing = 'a';
		
		while (playing == 'a') {
			my_game.gaming();
			do {
				cout << "if you want to play 1 more time, enter a(again), or s(stop)" << endl;
				cin >> playing;
			} while (playing != 'a' && playing != 's');

			if (playing == 's') { cout << "thx for game" << endl; }
		}
		

}



//#include <iostream>
//#include "card.h"
//#include "deck.h"
//#include "hand.h"
//#include "player.h"
//#include "dealer.h"
//#include "game.h"
//using namespace std;

//int main() {
//	Deck my_deck;//создаем колоду
//	my_deck.shuffle();//тусуем колоду
//	//my_deck.print_deck();
//	Player player1;//создаем игрока
//	Dealer dealer;//создаем дилера
//	Hand::GameStatus currentGameStatus = Hand::GAME_CONTINUE;
//	char playing = 'a';
//	while (playing != 's') {
//		while (true) {
//			//
//			player1.playp(my_deck);
//			currentGameStatus = player1.checkGameStatus();
//			/*
//			switch(currentGameStatus){
//			 case Hand::GAME_WIN: break;
//			 case Hand::GAME_LOSE: break;
//			 case Hand::GAME_CONTINUE:
//			 switch(currentGameStatus){
//			  case Hand::GAME_WIN: break;
//			  case Hand::GAME_LOSE: break;
//			  case Hand::GAME_CONTINUE:
//			}
//			*/
//			//проверяем как сыграл игрок
//			//набрал 21 - выиграл сразу
//			if (currentGameStatus == Hand::WIN_) {
//				cout << "Player1 win!" << endl;
//				break;
//			}
//			else
//				//перебор - срызу проиграл
//				if (currentGameStatus == Hand::LOOSE_) {
//					cout << "Player1 lose!" << endl;
//					break;
//				}
//				else
//					//игрок набрал меньше 21 очка, играет дилер
//					if (currentGameStatus == Hand::GAME_CONTINUE) {
//						//дилер набирает карты в руку
//						dealer.playd(my_deck);
//						currentGameStatus = dealer.checkGameStatus();
//						//проверяем, как сыграл дилер
//						//если дилер набрал от 17 до 20 очков
//						if (currentGameStatus == Hand::GAME_CONTINUE) {
//							//вычисляем очки игрока и дилера
//							int playerScore = player1.calculateScore();
//							int dealerSCore = dealer.calculateScore();
//							//у игрока больше очков - победил игрок
//							if (playerScore > dealerSCore) {
//								cout << "Player1 win!" << endl;
//								break;
//							}
//							//у дилера больше - победил дилер
//							if (dealerSCore > playerScore) {
//								cout << "Dealer win!" << endl;
//								break;
//							}
//							//поровну - ничья
//							if (dealerSCore == playerScore) {
//								cout << "Draw!" << endl;
//								break;
//							}
//						}
//						else
//							//у дилера 21 очков - сразу выигрыш
//							if (currentGameStatus == Hand::WIN_) {
//								cout << "Dealer win!" << endl;
//								break;
//							}
//							else
//								//у дилера перебор - сразу проигрыш
//								if (currentGameStatus == Hand::LOOSE_) {
//									cout << "Dealer lose!" << endl;
//									break;
//								}
//					}
//		}
//		//повторение игры
//		cout << "if you want to play 1 more time,enter a(again),or s(stop)" << endl;
//		cin >> playing;
//		if (playing != 'a') {
//			while (true) {
//				//playing = 'a';
//				//while (playing == 'a'){
//				//my_game.play();
//				//cout << "if you want to play 1 more time,enter a(again),or s(stop)" << endl;
//				//cin >> playing;
//				//}
//				player1.playp(my_deck);
//				currentGameStatus = player1.checkGameStatus();
//				if (currentGameStatus == Hand::WIN_) {
//					cout << "Player1 win!" << endl;
//					break;
//				}
//				else
//					//перебор - срызу проиграл
//					if (currentGameStatus == Hand::LOOSE_) {
//						cout << "Player1 lose!" << endl;
//						break;
//					}
//					else
//						//игрок набрал меньше 21 очка, играет дилер
//						if (currentGameStatus == Hand::GAME_CONTINUE) {
//							//дилер набирает карты в руку
//							dealer.playd(my_deck);
//							currentGameStatus = dealer.checkGameStatus();
//							//проверяем, как сыграл дилер
//							//если дилер набрал от 17 до 20 очков
//							if (currentGameStatus == Hand::GAME_CONTINUE) {
//								//вычисляем очки игрока и дилера
//								int playerScore = player1.calculateScore();
//								int dealerSCore = dealer.calculateScore();
//								//у игрока больше очков - победил игрок
//								if (playerScore > dealerSCore) {
//									cout << "Player1 win!" << endl; break;
//								}
//								//у дилера больше - победил дилер
//								if (dealerSCore > playerScore) {
//									cout << "Dealer win!" << endl; break;
//								}
//								//поровну - ничья
//								if (dealerSCore == playerScore) {
//									cout << "Draw!" << endl;
//									break;
//								}
//							}
//							else
//								//у дилера 21 очков - сразу выигрыш
//								if (currentGameStatus == Hand::WIN_) {
//									cout << "Dealer win!" << endl;
//									break;
//								}
//								else
//									//у дилера перебор - сразу проигрыш
//									if (currentGameStatus == Hand::LOOSE_) {
//										cout << "Dealer lose!" << endl; break;
//									}
//
//						}
//						else break;
//			}
//		}
//	}
//}