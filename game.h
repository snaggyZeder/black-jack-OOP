#pragma once

#include <SFML/Graphics.hpp>

#include <iostream>
#include "card.h"
#include "deck.h"
#include "hand.h"
#include "player.h"
#include "dealer.h"
using namespace std;
class Game {
private:

	/*unsigned int fpW;
	unsigned int fdW;
	unsigned int fdraw;
	unsigned int fcountofGame;*/
public:

	void gaming(unsigned int&, unsigned int&, unsigned int&, unsigned int&, unsigned int& playerWin2, unsigned int&, sf::RenderWindow& window);
	/*void countScore();*/
};