#pragma once
#include"deck.h"
#include"card.h"
#include<vector>
#include"hand.h"


class Player:public Hand{
public:
	void playp(Deck&);
	
};