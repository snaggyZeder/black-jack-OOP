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
	
		char playing = 'a';
		unsigned int pW = 0; 
		unsigned int dW = 0; 
		unsigned int draw = 0;
		unsigned int countofGame = 0;
		while (playing == 'a') {
			my_game.gaming(pW, dW, draw, countofGame);
			wcout <<"playerWins= " << pW << endl;			
			wcout << "dealeWins= " << dW << endl;
			wcout << "draw= " << draw << endl;
			wcout << endl;
			wcout << "you have played " << countofGame <<" games"<< endl;
			wcout << endl;
			do {
				wcout << "if you want to play one more time, enter a(again), or s(stop)" << endl;
				cin >> playing;
			} while (playing != 'a' && playing != 's');

			if (playing == 's') { wcout << "thanks for game!" << endl; }
		}
		

}

