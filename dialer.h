#pragma once
#include"deck.h"
#include"card.h"
#include<vector>
#include"hand.h"
class Dialer:public Hand {
public:
	void playd(Deck&);
};