#include "deck.h"
#include "card.h"
Deck::Deck() {
	for (int j = 0; j < Card::MAX_SUITS; j++) {
		for (int k = 0; k < Card::MAX_RANK; k++) {
			//ńîçäŕňü ęŕđňó č äîáŕâčňü ĺ¸ â âĺęňîđ
			m_deck.push_back(Card::Card(static_cast<Card::CardRank>(k), static_cast<Card::CardSuits>(j)));
		}
	}
}
void Deck::swap(Card& a, Card& b) {
	Card temp;
	temp = a;
	a = b;
	b = temp;
}
void Deck::shuffle() {
	const int numberOfShuffles = 5;
	for (int j = 0; j < numberOfShuffles; j++) {
		//ňóńóĺě ęîëîäó
		for (int i = 0; i < deck_size; i++) {
			//âűáđŕëč ęŕđňó ńî ńëó÷ŕéíűě íîěĺđîě
			int randomCard = rand() % deck_size;
			//îáěĺí˙ëč ěĺńňŕěč ňĺęóůóţ č ńëó÷ŕéíî âűáđŕííóţ ęŕđňó
			swap(m_deck[i], m_deck[randomCard]);
		}
	}
}