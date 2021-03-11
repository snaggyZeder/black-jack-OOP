#pragma once

#include <SFML/Graphics.hpp>

#include"deck.h"
#include"card.h"
#include<vector>
#include"hand.h"


class Player:public Hand{
public:
	void playp1(Deck&, sf::RenderWindow& window);
	void playp2(Deck&, sf::RenderWindow& window);
	void playp3(Deck&, sf::RenderWindow& window);
};