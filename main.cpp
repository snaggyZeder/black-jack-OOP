#include <SFML/Graphics.hpp>

#include"deck.h"
#include"card.h"
#include"player.h"
#include"dealer.h"
#include"hand.h"
#include <iostream>
#include"game.h"
#include <io.h>
#include <fcntl.h>

using namespace std;

int main() {
	Game my_game;
	Game game_score;
		char playing = 'a';
		unsigned int pW = 0; unsigned int pW2 = 0;unsigned int pW3 = 0;
		unsigned int dW = 0; 
		unsigned int draw = 0;
		unsigned int countofGame = 0;
		
		sf::RenderWindow window(sf::VideoMode(800, 600), "Black jack!");
		Card card1;


		//while (playing == 'a') {
		//	my_game.gaming(pW, dW, draw, countofGame,pW2,pW3,window);
		//	/*game_score.countScore();*/
		//	cout <<"player1 Wins= " << pW << endl;
		//	cout << "player2 Wins= " << pW2 << endl;
		//	cout << "player3 Wins= " << pW3 << endl;
		//	cout << "dealeWins= " << dW << endl;
		//	cout << "draw= " << draw << endl;
		//	cout << endl;
		//	cout << "you have played " << countofGame <<" games"<< endl;
		//	cout << endl;

		while (window.isOpen())
		{
			// Обрабатываем очередь событий в цикле
			sf::Event event;
			while (window.pollEvent(event))
			{
				// Пользователь нажал на «крестик» и хочет закрыть окно?
				if (event.type == sf::Event::Closed)
					// тогда закрываем его
					window.close();
			}



			window.clear(sf::Color(250, 220, 100, 0));
			window.draw(card1.getSprite());
			window.display();

		}
			/*do {
				wcout << "if you want to play one more time, enter a(again), or s(stop)" << endl;
				cin >> playing;
			} while (playing != 'a' && playing != 's');

			if (playing == 's') { wcout << "thanks for game!" << endl; }
		}
		*/

}


	
	

