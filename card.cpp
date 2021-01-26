#include "card.h"
#include <iostream>
#include "card.h"
using namespace std;
Card::Card() {
	m_suit = CARD_DIAMONDS;
	m_rank = CARD_2;
}
Card::Card(CardRank f_rank, CardSuits f_suit) {
	m_rank = f_rank;
	m_suit = f_suit;
}
void Card::print_card() {
	if (m_rank == CARD_2) cout << 2;
	else
	if (m_rank == CARD_3) cout << 3;
	else
	if (m_rank == CARD_4) cout << 4;
	else
	if (m_rank == CARD_5) cout << 5;
	else
	if (m_rank == CARD_6) cout << 6;
	else
	if (m_rank == CARD_7) cout << 7;
	else
	if (m_rank == CARD_8) cout << 8;
	else
	if (m_rank == CARD_9) cout << 9;
	else
	if (m_rank == CARD_10) cout << 10;
	else
	if (m_rank == CARD_J) cout << "Ja ";
	else
	if (m_rank == CARD_Q) cout << "Qu ";
	else
	if (m_rank == CARD_K) cout << "Ki ";
	else
	if (m_rank == CARD_A) cout << "A ";
	
	if (m_suit == CARD_DIAMONDS) cout << "D, " ;
	else
	if (m_suit == CARD_HEARTS) cout << "H, " ;
	else
	if (m_suit == CARD_SPADES) cout << "S, " ;
	else
	if (m_suit == CARD_CLUBS) cout << "C, " ;
	
}

int Card::get_score() {
	int score=0;
	switch (m_rank){
	case CARD_2:score += 2; return score;
	case CARD_3:score += 3; return score;
	case CARD_4:score += 4; return score;
	case CARD_5:score += 5; return score;
	case CARD_6:score += 6; return score;
	case CARD_7:score += 7; return score;
	case CARD_8:score += 8; return score;
	case CARD_9:score += 9; return score;
	case CARD_10:score += 10; return score;
	case CARD_J:score += 10; return score;
	case CARD_Q:score += 10; return score;
	case CARD_K:score += 10; return score;
	case CARD_A:score += 11; return score;
}
}

Card::CardRank Card::get_rank() {
	return m_rank;
}

Card::CardSuits Card::get_suits() {
	return m_suit;
}