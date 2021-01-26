#include <iostream>
#include "card.h"
#include "deck.h"
#include "hand.h"
#include "player.h"
#include "dealer.h"
#include "game.h"
using namespace std;

void Game::gaming() {
    Deck my_deck;
    my_deck.shuffle();
    //my_deck.print_deck();
    Player player1;
    Dealer dealer;
    Hand::GameStatus currentGameStatus = Hand::GAME_CONTINUE;
    char playing = 'a';
    
        while (true) {
            
            player1.playp(my_deck);
            currentGameStatus = player1.checkGameStatus();
         
            if (currentGameStatus == Hand::WIN_) {
                cout << "Player1 win!" << endl;
                break;
            }
            else
                
                if (currentGameStatus == Hand::LOOSE_) {
                    cout << "Player1 lose!" << endl;
                    break;
                }
                else
                   
                    if (currentGameStatus == Hand::GAME_CONTINUE) {
                        
                        dealer.playd(my_deck);
                        currentGameStatus = dealer.checkGameStatus();
                        
                        if (currentGameStatus == Hand::GAME_CONTINUE) {
                           
                            int playerScore = player1.calculateScore();
                            int dealerSCore = dealer.calculateScore();
                           
                            if (playerScore > dealerSCore) {
                                cout << "Player1 win!" << endl;
                                break;
                            }
                          
                            if (dealerSCore > playerScore) {
                                cout << "Dealer win!" << endl;
                                break;
                            }
                            
                            if (dealerSCore == playerScore) {
                                cout << "Draw!" << endl;
                                break;
                            }
                        }
                        else
                           
                            if (currentGameStatus == Hand::WIN_) {
                                cout << "Dealer win!" << endl;
                                break;
                            }
                            else
                               
                                if (currentGameStatus == Hand::LOOSE_) {
                                    cout << "Dealer lose!" << endl;
                                    break;
                                }
                       
                                       
                            }
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
//
//void Game::gaming() {
//	Deck my_deck;
//	my_deck.shuffle();
//	//my_deck.print_deck();
//	Player player1;
//	Dealer dealer;
//	Hand::GameStatus currentGameStatus = Hand::GAME_CONTINUE;
//	char playing = 'a';
//
//	while (true) {
//		int playerScore = player1.calculateScore();
//		int dealerSCore = dealer.calculateScore();
//		player1.playp(my_deck);
//		dealer.playd(my_deck);
//	  if (21>=playerScore > dealerSCore) {
//				cout << "Player1 win!" << endl;
//				break;
//			  }
//
//	 else if (21>=dealerSCore > playerScore) {
//							  cout << "Dealer win!" << endl;
//							  break;
//						  }
//
//						else if (dealerSCore == playerScore) {
//							cout << "Draw!" << endl;
//							break;
//						}
//						else if(playerScore>21<dealerSCore) {
//							cout << "pick too much" << endl;
//							break;
//						}
//					
//			}
//	}
	


